struct LED {
  String name;
  int iot = 12;
  int ntp = 15;
  int wifi = 2;
  int bt  = 17;
};

struct LED led1,led2;
int light[]={led1.iot,led1.ntp,led1.wifi,led1.bt};

void setup() {
  Serial.begin(9600);
  pinMode(light[0],OUTPUT);
  pinMode(light[1],OUTPUT);
  pinMode(light[2],OUTPUT);
  pinMode(light[3],OUTPUT);
  
  pinMode(led1.iot,OUTPUT);
  pinMode(led1.ntp,OUTPUT);
  pinMode(led1.wifi,OUTPUT);
  pinMode(led1.bt,OUTPUT);
  led1.name = "Design by Gigi";

}

void loop() {
  Serial.print("Hello"+  led1.name);
  for(int x=0;  x<3; x++){
  digitalWrite(light[x], LOW);
  delay(80);
  digitalWrite(light[x],HIGH);
  delay(80);
  }

  for(int x=3;  x>0; x--){
  digitalWrite(light[x], LOW);
  delay(80);
  digitalWrite(light[x],HIGH);
  delay(80);
  }
}
