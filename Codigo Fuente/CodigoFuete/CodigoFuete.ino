#include <Keyboard.h>
const char mConConfiguracion[] PROGMEM = "Preuba";
const String  mCodConfiguracion = "Constante que guarda la configuración a digitar por teclado"; // 
int mPocicionCaracter = 0;

const int mLlaveInicio = 3;

boolean mInicioEscrbir= false;


void setup() {
  Keyboard.begin();
  pinMode(mLlaveInicio, INPUT);
}

void loop() {
 
 
 
  if (digitalRead(mLlaveInicio) == HIGH){    
      digitarCaracteres ();
  
 
  Keyboard.press(KEY_RIGHT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();  
  delay(1000);
  
  Keyboard.println("notepad");
  
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  
  Keyboard.print("Hola mundo!");
}


void digitarCaracteres (){
  for (int i = mPocicionCaracter; i < mCodConfiguracion.length(); i ++ ){
    
    if (digitalRead(mLlaveInicio) != HIGH)  // Si la llave está apagada termina de disipar por teclado 
      return;
    
    
    Keyboard.press(mCodConfiguracion.charAt());
    delay(100);
    
  }
}

