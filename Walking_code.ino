#include <HCPCA9685.h>
#define  I2CAdd 0x40
HCPCA9685 HCPCA9685(I2CAdd);

void setup(){
  HCPCA9685.Init(SERVO_MODE);
  HCPCA9685.Sleep(false);
}

void loop(){
  unsigned int Pos;
  int angle = 0;
  angle = 90;
  int libconversion = 0;

  delay(200);

   while(1){

    //initialise all joints to 90 - start position
    libconversion = map(90,0,180,10,450);  
    HCPCA9685.Servo(0, libconversion); 
    HCPCA9685.Servo(12, libconversion); 
    HCPCA9685.Servo(1, libconversion); 
    HCPCA9685.Servo(13, libconversion); 
    HCPCA9685.Servo(14, libconversion); 
    HCPCA9685.Servo(4, libconversion); 
    HCPCA9685.Servo(5, libconversion); 
    HCPCA9685.Servo(8, libconversion); 
    HCPCA9685.Servo(9, libconversion); 
    HCPCA9685.Servo(10, libconversion); 
    HCPCA9685.Servo(2, libconversion); //HEAD
    HCPCA9685.Servo(3, libconversion); //TAIL
    delay(200);
  

//********************************************************
//FRONT LEFT AND BACK RIGHT LEGS
//********************************************************
  
  //hips out
  libconversion = map(100,0,180,10,450);  
  HCPCA9685.Servo(0, libconversion); //hip
  libconversion = map(80,0,180,10,450);  
  HCPCA9685.Servo(12, libconversion); //hip
  delay(200);

  //knees
  libconversion = map(50,0,180,10,450);  
  HCPCA9685.Servo(13, libconversion);
  libconversion = map(140,0,180,10,450);  
  HCPCA9685.Servo(1, libconversion);
  delay(200);

  //foot
  libconversion = map(125,0,180,10,450);  
  HCPCA9685.Servo(14, libconversion); 
  delay(200);
  
  //hips back
  libconversion = map(90,0,180,10,450);  
  HCPCA9685.Servo(0, libconversion); 
  libconversion = map(80,0,180,10,450); 
  HCPCA9685.Servo(12, libconversion);   
  delay(200);
    
  //foot back
  libconversion = map(100,0,180,10,450);  
  HCPCA9685.Servo(14, libconversion); 
  delay(200);

  //knees back
  libconversion = map(90,0,180,10,450);  
  HCPCA9685.Servo(13, libconversion); 
  HCPCA9685.Servo(1, libconversion);
  delay(200);

//WIGGLE HEAD AND TAIL
  //to the left
  libconversion = map(60,0,180,10,450);  
  HCPCA9685.Servo(2 libconversion); 
  HCPCA9685.Servo(3, libconversion);
  delay(200);
  
  //to the right
  libconversion = map(120,0,180,10,450);  
  HCPCA9685.Servo(2, libconversion); 
  HCPCA9685.Servo(3, libconversion);
  delay(200);
  
  //reset
  libconversion = map(90,0,180,10,450);  
  HCPCA9685.Servo(2, libconversion); 
  HCPCA9685.Servo(3, libconversion);
  delay(200);
  
//********************************************************
//FRONT RIGHT AND BACK LEFT
//********************************************************
  delay(200);
  
  //set all joints to 90 - start position
  libconversion = map(90,0,180,10,450);  
  HCPCA9685.Servo(4, libconversion);
  HCPCA9685.Servo(8, libconversion); 
  HCPCA9685.Servo(5, libconversion); 
  HCPCA9685.Servo(9, libconversion); 
  HCPCA9685.Servo(10, libconversion); 
  delay(500);

  //hips out
  libconversion = map(110,0,180,10,450);  
  HCPCA9685.Servo(4, libconversion);
  HCPCA9685.Servo(8, libconversion);
  delay(200);

  //knees out
  libconversion = map(0,0,180,10,450);  
  HCPCA9685.Servo(5, libconversion);
  libconversion = map(140,0,180,10,450); 
  HCPCA9685.Servo(9, libconversion);
  delay(200);

  //feet out
  libconversion = map(65,0,180,10,450); 
  HCPCA9685.Servo(10, libconversion); 
  delay(200);

  //hips back
  libconversion = map(90,0,180,10,450);  
  HCPCA9685.Servo(4, libconversion);
  HCPCA9685.Servo(8, libconversion); 
  delay(200);

  //feet back
  libconversion = map(80,0,180,10,450); 
  HCPCA9685.Servo(10, libconversion); 
  delay(200);

  //knees back
  libconversion = map(90,0,180,10,450); 
  HCPCA9685.Servo(5, libconversion); 
  HCPCA9685.Servo(9, libconversion); 
  delay(200);


   }
}
