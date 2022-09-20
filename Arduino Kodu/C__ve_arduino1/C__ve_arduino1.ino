int mavi = 3;
int kirmizi = 5;
int yesil = 6;


void setup() {
  pinMode(mavi,OUTPUT);
  pinMode(kirmizi,OUTPUT);
  pinMode(yesil,OUTPUT);
  Serial.begin(9600);

}

void loop() {

  if(Serial.available()){
    char bilgi=Serial.read();
    if(bilgi=='1'){
      
      analogWrite(kirmizi,255);
      analogWrite(yesil,255); 
      analogWrite(mavi,255);
      
    }
    else if(bilgi=='2'){
      analogWrite(kirmizi,255);
      analogWrite(yesil,0); 
      analogWrite(mavi,0);
    }
    else if(bilgi=='3'){
      analogWrite(kirmizi,0);
      analogWrite(yesil,255);
      analogWrite(mavi,0);
       
    }
    else if(bilgi=='4'){
      analogWrite(kirmizi,0);
      analogWrite(yesil,0);
      analogWrite(mavi,255);
       
    }
    else if(bilgi=='5'){
      analogWrite(kirmizi,0);
      analogWrite(yesil,0); 
      analogWrite(mavi,0);
      
    }
    else if(bilgi=='6'){
      analogWrite(kirmizi,0);
      analogWrite(yesil,255); 
      analogWrite(mavi,255);
      
    }
    else if(bilgi=='7'){
      analogWrite(kirmizi,192);
      analogWrite(yesil,0); 
      analogWrite(mavi,192);
      
    }
    else if(bilgi=='8'){
      analogWrite(kirmizi,255);
      analogWrite(yesil,255); 
      analogWrite(mavi,0);
      
    }
    else if(bilgi=='9'){
      analogWrite(kirmizi,255);
      analogWrite(yesil,170); 
      analogWrite(mavi,0);
      
    }
    else if(bilgi=='a'){
      analogWrite(kirmizi,255);
      analogWrite(yesil,100); 
      analogWrite(mavi,0);
      
    }
    else if(bilgi=='0'){
      /*
      for(;;){
        analogWrite(kirmizi,255);
        analogWrite(yesil,0); 
        analogWrite(mavi,0);
        delay(1000);
        analogWrite(kirmizi,0);
        analogWrite(yesil,255); 
        analogWrite(mavi,0);
        delay(1000);
        analogWrite(kirmizi,0);
        analogWrite(yesil,0); 
        analogWrite(mavi,255);
        delay(1000);
        analogWrite(kirmizi,255);
        analogWrite(yesil,255); 
        analogWrite(mavi,0);
        delay(1000);
        analogWrite(kirmizi,0);
        analogWrite(yesil,255); 
        analogWrite(mavi,255);
        delay(1000);
        analogWrite(kirmizi,255);
        analogWrite(yesil,0); 
        analogWrite(mavi,255);
        delay(1000);
        
      }
      */
    }
    else if(bilgi=='b'){
      analogWrite(kirmizi,255);
      analogWrite(yesil,228); 
      analogWrite(mavi,196);
      
    }
    else if(bilgi=='c'){
      analogWrite(kirmizi,123);
      analogWrite(yesil,104);
      analogWrite(mavi,238);
       
    }
    else if(bilgi=='d'){
      analogWrite(kirmizi,255);
      analogWrite(yesil,0); 
      analogWrite(mavi,255);
      
    }
    else if(bilgi=='e'){
      /*
      for(;;){
        for(int x=0; x<=255;x++){
          analogWrite(kirmizi,x);
          delay(5);
          }
          delay(10);
        for(int y=0; y<=255;y++){
          analogWrite(yesil,y);
          delay(7);
          }
          delay(1000);
        for(int z=0; z<=255;z++){
          analogWrite(mavi,z);
          delay(9);
        }
      }    
    */
    }
    
    
    
    
    }

}
