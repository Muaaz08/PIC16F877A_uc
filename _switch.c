void main(){
     TRISB.F0 = 0; //OUTPUT
     TRISB.F1 = 1; //INPUT
     PORTB.F0 = 1;
     while(1){
      if(PORTB.F1 == 1){    // when pressed output is one( Active High )
       PORTB.F0 = ~PORTB.F0;
       }
      delay_ms(350);
     }
}