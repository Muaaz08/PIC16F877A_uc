void main(){
     TRISB = 0x00;
     PORTB =0x01;
     while(1){
              PORTB = PORTB << 1;
              delay_ms(350);
              if(PORTB == 0x80){
               PORTB =0x01;
               delay_ms(350);
               }
     }
}