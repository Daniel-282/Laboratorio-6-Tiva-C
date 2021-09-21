const int boton1 = 31;
const int boton2 = 17;
const int boton3 = 2;

const int LEDR = 30;  
const int LEDB = 40;
const int LEDG = 39;

int Antirebote1;
int Antirebote2;
int Antirebote3;

int Bloqueo1;
int Bloqueo2;

int contador1;
int contador2;

#define J1_L1 3
#define J1_L2 4
#define J1_L3 5
#define J1_L4 6
#define J1_L5 7
#define J1_L6 8
#define J1_L7 9
#define J1_L8 10

#define J2_L1 23
#define J2_L2 24
#define J2_L3 25
#define J2_L4 26
#define J2_L5 27
#define J2_L6 28
#define J2_L7 29
#define J2_L8 19


void setup() {
  // put your setup code here, to run once:
  pinMode(boton1, INPUT_PULLUP);
  pinMode(boton2, INPUT_PULLUP);
  pinMode(boton3, INPUT_PULLUP);
  
  pinMode(J1_L1, OUTPUT);
  pinMode(J1_L2, OUTPUT);
  pinMode(J1_L3, OUTPUT);
  pinMode(J1_L4, OUTPUT);
  pinMode(J1_L5, OUTPUT);
  pinMode(J1_L6, OUTPUT);
  pinMode(J1_L7, OUTPUT);
  pinMode(J1_L8, OUTPUT);

  pinMode(J2_L1, OUTPUT);
  pinMode(J2_L2, OUTPUT);
  pinMode(J2_L3, OUTPUT);
  pinMode(J2_L4, OUTPUT);
  pinMode(J2_L5, OUTPUT);
  pinMode(J2_L6, OUTPUT);
  pinMode(J2_L7, OUTPUT);
  pinMode(J2_L8, OUTPUT);

  pinMode(LEDR, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDG, OUTPUT);

  Bloqueo1 = 0;
  Bloqueo2 = 1;
  contador1 = 0;
  contador2 = 0;
}

void inicio_carrera() {
  if (Bloqueo1 == 0 && digitalRead(boton3) == HIGH){
     Antirebote3 = 1;
  }
  if (Antirebote3 == 1 && digitalRead(boton3) == LOW){
    Bloqueo1 = 1;             //Bloquea el mismo boton del semaforo
    
    digitalWrite(LEDR, LOW);  //Limpia semaforo y luces de victoria
    digitalWrite(LEDG, LOW);
    digitalWrite(LEDB, LOW);

    digitalWrite(J1_L1, LOW); //Limpia luces de jugadores
    digitalWrite(J1_L2, LOW);
    digitalWrite(J1_L3, LOW);
    digitalWrite(J1_L4, LOW);
    digitalWrite(J1_L5, LOW);
    digitalWrite(J1_L6, LOW);
    digitalWrite(J1_L7, LOW);
    digitalWrite(J1_L8, LOW);
    
    digitalWrite(J2_L1, LOW);
    digitalWrite(J2_L2, LOW);
    digitalWrite(J2_L3, LOW);
    digitalWrite(J2_L4, LOW);
    digitalWrite(J2_L5, LOW);
    digitalWrite(J2_L6, LOW);
    digitalWrite(J2_L7, LOW);
    digitalWrite(J2_L8, LOW);
  
    contador1 = 0; //Reinicia contadores
    contador2 = 0;
    
    //Ejecuta semaforo
    digitalWrite(LEDR, HIGH);
    delay(1000);
    digitalWrite(LEDR, LOW);
    digitalWrite(LEDB, HIGH);
    delay(1000);
    digitalWrite(LEDB, LOW);
    digitalWrite(LEDG, HIGH);
    delay(1);
    Bloqueo2 = 0;  //Habilita los botones de jugadores
    //Fin semaforo
    Antirebote3 = 0;
  }
}

