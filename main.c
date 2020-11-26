#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 //Copyright by Fabio-Git-Dev - Software Engineer student UniBa




  //Variables

   int n1; //variables of input
   int n2;

   int sum; //variable for operand
   int sub;
   int mult;
   int divide;

   int choice; //Used to choose unit at the beginning

   int decision; //Used to chose option at the end of conversion.





int main() //Main function
{


  printf("Bin2Hex - Hex2Bin converter by Fabio-Git-Dev \n");



   do{


    printf("Wich operation you want to do? 1(+) 2(-) 3(x) 4(/) 5(Exit) \n");
    scanf("%d", &choice);

switch (choice) { //switch case for operand choice.

 case 1:

     do{

         printf("Insert first number \n");
         scanf("%d", &n1);


           printf("Insert second number \n");
            scanf("%d", &n2);

             printf("Doing Sum... \n");

              sum = n1 + n2;

              printf("%d \n", sum);

               printf("Do you want to continue with this operand? 1(Yes) 2(No) \n");
               scanf("%d \n", &decision);

   } while (decision == 1);
     break;



 case 2:

     do {

         printf("Insert first number \n");
         scanf("%d", &n1);

         printf("Insert second number \n");
         scanf("%d", &n2);

         sub = n1 - n2;

         printf("Subtraction.... \n");

         printf("%d \n", sub);

          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

    } while (decision == 1);
      break;




 case 3:

    do {
            printf("Insert first number \n");
         scanf("%d", &n1);

         printf("Insert second number \n");
         scanf("%d", &n2);

         printf("Doing mult... \n");

         mult = n1 * n2;

         printf("%d \n", mult);

          printf("Do you want to continue with this format? 1(Yes) 2(No)\n");
          scanf("%d", &decision);

    } while (decision == 1);
      break;


 case 4:
     do {
         printf("Insert first number \n");
         scanf("%d", &n1);

         printf("Insert second number \n");
         scanf("%d", &n2);

         printf("Doing division... \n");

         divide = n1 / n2;

         printf("%d \n", divide);

          printf("Do you want to continue with this format? 1(Yes) 2(No) \n");
          scanf("%d", &decision);

         } while (decision == 1);
           break;





default:    printf("Exiting program... \n"); //Value used to exit program.
            system("PAUSE");
            return 0;





}


} while (choice != 5);

}




 //end of function


































