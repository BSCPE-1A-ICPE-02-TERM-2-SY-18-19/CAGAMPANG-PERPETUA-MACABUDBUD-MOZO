 #include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {2, 3, 4, 5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS );
long num=0;

void setup(){
Serial.begin(9600);
pinMode(22, OUTPUT);
pinMode(23, OUTPUT);
pinMode(24, OUTPUT);
pinMode(25, OUTPUT);
pinMode(26, OUTPUT);
pinMode(27, OUTPUT);
pinMode(28, OUTPUT);
pinMode(29, OUTPUT);
pinMode(30, OUTPUT);
pinMode(31, OUTPUT);
pinMode(32, OUTPUT);
pinMode(33, OUTPUT);
pinMode(34, OUTPUT);
pinMode(35, OUTPUT);
pinMode(36, OUTPUT);
pinMode(37, OUTPUT);
pinMode(38, OUTPUT);
pinMode(39, OUTPUT);
pinMode(40, OUTPUT);
pinMode(41, OUTPUT);
pinMode(42, OUTPUT);
pinMode(43, OUTPUT);
pinMode(44, OUTPUT);
pinMode(45, OUTPUT);
pinMode(46, OUTPUT);
}

class group4
{
  public:
    int i,j,k,l,count,prime,rem,temp,x;
    char str[100];
    void off(){
      digitalWrite(22, LOW);   digitalWrite(23, LOW); digitalWrite(24, LOW);  digitalWrite(25, LOW);digitalWrite(26, LOW);digitalWrite(27, LOW);  digitalWrite(28, LOW);  
      digitalWrite(29, LOW);  digitalWrite(30, LOW);  digitalWrite(31, LOW);  digitalWrite(32, LOW); digitalWrite(33, LOW); digitalWrite(34, LOW);digitalWrite(35, LOW);  
      digitalWrite(36, LOW); digitalWrite(37, LOW); digitalWrite(38, LOW); digitalWrite(39, LOW); digitalWrite(40, LOW); digitalWrite(41, LOW);  digitalWrite(42, LOW);
      digitalWrite(43, LOW); digitalWrite(44, LOW); digitalWrite(45, LOW);digitalWrite(46, LOW); 
    }
    void on(){
      digitalWrite(22, HIGH);  digitalWrite(23, HIGH); digitalWrite(24, HIGH);  digitalWrite(25, HIGH);digitalWrite(26, HIGH);digitalWrite(27, HIGH);  digitalWrite(28, HIGH);  
      digitalWrite(29, HIGH);  digitalWrite(30, HIGH);  digitalWrite(31, HIGH);  digitalWrite(32, HIGH); digitalWrite(33, HIGH); digitalWrite(34, HIGH);digitalWrite(35, HIGH);  
      digitalWrite(36, HIGH); digitalWrite(37, HIGH); digitalWrite(38, HIGH); digitalWrite(39, HIGH); digitalWrite(40, HIGH); digitalWrite(41, HIGH);  digitalWrite(42, HIGH);
      digitalWrite(43, HIGH); digitalWrite(44, HIGH); digitalWrite(45, HIGH);digitalWrite(46, HIGH); 
    }
    void starter(){
      digitalWrite(22, HIGH); delay(100); digitalWrite(23, HIGH);delay(100); digitalWrite(24, HIGH); delay(100); digitalWrite(25, HIGH);delay(100);digitalWrite(26, HIGH);delay(100);
      digitalWrite(27, HIGH);delay(100);  digitalWrite(28, HIGH);delay(100);  digitalWrite(29, HIGH);delay(100);  digitalWrite(30, HIGH); delay(100); digitalWrite(31, HIGH);delay(100);
      digitalWrite(32, HIGH); delay(100); digitalWrite(33, HIGH);delay(100); digitalWrite(34, HIGH);delay(100); digitalWrite(35, HIGH);delay(100);  digitalWrite(36, HIGH);delay(100);
      digitalWrite(37, HIGH);delay(100); digitalWrite(38, HIGH);delay(100); digitalWrite(39, HIGH);delay(100); digitalWrite(40, HIGH);delay(100); digitalWrite(41, HIGH);delay(100);
      digitalWrite(42, HIGH);delay(100); digitalWrite(43, HIGH);delay(100); digitalWrite(44, HIGH);delay(100); digitalWrite(45, HIGH);delay(100); digitalWrite(46, HIGH); delay(100);

       digitalWrite(22, LOW); delay(100); digitalWrite(23, LOW);delay(100); digitalWrite(24, LOW); delay(100); digitalWrite(25, LOW);delay(100);digitalWrite(26, LOW);delay(100);
      digitalWrite(27, LOW);delay(100);  digitalWrite(28, LOW);delay(100);  digitalWrite(29, LOW);delay(100);  digitalWrite(30, LOW); delay(100); digitalWrite(31, LOW);delay(100);
      digitalWrite(32, LOW); delay(100); digitalWrite(33, LOW);delay(100); digitalWrite(34, LOW);delay(100); digitalWrite(35, LOW);delay(100);  digitalWrite(36, LOW);delay(100);
      digitalWrite(37, LOW);delay(100); digitalWrite(38, LOW);delay(100); digitalWrite(39, LOW);delay(100); digitalWrite(40, LOW);delay(100); digitalWrite(41, LOW);delay(100);
      digitalWrite(42, LOW);delay(100); digitalWrite(43, LOW);delay(100); digitalWrite(44, LOW);delay(100); digitalWrite(45, LOW);delay(100); digitalWrite(46, LOW); delay(100);
    }

