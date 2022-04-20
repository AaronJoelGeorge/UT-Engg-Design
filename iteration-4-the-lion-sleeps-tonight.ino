// Electronic Music
// Song: The Lion Sleeps Tonight
// Aaron George UT EID: ajg5369 
// Created 04/9/22

// import the LCD package
#include<LiquidCrystal.h>

// get an instance of the LCD object
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Pin # where the speaker is connected to
int speakerPin = 13; 

// Pin # where the LED is connected to
int ledPin = 10;
  
// Play the note for the specified time
void play(int note, int time){   
  // Play the note
  tone(speakerPin, note);
  
  // Wait for the specified time
  delay(time);
  
  // Clear the buffer
  noTone(speakerPin);
  delay(40);
}

void setup()
{ 
  int tempo = 165; // control the speed of the song
  int w = (60000 * 4) / tempo; // define a whole note as w
  int h = w/2; // half note
  int q = w/4; // quarter note
  int e = w/8; // eighth note
  int s = w/16; // sixteenth note
  int hdot = h*1.5; // half dotted note
  int qdot = q*1.5; // quarter dotted note
  int edot = e*1.5; // eighth dotted note
  int sdot = s*1.5; // sixteenth dotted note
   
  // define the frequency for the notes
  int rest = 0;
  int a4 = 440;
  int as4 = 466;
  int b4 = 494;
  int c4 = 262; 
  int c5 = 523;
  int d4 = 294;
  int e4 = 330;
  int f4 = 349;
  int g4 = 392;
  
  // set up the pins and LCD module
  pinMode(speakerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  lcd.begin(16, 2);
  
  // display song title
  lcd.setCursor(0,0);          
  lcd.print("The Lion Sleeps");
  lcd.setCursor(0,1);          
  lcd.print("Tonight ajg5369");
  delay(w);
  
  // Clear the buzzer buffer
  noTone(12);
  delay(w);
  
  // In the jungle, the mighty jungle - The Lion Sleeps Tonight song
  // Score available at https://musescore.com/user/18545446/scores/5061407
  int music[][2] = {// first measure
                    {f4,   q},
                    {g4,   q},
                    {a4,   e},
                    {g4,   q},
                    {a4,   e},
                    {as4,  q},
                    {a4,   q},
                    {g4,   q},
                    {f4,   q},
                    {g4,   e},
                    {a4,   q},
                    {c4,   e},
                    {c4,   q},
                    {c4,   e},
                    {c4,   q},
                    {c4,   w},
                      
                    // second measure                   
                    {f4,   q},
                    {g4,   q},
                    {a4,   e},
                    {g4,   q},
                    {a4,   e},
                    {as4,  q},
                    {a4,   q},
                    {g4,   e},
                    {f4,   q},
                    {g4,   e},
                    {a4,   q},
                    {c4,   e},
                    {c4,   q},
                    {c4,   e},
                    {c4,   q},
                    {c4,   hdot},
                    {rest, edot},
                    {a4,   s},
                      
                    // 6
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {as4,  edot},
                    {as4,  s},
                    {as4,  edot},
                    {as4,  s},
                    {as4,  edot},
                    {as4,  s},
                    {as4,  edot},
                    {as4,  s},
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {g4,   s},
                    {g4,   edot},
                    {g4,   s},
                    {g4,   edot},
                    {g4,   s},
                    {g4,   edot},
                    {g4,   s},                    
                      
                    // 10
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {as4,  edot},
                    {as4,  s},
                    {as4,  edot},
                    {as4,  s},
                    {as4,  edot},
                    {as4,  s},
                    {as4,  edot},
                    {as4,  s},
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {a4,   edot},
                    {a4,   s},
                    {g4,   s},
                    {g4,   edot},
                    {g4,   s},
                    {g4,   edot},
                    {g4,   s},
                    {g4,   edot},
                    {g4,   s},
                    
                    // 14
                    {f4,   q},
                    {g4,   q},
                    {a4,   e},
                    {g4,   q},
                    {a4,   e},
                    {as4,  q},
                    {a4,   q},
                    {g4,   e},
                    {f4,   q},
                    {g4,   e},
                    {a4,   q},
                    {g4,   q}, 
                    {f4,   q}, 
                    {a4,   q}, 
                    {g4,   w},
                    {c5,   q},
                    {a4,   q},
                    {g4,   e},
                    {a4,   q},
                    {c5,   e},
                    {as4,  q},
                    {a4,   q},
                    {g4,   e},
                    {f4,   q},
                    {g4,   e},
                    {a4,   q},
                    {g4,   q},
                    {f4,   q},
                    {a4,   q},
                    {g4,   w},
                      
                    // 22
                    {c5,   w},
                    {c5,   q},
                    {as4,  e},
                    {c5,   e},
                    {as4,  h},
                    {a4,   q},
                    {c4,   e},
                    {c4,   q},
                    {c4,   e},
                    {c4,   q},
                    {c4,   w},
                    {rest, q},
                    {a4,   e},
                    {g4,   e},
                    {f4,   e},
                    {e4,   e},
                    {d4,   e},
                    {c4,   e},
                    {d4,   w},
                    {rest, q},
                    {a4,   e},
                    {g4,   e},
                    {f4,   e},
                    {e4,   e},
                    {d4,   e},
                    {c4,   e},
                    {d4,   w},
                    
                    // 14
                    {f4,   q},
                    {g4,   q},
                    {a4,   e},
                    {g4,   q},
                    {a4,   e},
                    {as4,  q},
                    {a4,   q},
                    {g4,   e},
                    {f4,   q},
                    {g4,   e},
                    {a4,   q},
                    {g4,   q}, 
                    {f4,   q}, 
                    {a4,   q}, 
                    {g4,   w},
                    {c5,   q},
                    {a4,   q},
                    {g4,   e},
                    {a4,   q},
                    {c5,   e},
                    {as4,  q},
                    {a4,   q},
                    {g4,   e},
                    {f4,   q},
                    {g4,   e},
                    {a4,   q},
                    {g4,   q},
                    {f4,   q},
                    {a4,   q},
                    {g4,   w},

                    // 22
                    {c5,   w},
                    {c5,   q},
                    {as4,  e},
                    {c5,   e},
                    {as4,  h},
                    {a4,   q},
                    {c4,   e},
                    {c4,   q},
                    {c4,   e},
                    {c4,   q},
                    {c4,   w},
                    {rest, q},
                    {a4,   e},
                    {g4,   e},
                    {f4,   e},
                    {e4,   e},
                    {d4,   e},
                    {c4,   e},
                    {d4,   w},
                    {rest, q},
                    {a4,   e},
                    {g4,   e},
                    {f4,   e},
                    {e4,   e},
                    {d4,   e},
                    {c4,   e},
                    {d4,   w},
                     
                    // 30
                    {f4,   q},
                    {g4,   q},
                    {a4,   e},
                    {g4,   q},
                    {a4,   e},
                    {as4,  q},
                    {a4,   q},
                    {g4,   e},
                    {f4,   q},
                    {g4,   e},
                    {a4,   q},
                    {c4,   e},
                    {c4,   q},
                    {c4,   e},
                    {c4,   q},
                    {c4,   w},
                   
                    // 14
                    {f4,   q},
                    {g4,   q},
                    {a4,   e},
                    {g4,   q},
                    {a4,   e},
                    {as4,  q},
                    {a4,   q},
                    {g4,   e},
                    {f4,   q},
                    {g4,   e},
                    {a4,   q},
                    {g4,   q}, 
                    {f4,   q}, 
                    {a4,   q}, 
                    {g4,   w},
                    {c5,   q},
                    {a4,   q},
                    {g4, e},
                    {a4, q},
                    {c5, e},
                    {as4, q},
                    {a4, q},
                    {g4, e},
                    {f4, q},
                    {g4, e},
                    {a4, q},
                    {g4, q},
                    {f4, q},
                    {a4, q},
                    {g4, w},
                      
                    // 22
                    {c5, w},
                    {c5, q},
                    {as4, e},
                    {c5, e},
                    {as4, h},
                    {a4, q},
                    {c4, e},
                    {c4, q},
                    {c4, e},
                    {c4, q},
                    {c4, w},
                    {rest, q},
                    {a4, e},
                    {g4, e},
                    {f4, e},
                    {e4, e},
                    {d4, e},
                    {c4, e},
                    {d4, w},
                    {rest, q},
                    {a4, e},
                    {g4, e},
                    {f4, e},
                    {e4, e},
                    {d4, e},
                    {c4, e},
                    {d4, w},
                  };
  
  // the following code segment will not change for any song
  
  // find the length of the song (i.e. number of notes)
  int mlength = sizeof(music)/sizeof(music[0]);
  Serial.begin(9600);
  Serial.print(mlength);
  
  // define some constants for the display
  char ns[50] = "Note (Hz): ";
  char ts[50] = "Time (ms): ";
  char str[50];
 
  // loop through the note and duration pairs of the song
  for (int i = 0; i < mlength; i++) {
    // display the note frequency in the first line of LCD module
    lcd.setCursor(0,0);
    sprintf(str, "%s %4d", ns, music[i][0]);
    lcd.print(str);
    
    // display the note frequency in the second line of LCD module
    lcd.setCursor(0,1);          
    sprintf(str, "%s %4d", ts, music[i][1]);
    lcd.print(str);
    
    // light the LED based on the note played
    analogWrite(ledPin, 255*music[i][0]/550);

    // Play the note for the specified duration
    play(music[i][0],music[i][1]);
  }

  // display song title
  lcd.setCursor(0,0);          
  lcd.print("The End. Thanks!  ");
  lcd.setCursor(0,1);          
  lcd.print("Aaron / ajg5369   ");
}

void loop()
{
  // don't loop the music
  // entire song is played in setup() only once
  
}
