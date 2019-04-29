
// This is the rotation cipher system which will be used for encryption and decryption of messages

#include <stdio.h>

int main()
{
   int i;
   int options;
   int key;
   char str[250];

   printf("\nPlease enter a message:\t"); // prints the initial message
   gets(str); // stores the message into a string variable
   printf("Enter a key:");
   scanf("%i",&key);

   printf("\nPlease choose following options:\n");
   printf("1 = Encrypt the message.\n");
   printf("2 = Decrypt the message.\n");
   scanf("%d", &options); 

   
   switch(options)
   {
   case 1:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + key; //the key allows for the rotation. The key is added to ASCII values and rotates the letters that amount of times

      printf("\nEncrypted message: %s\n", str);
      break;

   case 2:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - key; 

      printf("\nDecrypted message: %s\n", str);
      break;

   
   }
   return 0;
}
