int num[10] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
int i =0;
void main(){
TRISB = 0x00;
  while(i<10){
  PORTB = num[i];
  i++;
  delay_ms(1000);
  }
  i=0;
}