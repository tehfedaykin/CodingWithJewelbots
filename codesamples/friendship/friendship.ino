Animation animation;
Timer timer;
LED led;

void setup() {
  // put your setup code here, to run once
}

void loop() {

  if (see_green_friends()) {
    animation.rainbows();
    timer.pause(500);
    led.turn_on_all(GREEN);
    timer.pause(4000);
  }
}
