void main()
{
 char i, rfid[13];
 char card[] = "1E0030EC9E5C";
 UART1_Init(9600);                 // Initialize UART, 9600 baud rate

 rfid[12] = '\0';                  // String Terminating Character

 while(1)                          // Infinite Loop
 {
   if(UART1_Data_Ready())          // If UART Data Ready
   {
     for(i=0;i<12;)                // To Read 12 characters
     {
       if(UART1_Data_Ready())
       {
         rfid[i] = UART1_Read();
         i++;
       }
     }
     // Check For Errors
     if((rfid[0] ^ rfid[2] ^ rfid[4] ^ rfid[6] ^ rfid[8] == rfid[10]) && (rfid[1] ^ rfid[3] ^ rfid[5] ^ rfid[7] ^ rfid[9] == rfid[11]))
     {
      UART1_Write_Text(rfid);
     }
     else
     {
      UART1_Write_Text("ERROR");
     }
   }

} 
}
