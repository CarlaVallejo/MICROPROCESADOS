#define bot 6
int led_6=13;
int led_5=12;
int led_4=11;
int led_3=10;
int led_2=9;
int led=8;
int cont=0;
int estfin=0;
void setup() {
pinMode(bot,INPUT);
pinMode(led,OUTPUT);
pinMode(led_2,OUTPUT);
pinMode(led_3,OUTPUT);
pinMode(led_4,OUTPUT);
pinMode(led_5,OUTPUT);
pinMode(led_6,OUTPUT);

}

void loop() {
  int pl= digitalRead(bot);
  if (pl!=estfin){
    if(pl==HIGH){
      cont ++;
      
      }
    }
estfin=pl;

if (cont==1){
digitalWrite(led_6,HIGH);
            
  }
  if (cont==2){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
  }
  if (cont==3){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
  }
    if (cont==4){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
  }
   if (cont==5){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
  }
   if (cont==6){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
  }
   if (cont==7){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
  }
   if (cont==8){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
  }
   if (cont==9){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
  }
   if (cont==10){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
  }
   if (cont==11){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
  }
   if (cont==12){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
  }
   if (cont==13){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
  }
   if (cont==14){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
  }
   if (cont==15){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
  }
   if (cont==16){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
  }
   if (cont==17){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
  }
   if (cont==18){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
  }
   if (cont==19){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
  }
   if (cont==20){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
  }
   if (cont==21){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
  }
   if (cont==22){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
  }
   if (cont==23){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
  }
   if (cont==24){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
  }
   if (cont==25){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
  }
   if (cont==26){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
  }
   if (cont==27){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
  }
   if (cont==28){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
  }
   if (cont==29){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
  }
   if (cont==30){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
  }
   if (cont==31){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
  }
   if (cont==32){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==33){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);

  }
   if (cont==34){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==35){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==36){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==37){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==38){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==39){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==40){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==41){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==42){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==43){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==44){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==45){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==46){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==47){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,LOW);
digitalWrite(led,HIGH);
  }
   if (cont==48){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==49){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==50){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==51){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==52){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==53){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==54){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==55){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==56){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==57){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==58){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==59){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
   if (cont==60){
digitalWrite(led_6,LOW);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
     if (cont==61){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,LOW);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }
     if (cont==62){
digitalWrite(led_6,LOW);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
     }
   if (cont==63){
digitalWrite(led_6,HIGH);
digitalWrite(led_5,HIGH);
digitalWrite(led_4,HIGH);
digitalWrite(led_3,HIGH);
digitalWrite(led_2,HIGH);
digitalWrite(led,HIGH);
  }

  
}

  
