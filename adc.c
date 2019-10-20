unsigned int adc;
void main()
{
 ADCON1 = 0x80;
 TRISA = 0xFF; // PORTA is input
 TRISC = 0x3F; // Pins RC7, RC6 are outputs
 TRISB = 0;    // PORTB is output
 do
 {
 adc = ADC_Read(2); // Get 10-bit results of AD conversion
 //of channel 1
 PORTB = adc;      // Send lower 8 bits to PORTB
 PORTC = adc >> 2; // Send 2 most significant                  //bits to RC7, RC6
 } while(1);
}