#include <Keyboard.h>
const char mConConfiguracion[] PROGMEM = "Preuba";

void setup() {
  Keyboard.begin();
}

void loop() {
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
  for int      
}