    void wasteful(){
      off();
      //TA
  digitalWrite(22, HIGH);digitalWrite(23, HIGH);digitalWrite(24, HIGH);digitalWrite(25, HIGH);digitalWrite(26, HIGH); digitalWrite(27, LOW); digitalWrite(28, HIGH); digitalWrite(29, LOW);  
  digitalWrite(30, LOW); digitalWrite(31, LOW); digitalWrite(32, LOW); digitalWrite(33, LOW); digitalWrite(34, HIGH); digitalWrite(35, LOW); digitalWrite(36, LOW); digitalWrite(37, LOW);  
  digitalWrite(38, HIGH);digitalWrite(39, LOW); digitalWrite(40, LOW);digitalWrite(41, LOW);digitalWrite(42, LOW);digitalWrite(43, LOW); digitalWrite(44, HIGH); digitalWrite(45, LOW);           
  digitalWrite(46, LOW); delay(1000);   

//MA
  digitalWrite(22, LOW); digitalWrite(23, HIGH);digitalWrite(24, LOW); digitalWrite(25, LOW);  digitalWrite(26, HIGH); digitalWrite(27, HIGH);  digitalWrite(28, LOW); digitalWrite(29, HIGH);  
  digitalWrite(30, LOW); digitalWrite(31, HIGH); digitalWrite(32, LOW);digitalWrite(33, LOW); digitalWrite(34, HIGH);digitalWrite(35, HIGH);digitalWrite(36, HIGH); digitalWrite(37, LOW);  
  digitalWrite(38, LOW);digitalWrite(39, HIGH);digitalWrite(40, LOW);digitalWrite(41, HIGH); digitalWrite(42, LOW); digitalWrite(43, LOW);digitalWrite(44, HIGH); digitalWrite(45, HIGH);           
  digitalWrite(46, HIGH);delay(1000);   

//NA
  digitalWrite(22, LOW);digitalWrite(23, HIGH); digitalWrite(24, HIGH); digitalWrite(25, HIGH); digitalWrite(26, LOW); digitalWrite(27, HIGH);digitalWrite(28, LOW);digitalWrite(29, HIGH);  
  digitalWrite(30, LOW); digitalWrite(31, HIGH);digitalWrite(32, LOW);digitalWrite(33, LOW);digitalWrite(34, HIGH);digitalWrite(35, LOW);digitalWrite(36, HIGH);digitalWrite(37, LOW);  
  digitalWrite(38, LOW);digitalWrite(39, HIGH);digitalWrite(40, LOW);digitalWrite(41, HIGH);digitalWrite(42, LOW);digitalWrite(43, LOW);digitalWrite(44, HIGH);digitalWrite(45, LOW);           
  digitalWrite(46, HIGH);delay(1000);  

  //NGA
  digitalWrite(22, HIGH);digitalWrite(23, HIGH);digitalWrite(24, LOW);digitalWrite(25, LOW);digitalWrite(26, LOW);digitalWrite(27, HIGH);digitalWrite(28, HIGH);digitalWrite(29, HIGH);  
  digitalWrite(30, LOW);digitalWrite(31, LOW);digitalWrite(32, LOW);digitalWrite(33, LOW);digitalWrite(34, HIGH);digitalWrite(35, HIGH);digitalWrite(36, HIGH);digitalWrite(37, HIGH);  
  digitalWrite(38, HIGH);digitalWrite(39, HIGH);digitalWrite(40, LOW);digitalWrite(41, HIGH);digitalWrite(42, HIGH);digitalWrite(43, HIGH);digitalWrite(44, LOW);digitalWrite(45, LOW);           
  digitalWrite(46, LOW);delay(1000);

  //PA
  digitalWrite(22, LOW);digitalWrite(23, LOW); digitalWrite(24, LOW);digitalWrite(25, LOW);digitalWrite(26, HIGH);digitalWrite(27, LOW);digitalWrite(28, LOW);digitalWrite(29, LOW);  
  digitalWrite(30, HIGH);digitalWrite(31, LOW);digitalWrite(32, LOW);digitalWrite(33, LOW);digitalWrite(34, HIGH);digitalWrite(35, HIGH);digitalWrite(36, HIGH);digitalWrite(37, HIGH);  
  digitalWrite(38, LOW);digitalWrite(39, LOW);digitalWrite(40, HIGH);digitalWrite(41, LOW);digitalWrite(42, LOW);digitalWrite(43, HIGH);digitalWrite(44, HIGH);digitalWrite(45, LOW);           
  digitalWrite(46, LOW); delay(1000);

  //SA
  digitalWrite(22, HIGH);digitalWrite(23, HIGH);digitalWrite(24, LOW);digitalWrite(25, HIGH);digitalWrite(26, HIGH);digitalWrite(27, LOW);digitalWrite(28, HIGH);digitalWrite(29, LOW);  
  digitalWrite(30, LOW);digitalWrite(31, HIGH);digitalWrite(32, LOW);digitalWrite(33, HIGH);digitalWrite(34, HIGH);digitalWrite(35, HIGH);digitalWrite(36, HIGH);digitalWrite(37, LOW);  
  digitalWrite(38, HIGH); digitalWrite(39, LOW);digitalWrite(40, LOW);digitalWrite(41, HIGH);digitalWrite(42, LOW);digitalWrite(43, HIGH);digitalWrite(44, LOW);digitalWrite(45, HIGH);           
  digitalWrite(46, HIGH);delay(1000);

  //TA
  digitalWrite(22, LOW);digitalWrite(23, LOW);digitalWrite(24, LOW); digitalWrite(25, LOW);digitalWrite(26, LOW);digitalWrite(27, LOW);digitalWrite(28, LOW);digitalWrite(29, HIGH);  
  digitalWrite(30, HIGH);digitalWrite(31, HIGH);digitalWrite(32, HIGH);digitalWrite(33, HIGH);digitalWrite(34, LOW);digitalWrite(35, LOW);digitalWrite(36, LOW);digitalWrite(37, LOW);  
  digitalWrite(38, HIGH);digitalWrite(39, LOW);digitalWrite(40, LOW);digitalWrite(41, LOW);digitalWrite(42, LOW);digitalWrite(43, HIGH);digitalWrite(44, LOW);digitalWrite(45, LOW);           
  digitalWrite(46, LOW); delay(1000);

  //WA

  digitalWrite(22, LOW);digitalWrite(23, HIGH);digitalWrite(24, HIGH);digitalWrite(25, HIGH);digitalWrite(26, LOW);digitalWrite(27, LOW);digitalWrite(28, LOW);digitalWrite(29, LOW); 
  digitalWrite(30, LOW);digitalWrite(31, HIGH);digitalWrite(32, HIGH);digitalWrite(33, HIGH);digitalWrite(34, LOW);digitalWrite(35, LOW);digitalWrite(36, HIGH);digitalWrite(37, LOW);  
  digitalWrite(38, HIGH);digitalWrite(39, LOW);digitalWrite(40, LOW);digitalWrite(41, HIGH);digitalWrite(42, LOW);digitalWrite(43, HIGH);digitalWrite(44, HIGH);digitalWrite(45, HIGH);           
  digitalWrite(46, LOW);delay(1000);

  //YA
  digitalWrite(22, LOW);digitalWrite(23, LOW);digitalWrite(24, LOW);digitalWrite(25, LOW);digitalWrite(26, HIGH); digitalWrite(27, LOW);digitalWrite(28, LOW);digitalWrite(29, LOW);  
  digitalWrite(30, HIGH);digitalWrite(31, LOW);digitalWrite(32, LOW);digitalWrite(33, LOW);digitalWrite(34, LOW);digitalWrite(35, HIGH);digitalWrite(36, LOW);digitalWrite(37, HIGH);  
  digitalWrite(38, LOW);digitalWrite(39, LOW);digitalWrite(40, HIGH);digitalWrite(41, LOW);digitalWrite(42, LOW);digitalWrite(43, HIGH);digitalWrite(44, HIGH);digitalWrite(45, LOW);           
  digitalWrite(46, LOW);delay(1000);
    }

