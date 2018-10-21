Animation animation;
Timer timer;
LED led;

void setup() {
  // put your setup code here, to run once
}

void loop() {

  if (see_red_friends()) {
    animation.rainbows();
    timer.pause(500);
    led.turn_on_all(RED);
    timer.pause(4000);
  }
}
