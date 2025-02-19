/*
 * Blink with variable
 * 
 * Turns an LED on for one second, repeatedly.
 * But blinkTime increases each time by one second
 * 
 * created on Feb 2025
 * by Giordan Zeina
 */

 int blinkTime = 1000;   // set variable to 1000

 void setup() {
   pinMode(LED_BUILTIN, OUTPUT);
 }
 
 void loop() {
   digitalWrite(LED_BUILTIN, HIGH); // turn the LED on
   delay(blinkTime); // Wait for 1000 millisecond(s)
   digitalWrite(LED_BUILTIN, LOW); // turn the LED off
   delay(blinkTime); // Wait for 1000 millisecond(s)
   blinkTime = blinkTime + 1000; // add one second to blinkTime
 }
 