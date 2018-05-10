void setup() {
  // put your setup code here, to run once:
  set_run_loop_charging();
}

LED led;
Animation animation;
Timer timer;

void loop() {
  // put your main code here, to run repeatedly:
  led.turn_on_all(GOLD);
  timer.pause(1000);
  led.turn_off_all();
  timer.pause(1000);
  animation.breathe_single_color(SKY);
  timer.pause(1000);
}
