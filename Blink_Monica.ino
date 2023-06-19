//Declaro los pines para los Led
int Azul = 6;
int Rojo = 7;
int Amarillo = 8;
int Verde = 9;
int Verde2 =10;
int Amarillo2 = 11;

//Declaro los pines para los botones
int Pul0 = A0;
int Pul1 = A1;
int Pul2 = A2;
int Pul3 = A3;
int Pul4 = A4;
int Pul5 = A5;

//Declaro variables
int Pin_numero;
float Demora = 0;
float Publica =0;

void setup() { 
Serial.begin(9600);

//Declaro como salida los led
pinMode(Azul, OUTPUT);//Declaro Pin del led azul como salida
pinMode(Rojo, OUTPUT);
pinMode(Amarillo, OUTPUT);
pinMode(Verde, OUTPUT);
pinMode(Verde2, OUTPUT);
pinMode(Amarillo2, OUTPUT);

//Declaro como entrada los pulsadores
pinMode(Pul0, INPUT_PULLUP);
pinMode(Pul1, INPUT_PULLUP);
pinMode(Pul2, INPUT_PULLUP);
pinMode(Pul3, INPUT_PULLUP);
pinMode(Pul4, INPUT_PULLUP);
pinMode(Pul5, INPUT_PULLUP);
}


void loop() {
Pin_numero = random(6, 12);//Para que los led enciendan de manera aleatoria

   digitalWrite(Pin_numero, HIGH);//Enciendo el led aleatorio
   //Serial.println(Pin_numero); Bandera para saber que led elijio el random
   delay(500);
//---------------------------------------------------------------------------------------------
   if(Pin_numero == 6){                   //Condicional para saber si es el led Azul
     while(digitalRead(Pul0) == 1){       //Condicional hasta que se presiona el pulsador
      delay(1);                           //Demora de un milisegundo cada vez q pasa por aca
      Demora++;                           //Contador se incrementa en 1
     }
   digitalWrite(Pin_numero, LOW);         //Sale del while, apago led
   Demora = (Demora * 0.001);             //Ajusta variable a segundos
   Serial.print("Demora de reaccion : ");
   Serial.println(Demora);
   Demora = 0;                            //Inicializa el contador
   delay(100);
   }
//---------------------------------------------------------------------------------------------
   if(Pin_numero == 7){                   //Condicional para saber si es el led Azul
     while(digitalRead(Pul1) == 1){       //Condicional hasta que se presiona el pulsador
      delay(1);                           //Demora de un milisegundo cada vez q pasa por aca
      Demora++;                           //Contador se incrementa en 1
     }
   digitalWrite(Pin_numero, LOW);         //Sale del while, apago led
   Demora = (Demora * 0.001);             //Ajusta variable a segundos
   Serial.print("Demora de reaccion : ");
   Serial.println(Demora);
   Demora = 0;                            //Inicializa el contador
   delay(100);
   }
//---------------------------------------------------------------------------------------------
   if(Pin_numero == 8){                   //Condicional para saber si es el led Azul
     while(digitalRead(Pul2) == 1){       //Condicional hasta que se presiona el pulsador
      delay(1);                           //Demora de un milisegundo cada vez q pasa por aca
      Demora++;                           //Contador se incrementa en 1
     }
   digitalWrite(Pin_numero, LOW);         //Sale del while, apago led
   Demora = (Demora * 0.001);             //Ajusta variable a segundos
   Serial.print("Demora de reaccion : ");
   Serial.println(Demora);
   Demora = 0;                            //Inicializa el contador
   delay(100);
   }
//---------------------------------------------------------------------------------------------
   if(Pin_numero == 9){                   //Condicional para saber si es el led Azul
     while(digitalRead(Pul3) == 1){       //Condicional hasta que se presiona el pulsador
      delay(1);                           //Demora de un milisegundo cada vez q pasa por aca
      Demora++;                           //Contador se incrementa en 1
     }
   digitalWrite(Pin_numero, LOW);         //Sale del while, apago led
   Demora = (Demora * 0.001);             //Ajusta variable a segundos
   Serial.print("Demora de reaccion : ");
   Serial.println(Demora);
   Demora = 0;                            //Inicializa el contador
   delay(100);
   }
 //---------------------------------------------------------------------------------------------
   if(Pin_numero == 10){                   //Condicional para saber si es el led Azul
     while(digitalRead(Pul4) == 1){       //Condicional hasta que se presiona el pulsador
      delay(1);                           //Demora de un milisegundo cada vez q pasa por aca
      Demora++;                           //Contador se incrementa en 1
     }
   digitalWrite(Pin_numero, LOW);         //Sale del while, apago led
   Demora = (Demora * 0.001);             //Ajusta variable a segundos
   Serial.print("Demora de reaccion : ");
   Serial.println(Demora);
   Demora = 0;                            //Inicializa el contador
   delay(100);
   }
 //---------------------------------------------------------------------------------------------
   if(Pin_numero == 11){                   //Condicional para saber si es el led Azul
     while(digitalRead(Pul5) == 1){       //Condicional hasta que se presiona el pulsador
      delay(1);                           //Demora de un milisegundo cada vez q pasa por aca
      Demora++;                           //Contador se incrementa en 1
     }
   digitalWrite(Pin_numero, LOW);         //Sale del while, apago led
   Demora = (Demora * 0.001);             //Ajusta variable a segundos
   Serial.print("Demora de reaccion : ");
   Serial.println(Demora);
   Demora = 0;                            //Inicializa el contador
   delay(100);
   }




  
/*

int val0 = digitalRead(Pul0);
Serial.print(val0);
if(val0==0){
    digitalWrite(Azul, !digitalRead(Azul));   // turn the LED on (HIGH is the voltage level)

  delay(500);
 }
int val1 = digitalRead(Pul1);
Serial.print(val1);
if(val1==0){
    digitalWrite(Rojo, !digitalRead(Rojo));   // turn the LED on (HIGH is the voltage level)

  delay(500);
 }
 int val2 = digitalRead(Pul2);
Serial.print(val2);
if(val2==0){
    digitalWrite(Amarillo, !digitalRead(Amarillo));   // turn the LED on (HIGH is the voltage level)

  delay(500);
 }
 */         
}
