void setup() {
  // put your setup code here, to run once:
  //set_run_loop_charging();
}

LED led;
Animation animation;
Timer timer;

void loop() {
  // put your main code here, to run repeatedly:

  //RED, GREEN, BLUE, YELLOW, CYAN, WHITE, ORANGE, GOLD
  //PURPLE, MAGENTA, PERIWINKLE, ROSE, OCEAN, SKY
    
  led.turn_on_all(RED);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(GREEN);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(BLUE);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(YELLOW);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(MAGENTA);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(CYAN);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(WHITE);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(ORANGE);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(GOLD);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(PURPLE);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(PERIWINKLE);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(ROSE);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(OCEAN);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(500);
  led.turn_on_all(SKY);
  timer.pause(1000);
}
