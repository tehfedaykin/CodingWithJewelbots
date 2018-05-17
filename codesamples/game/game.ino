bool isRose;
uint32_t how_long = 2000;

Timer timer;
Buzzer buzz;
LED led;
Animation animation;

void setup() {
// put your setup code here, to run once:
  set_arduino_button();

}

void loop() {
  // put your main code here, to run repeatedly:
  Rainbow(YELLOW);
  Rainbow(CYAN);
  Rainbow(WHITE);
  Rainbow(GREEN);
  Rainbow(SKY);
  Rainbow(ORANGE);
  Rainbow(PERIWINKLE);
  Rainbow(GOLD);
  Rainbow(ROSE);
  Rainbow(OCEAN);
  Rainbow(PURPLE);
}

void Rainbow(ColorLabel color){
  if(color == ROSE){
    isRose = true;
  }
  else {
    isRose = false;
  }
  led.turn_on_all(color);
  timer.pause(750);
}

void button_press(){
  led.turn_off_all();
  if(isRose){
    buzz.long_buzz();
    animation.rainbows();
    if (how_long > 100){
      how_long = how_long - 100;
    }
    else{
      how_long = 2000;
    }
  }
  else {
    led.turn_on_all(RED);
    buzz.short_buzz();
    timer.pause(500);
    led.turn_off_all();
    timer.pause(250);
    led.turn_on_all(RED);
    buzz.short_buzz();
    timer.pause(500);
    led.turn_off_all();
    timer.pause(250);
  }
}