void jugador1() {
    if (Bloqueo2 == 0 && digitalRead(boton1) == 1){
      Antirebote1 = 1;
    }
    if (Antirebote1 == 1 && digitalRead(boton1) == 0){
      Antirebote1 = 0;
      //Ejecuta contador de decadas jugador 1
      contador1 = contador1 + 1;
    
    if (contador1 == 0){
      digitalWrite(J1_L1, LOW);
      digitalWrite(J1_L2, LOW);
      digitalWrite(J1_L3, LOW);
      digitalWrite(J1_L4, LOW);
      digitalWrite(J1_L5, LOW);
      digitalWrite(J1_L6, LOW);
      digitalWrite(J1_L7, LOW);
      digitalWrite(J1_L8, LOW);
    }
    if (contador1 == 1){
      digitalWrite(J1_L1, HIGH);
      digitalWrite(J1_L2, LOW);
      digitalWrite(J1_L3, LOW);
      digitalWrite(J1_L4, LOW);
      digitalWrite(J1_L5, LOW);
      digitalWrite(J1_L6, LOW);
      digitalWrite(J1_L7, LOW);
      digitalWrite(J1_L8, LOW);
    }
    if (contador1 == 2){
      digitalWrite(J1_L1, LOW);
      digitalWrite(J1_L2, HIGH);
      digitalWrite(J1_L3, LOW);
      digitalWrite(J1_L4, LOW);
      digitalWrite(J1_L5, LOW);
      digitalWrite(J1_L6, LOW);
      digitalWrite(J1_L7, LOW);
      digitalWrite(J1_L8, LOW);
    }
    if (contador1 == 3){
      digitalWrite(J1_L1, LOW);
      digitalWrite(J1_L2, LOW);
      digitalWrite(J1_L3, HIGH);
      digitalWrite(J1_L4, LOW);
      digitalWrite(J1_L5, LOW);
      digitalWrite(J1_L6, LOW);
      digitalWrite(J1_L7, LOW);
      digitalWrite(J1_L8, LOW);
    }
    if (contador1 == 4){
      digitalWrite(J1_L1, LOW);
      digitalWrite(J1_L2, LOW);
      digitalWrite(J1_L3, LOW);
      digitalWrite(J1_L4, HIGH);
      digitalWrite(J1_L5, LOW);
      digitalWrite(J1_L6, LOW);
      digitalWrite(J1_L7, LOW);
      digitalWrite(J1_L8, LOW);
    }
    if (contador1 == 5){
      digitalWrite(J1_L1, LOW);
      digitalWrite(J1_L2, LOW);
      digitalWrite(J1_L3, LOW);
      digitalWrite(J1_L4, LOW);
      digitalWrite(J1_L5, HIGH);
      digitalWrite(J1_L6, LOW);
      digitalWrite(J1_L7, LOW);
      digitalWrite(J1_L8, LOW);
    }
    if (contador1 == 6){
      digitalWrite(J1_L1, LOW);
      digitalWrite(J1_L2, LOW);
      digitalWrite(J1_L3, LOW);
      digitalWrite(J1_L4, LOW);
      digitalWrite(J1_L5, LOW);
      digitalWrite(J1_L6, HIGH);
      digitalWrite(J1_L7, LOW);
      digitalWrite(J1_L8, LOW);
    }
    if (contador1 == 7){
      digitalWrite(J1_L1, LOW);
      digitalWrite(J1_L2, LOW);
      digitalWrite(J1_L3, LOW);
      digitalWrite(J1_L4, LOW);
      digitalWrite(J1_L5, LOW);
      digitalWrite(J1_L6, LOW);
      digitalWrite(J1_L7, HIGH);
      digitalWrite(J1_L8, LOW);
    }
    if (contador1 == 8){
      digitalWrite(J1_L1, LOW);
      digitalWrite(J1_L2, LOW);
      digitalWrite(J1_L3, LOW);
      digitalWrite(J1_L4, LOW);
      digitalWrite(J1_L5, LOW);
      digitalWrite(J1_L6, LOW);
      digitalWrite(J1_L7, LOW);
      digitalWrite(J1_L8, HIGH);
    }
    }
    win();
}


