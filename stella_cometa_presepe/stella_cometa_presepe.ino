void setup() {

  // l'uscita PWM e
  // l'ingresso analogico
  // non hanno bisogno 
  // di essere configurati

}

void loop() {

  analogWrite( 3, 
    map( 
      constrain ( 
        analogRead( A0 ),
        370, 655
      ),
      370, 655,
      255, 0
    )
  );

  delay(50);
}
