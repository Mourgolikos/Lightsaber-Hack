// The Notes, about Imperial March
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;

const int buzzerPin = 8; // Digital Pin 8
const int ledPin1 = 9;  // Digital Pin 9
const int ledPin2 = 13;  // Digital Pin 13 Built In Led can Change it if you want

int counter = 0;


// the setup function runs once when you press reset or power the board
void setup() {
    //Setup pin modes
  pinMode(buzzerPin, OUTPUT); // Digital Pin 8
  pinMode(ledPin1, OUTPUT); // Digital Pin 9
  pinMode(ledPin2, OUTPUT);  // Digital Pin 13
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin1, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(ledPin2, LOW);   // turn the LED off by making the voltage LOW
  delay(222);              // wait
  digitalWrite(ledPin1, HIGH);    // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin2, HIGH);    // turn the LED on (HIGH is the voltage level)
  delay(111);              // wait

  
  //Play first section
  firstSection();

  //Play second section
  secondSection();

  //Variant 1
  beep(f, 250); 
  beep(gS, 500); 
  beep(f, 350); 
  beep(a, 125);
  beep(cH, 500);
  beep(a, 375); 
  beep(cH, 125);
  beep(eH, 650);

  delay(500);

  //Repeat second section
  secondSection();

  //Variant 2
  beep(f, 250); 
  beep(gS, 500); 
  beep(f, 375); 
  beep(cH, 125);
  beep(a, 500); 
  beep(f, 375); 
  beep(cH, 125);
  beep(a, 650); 

  delay(650);
}


void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);

  //Play different LED depending on value of 'counter'
  if(counter % 2 == 0)
  {
    digitalWrite(ledPin1, HIGH);
    delay(duration);
    digitalWrite(ledPin1, LOW);
  }else
  {
    digitalWrite(ledPin2, HIGH);
    delay(duration);
    digitalWrite(ledPin2, LOW);
  }

  //Stop tone on buzzerPin
  noTone(buzzerPin);

  delay(50);

  //Increment counter
  counter++;
}


void firstSection()
{
  beep(a, 500);
  beep(a, 500);   
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150); 
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);

  delay(500);

  beep(eH, 500);
  beep(eH, 500);
  beep(eH, 500); 
  beep(fH, 350);
  beep(cH, 150);
  beep(gS, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);

  delay(500);
}

void secondSection()
{
  beep(aH, 500);
  beep(a, 300);
  beep(a, 150);
  beep(aH, 500);
  beep(gSH, 325);
  beep(gH, 175);
  beep(fSH, 125);
  beep(fH, 125);   
  beep(fSH, 250);

  delay(325);

  beep(aS, 250);
  beep(dSH, 500);
  beep(dH, 325); 
  beep(cSH, 175); 
  beep(cH, 125); 
  beep(b, 125); 
  beep(cH, 250); 

  delay(350);
}
