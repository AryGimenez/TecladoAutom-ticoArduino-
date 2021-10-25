#include <Keyboard.h>
const String  mCodConfiguracion = "Constante que guarda la configuración a digitar por teclado"; // 
int mPocicionCaracter = 0;

const int mLlaveInicio = 3;


void setup() {
  Keyboard.begin();
  pinMode(mLlaveInicio, INPUT);
}

void loop() {
 
 
 
  if (digitalRead(mLlaveInicio) == HIGH){    
      digitarCaracteres ();
}


void digitarCaracteres (){
  int xLargoConfiguracion = mCodConfiguracion.length();

  for (int i = mPocicionCaracter; i < xLargoConfiguracion; i ++ ){
    
    if (digitalRead(mLlaveInicio) != HIGH)  // Si la llave está apagada termina de disipar por teclado 
      return;
    
    Keyboard.press(mCodConfiguracion.charAt(i)); // 
    delay(100);

    mPocicionCaracter = i; // Guarda la posición de el ultimo caracter presionado de la cadena de configuración

  }

  mPocicionCaracter = 0; // Retorna a la posición 0 de la cadena 


}

