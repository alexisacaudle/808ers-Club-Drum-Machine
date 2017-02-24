#include <Bounce.h>
int button1 = 1;
int button2 = 2;
int button3 = 3;
int button4 = 4;
int button5 = 5;
 
Bounce swBounced1 = Bounce(button1, 10); 
Bounce swBounced2 = Bounce(button2, 10); 
Bounce swBounced3 = Bounce(button3, 10); 
Bounce swBounced4 = Bounce(button4, 10); 
Bounce swBounced5 = Bounce(button5, 10); 

void setup() {  

  Keyboard.begin(); 
         
  pinMode(button1, INPUT);
  digitalWrite(button1, HIGH);

  pinMode(button2, INPUT);
  digitalWrite(button2, HIGH);

  pinMode(button2, INPUT);
  digitalWrite(button2, HIGH);

  pinMode(button3, INPUT);
  digitalWrite(button3, HIGH);

  pinMode(button4, INPUT);
  digitalWrite(button4, HIGH);

  pinMode(button5, INPUT);
  digitalWrite(button5, HIGH);
}

  

void loop() {
  swBounced1.update();
  if (swBounced1.risingEdge()) { // due to negative logic, button released on rising edge
    Keyboard.press('k'); 
    delay(100);
    Keyboard.write("0");
    Serial.println("k");
    }
//
     swBounced2.update();
  if (swBounced2.risingEdge()) { // due to negative logic, button released on rising edge
    Keyboard.press('g'); 
    delay(100);
    Keyboard.write("0");
    Serial.println("g");

  } 

    swBounced3.update();
  if (swBounced3.risingEdge()) { // due to negative logic, button released on rising edge
    Keyboard.press('r'); 
    delay(100);
    Keyboard.write("0");
    Serial.println("r");
  } 

    swBounced4.update();
  if (swBounced4.risingEdge()) { // due to negative logic, button released on rising edge
    Keyboard.press('h'); 
    delay(100);
    Keyboard.write("0");
    Serial.println("h");

  } 

    swBounced5.update();
  if (swBounced5.risingEdge()) { // due to negative logic, button released on rising edge
    Keyboard.press('b'); 
    delay(100);
    Keyboard.write("0");
    Serial.println("b");
  }
}