void jugador2() {
    if (Bloqueo2 == 0 && digitalRead(boton2) == 1){
      Antirebote2 = 1;
    }
    if (Antirebote2 == 1 && digitalRead(boton2) == 0){
      Antirebote2 = 0;
      //Ejecuta contador de decadas jugador 1
      contador2 = contador2 + 1;
      
    if (contador2 == 0){
      digitalWrite(J2_L1, LOW);
      digitalWrite(J2_L2, LOW);
      digitalWrite(J2_L3, LOW);
      digitalWrite(J2_L4, LOW);
      digitalWrite(J2_L5, LOW);
      digitalWrite(J2_L6, LOW);
      digitalWrite(J2_L7, LOW);
      digitalWrite(J2_L8, LOW);
    }
    if (contador2 == 1){
      digitalWrite(J2_L1, HIGH);
      digitalWrite(J2_L2, LOW);
      digitalWrite(J2_L3, LOW);
      digitalWrite(J2_L4, LOW);
      digitalWrite(J2_L5, LOW);
      digitalWrite(J2_L6, LOW);
      digitalWrite(J2_L7, LOW);
      digitalWrite(J2_L8, LOW);
    }
    if (contador2 == 2){
      digitalWrite(J2_L1, LOW);
      digitalWrite(J2_L2, HIGH);
      digitalWrite(J2_L3, LOW);
      digitalWrite(J2_L4, LOW);
      digitalWrite(J2_L5, LOW);
      digitalWrite(J2_L6, LOW);
      digitalWrite(J2_L7, LOW);
      digitalWrite(J2_L8, LOW);
    }
    if (contador2 == 3){
      digitalWrite(J2_L1, LOW);
      digitalWrite(J2_L2, LOW);
      digitalWrite(J2_L3, HIGH);
      digitalWrite(J2_L4, LOW);
      digitalWrite(J2_L5, LOW);
      digitalWrite(J2_L6, LOW);
      digitalWrite(J2_L7, LOW);
      digitalWrite(J2_L8, LOW);
    }
    if (contador2 == 4){
      digitalWrite(J2_L1, LOW);
      digitalWrite(J2_L2, LOW);
      digitalWrite(J2_L3, LOW);
      digitalWrite(J2_L4, HIGH);
      digitalWrite(J2_L5, LOW);
      digitalWrite(J2_L6, LOW);
      digitalWrite(J2_L7, LOW);
      digitalWrite(J2_L8, LOW);
    }
    if (contador2 == 5){
      digitalWrite(J2_L1, LOW);
      digitalWrite(J2_L2, LOW);
      digitalWrite(J2_L3, LOW);
      digitalWrite(J2_L4, LOW);
      digitalWrite(J2_L5, HIGH);
      digitalWrite(J2_L6, LOW);
      digitalWrite(J2_L7, LOW);
      digitalWrite(J2_L8, LOW);
    }
    if (contador2 == 6){
      digitalWrite(J2_L1, LOW);
      digitalWrite(J2_L2, LOW);
      digitalWrite(J2_L3, LOW);
      digitalWrite(J2_L4, LOW);
      digitalWrite(J2_L5, LOW);
      digitalWrite(J2_L6, HIGH);
      digitalWrite(J2_L7, LOW);
      digitalWrite(J2_L8, LOW);
    }
    if (contador2 == 7){
      digitalWrite(J2_L1, LOW);
      digitalWrite(J2_L2, LOW);
      digitalWrite(J2_L3, LOW);
      digitalWrite(J2_L4, LOW);
      digitalWrite(J2_L5, LOW);
      digitalWrite(J2_L6, LOW);
      digitalWrite(J2_L7, HIGH);
      digitalWrite(J2_L8, LOW);
    }
    if (contador2 == 8){
      digitalWrite(J2_L1, LOW);
      digitalWrite(J2_L2, LOW);
      digitalWrite(J2_L3, LOW);
      digitalWrite(J2_L4, LOW);
      digitalWrite(J2_L5, LOW);
      digitalWrite(J2_L6, LOW);
      digitalWrite(J2_L7, LOW);
      digitalWrite(J2_L8, HIGH);
    }
    }
    win();
}


void win() {
    if (contador1 == 8){  //Si gana jugador 1 apaga luz verde semaforo y enciende roja de victoria
        digitalWrite(LEDR, HIGH);  
        digitalWrite(LEDG, LOW);
        digitalWrite(LEDB, LOW);

        Bloqueo2 = 1;     //Se bloquean los botones para ambos jugadores
        Bloqueo1 = 0;     //Se desbloquea el semaforo para volver a jugar
        Antirebote1 = 0;
        Antirebote2 = 0;
        delay(1);
    }
    if (contador2 == 8){  //Si gana jugador 2 apaga luz verde semaforo y enciende azul de victoria
        digitalWrite(LEDR, LOW);  
        digitalWrite(LEDG, LOW);
        digitalWrite(LEDB, HIGH);

        Bloqueo2 = 1;     //Se bloquean los botones para ambos jugadores
        Bloqueo1 = 0;     //Se desbloquea el semaforo para volver a jugar
        Antirebote1 = 0;
        Antirebote2 = 0;
        delay(1);
    }
}


void loop() {
  inicio_carrera();
  jugador1();
  jugador2();
}
