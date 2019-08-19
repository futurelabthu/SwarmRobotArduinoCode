
                        //define the two direction logic pins and the speed / PWMA and PWMB pin
const int PWMA = 3;     // Front Motor (A)
const int AIN1 = 5;
const int AIN2 = 7;
                        // Rear  Motor (B)
const int PWMB = 2;
const int BIN1 = 4;
const int BIN2 = 6;

void setup()
{
                        // Motor A : set all pins as output
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

                        // Motor B : set all pins as output
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

                          //drive forward at full speed by pulling AIN1/BIN1 High
                        //and AIN2/BIN2 low, while writing a full 255 to PWMA/PWMB to
                        //control speed
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 100);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, 100);

}

void loop()
{

}
