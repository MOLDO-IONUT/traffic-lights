#define A  6
#define B  5
#define C  4
#define D  3
#define E  2
#define F  1
#define G  0
#define LED_Red_Cars 7
#define LED_Yellow_Cars 8
#define LED_Green_Cars 9
#define LED_Red_Pedestrians 10
#define LED_Green_Pedestrians 11
#define Buzzer 12

void setup()
{
  pinMode(LED_Red_Cars, OUTPUT);
  pinMode(LED_Yellow_Cars, OUTPUT);
  pinMode(LED_Green_Cars, OUTPUT);
  pinMode(LED_Red_Pedestrians, OUTPUT);
  pinMode(LED_Green_Pedestrians, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);    
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT); 
}

void loop()
{
  digitalWrite(LED_Red_Cars, HIGH);
  digitalWrite(LED_Green_Pedestrians, HIGH);
  digitalWrite(LED_Red_Pedestrians, LOW);
  tone(12, 100);
  
  //9
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);

  //8
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
 delay(1000);

 //7
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  delay(1000);

  //6
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);

  //5
  tone(12, 500);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);

  //4
  tone(12, 700);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);

  //3
   tone(12, 1000);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  delay(1000);

  //2
   tone(12, 1200);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  delay(1000);

  //1
  tone(12, 1500);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  delay(1000);

  //LINE
 tone(12, 2000);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(LED_Red_Pedestrians, LOW); 
  digitalWrite(LED_Red_Cars, LOW);
  
  
  digitalWrite(LED_Yellow_Cars, HIGH);
  delay(500); 
  
  digitalWrite(LED_Yellow_Cars, LOW);
  delay(500); 
  noTone(12);

  digitalWrite(LED_Green_Cars, HIGH);
   digitalWrite(LED_Red_Pedestrians, HIGH);
   digitalWrite(LED_Green_Pedestrians, LOW);
  delay(5000);

  digitalWrite(LED_Green_Cars, LOW);
  delay(1000); 
}