    void not_wasteful(){
      off();
      digitalWrite(22, HIGH); delay(100); digitalWrite(23, HIGH);delay(100); digitalWrite(24, HIGH); delay(100); digitalWrite(25, HIGH);delay(100);digitalWrite(26, HIGH);delay(100);
      digitalWrite(31, HIGH);delay(100);  digitalWrite(36, HIGH);delay(100);  digitalWrite(41, HIGH);delay(100);  digitalWrite(46, HIGH); delay(100); digitalWrite(45, HIGH);delay(100);
      digitalWrite(44, HIGH); delay(100); digitalWrite(43, HIGH);delay(100); digitalWrite(42, HIGH);delay(100); digitalWrite(37, HIGH);delay(100);  digitalWrite(32, HIGH);delay(100);
      digitalWrite(27, HIGH);delay(100); digitalWrite(28, HIGH);delay(100); digitalWrite(29, HIGH);delay(100); digitalWrite(30, HIGH);delay(100); digitalWrite(35, HIGH);delay(100);
      digitalWrite(40, HIGH);delay(100); digitalWrite(39, HIGH);delay(100); digitalWrite(38, HIGH);delay(100); digitalWrite(33, HIGH);delay(100); digitalWrite(34, HIGH); delay(100);

      digitalWrite(34, LOW); delay(100); digitalWrite(33, LOW);delay(100); digitalWrite(38, LOW); delay(100); digitalWrite(39, LOW);delay(100);digitalWrite(40, LOW);delay(100);
      digitalWrite(35, LOW);delay(100);  digitalWrite(30, LOW);delay(100);  digitalWrite(29, LOW);delay(100);  digitalWrite(28, LOW); delay(100); digitalWrite(27, LOW);delay(100);
      digitalWrite(32, LOW); delay(100); digitalWrite(37, LOW);delay(100); digitalWrite(42, LOW);delay(100); digitalWrite(43, LOW);delay(100);  digitalWrite(44, LOW);delay(100);
      digitalWrite(45, LOW);delay(100); digitalWrite(46, LOW);delay(100); digitalWrite(41, LOW);delay(100); digitalWrite(36, LOW);delay(100); digitalWrite(31, LOW);delay(100);
      digitalWrite(26, LOW);delay(100); digitalWrite(25, LOW);delay(100); digitalWrite(24, LOW);delay(100); digitalWrite(23, LOW);delay(100); digitalWrite(22, LOW); delay(100);
    }

    void Input(){
      char key = keypad.getKey();

      if(key=='0')
      {
        off();
      digitalWrite(23,HIGH); digitalWrite(24,HIGH); digitalWrite(25,HIGH);  digitalWrite(28,HIGH);  digitalWrite(30,HIGH); digitalWrite(33,HIGH);
      digitalWrite(35,HIGH); digitalWrite(38,HIGH); digitalWrite(40,HIGH); digitalWrite(43,HIGH); digitalWrite(44,HIGH); digitalWrite(45,HIGH); 
      num=(num*10)+0;
      Serial.println(key);
      }

      if(key=='1')
      {
        off();
      digitalWrite(29,HIGH); digitalWrite(24,HIGH); digitalWrite(34,HIGH);  digitalWrite(28,HIGH);  digitalWrite(39,HIGH); 
      digitalWrite(43,HIGH); digitalWrite(44,HIGH); digitalWrite(45,HIGH); 
      num=(num*10)+1;
      Serial.println(key);
      }

      if(key=='2')
      {
        off();
      digitalWrite(23,HIGH); digitalWrite(24,HIGH); digitalWrite(25,HIGH);  digitalWrite(34,HIGH);  digitalWrite(30,HIGH); digitalWrite(33,HIGH);
      digitalWrite(35,HIGH); digitalWrite(38,HIGH); digitalWrite(43,HIGH); digitalWrite(44,HIGH); digitalWrite(45,HIGH); 
      num=(num*10)+2;
      Serial.println(key);
      }

      if(key=='3')
      {
        off();
      digitalWrite(23,HIGH); digitalWrite(24,HIGH); digitalWrite(25,HIGH);  digitalWrite(34,HIGH);  digitalWrite(30,HIGH); digitalWrite(33,HIGH);
      digitalWrite(35,HIGH); digitalWrite(40,HIGH); digitalWrite(43,HIGH); digitalWrite(44,HIGH); digitalWrite(45,HIGH); 
      num=(num*10)+3;
      Serial.println(key);
      }

      if(key=='4')
      {
        off();
      digitalWrite(28,HIGH); digitalWrite(23,HIGH); digitalWrite(25,HIGH);  digitalWrite(34,HIGH);  digitalWrite(30,HIGH); digitalWrite(33,HIGH);
      digitalWrite(35,HIGH); digitalWrite(40,HIGH);  digitalWrite(45,HIGH); 
      num=(num*10)+4;
      Serial.println(key);
      }

      if(key=='5')
      {
        off();
      digitalWrite(28,HIGH); digitalWrite(23,HIGH); digitalWrite(25,HIGH);  digitalWrite(34,HIGH);  digitalWrite(24,HIGH); digitalWrite(33,HIGH);
      digitalWrite(35,HIGH); digitalWrite(40,HIGH);  digitalWrite(45,HIGH); digitalWrite(43,HIGH);  digitalWrite(44,HIGH); 
      num=(num*10)+5;
      Serial.println(key);
      }
 
      if(key=='6')
      {
        off();
      digitalWrite(28,HIGH); digitalWrite(23,HIGH); digitalWrite(25,HIGH);  digitalWrite(34,HIGH);  digitalWrite(24,HIGH); digitalWrite(33,HIGH);
      digitalWrite(35,HIGH); digitalWrite(40,HIGH);  digitalWrite(45,HIGH); digitalWrite(43,HIGH);  digitalWrite(44,HIGH); digitalWrite(38,HIGH);
      num=(num*10)+6;
      Serial.println(key);
      }

      if(key=='7')
      {
        off();
      digitalWrite(23,HIGH); digitalWrite(25,HIGH);   digitalWrite(24,HIGH); 
      digitalWrite(35,HIGH); digitalWrite(40,HIGH);  digitalWrite(45,HIGH); digitalWrite(30,HIGH);   
      num=(num*10)+7;
      Serial.println(key);
      }

      if(key=='8')
      {
        off();
      digitalWrite(28,HIGH); digitalWrite(23,HIGH); digitalWrite(25,HIGH);  digitalWrite(34,HIGH);  digitalWrite(24,HIGH); digitalWrite(33,HIGH);
      digitalWrite(35,HIGH); digitalWrite(40,HIGH);  digitalWrite(45,HIGH); digitalWrite(43,HIGH);  digitalWrite(44,HIGH); digitalWrite(38,HIGH);
      digitalWrite(30,HIGH);
      num=(num*10)+8;
      Serial.println(key);
      }

       if(key=='9')
      {
        off();
      digitalWrite(28,HIGH); digitalWrite(23,HIGH); digitalWrite(25,HIGH);  digitalWrite(34,HIGH);  digitalWrite(24,HIGH); digitalWrite(33,HIGH);
      digitalWrite(35,HIGH); digitalWrite(40,HIGH);  digitalWrite(45,HIGH); digitalWrite(43,HIGH);  digitalWrite(44,HIGH);digitalWrite(30,HIGH);
      num=(num*10)+9;
      Serial.println(key);
      }

      if(key=='A'){
        x=num;
       Serial.println(num);
       output();
      }

       if(key=='B'){
       starter();
    }  
    if(key=='C'){
       off();
       num=0;
    }
    if(key=='D'){
       num=num/10;
       Serial.println(num);
       Serial.println(key);
    }
    if(key=='*'){
       off();
    digitalWrite(22,HIGH);digitalWrite(24,HIGH);digitalWrite(26,HIGH);digitalWrite(28,HIGH); digitalWrite(29,HIGH); digitalWrite(30,HIGH);digitalWrite(32,HIGH);digitalWrite(33,HIGH);
    digitalWrite(34,HIGH); digitalWrite(35,HIGH); digitalWrite(36,HIGH); digitalWrite(38,HIGH); digitalWrite(39,HIGH); digitalWrite(40,HIGH);digitalWrite(42,HIGH);digitalWrite(44,HIGH);
    digitalWrite(46,HIGH); Serial.println(key);
    }
  if(key=='#'){
      on();
      Serial.println(key);
    }   
  }

   void output(){
        
       count=0;
       prime=0;
      j=2;
      while(num!=0)
      {
        num=num/10;
        count++;
      }
      
      while(x!=0)
      {
        if(x%j==0)
        {
          prime++;
          x=x/j;
          if(x==1)
          {
            break;
          }
        }
        else
        {
          j++;
        }
      }
     
      if(prime>count)
      {
        wasteful();
      }
      else
      {
        not_wasteful();
      }
     }
};

void loop(){
  group4 shop;
  shop.Input();

}
