 
// #include <stdio.h>

// int main()
// {
//    int num1, num2, choice;
//    num1 = 4;
//    num2 = 6;
//    printf("num1 = %d, \tnum2 = %d\n", num1, num2);
//    do
//    {
//        printf("Please make a choice from below :\n");
//        printf("1. To see num1 + num2.\n");
//        printf("2. To see num1 - num2.\n");
//        printf("3. To see num1 * num2.\n");
//        printf("4. To exit the program.\n");
//        scanf ("%d", &choice);

//        if(choice == 1) printf("num1 + num2 = %d\n", num1+num2);
//        if(choice == 2) printf("num1 - num2 = %d\n", num1-num2);
//        if(choice == 3) printf("num1 * num2 = %d\n", num1*num2);

//    } while (choice != 4);
//    return 0;
// }
#include <stdio.h>

int main()
{
   int num1, num2, choice;
   num1 = 4;
   num2 = 6;
   printf("num1 = %d, \tnum2 = %d\n", num1, num2);
   for(choice = 5; choice != 4; )
   {
       printf("Please make a choice from below :\n");
       printf("1. To see num1 + num2.\n");
       printf("2. To see num1 - num2.\n");
       printf("3. To see num1 * num2.\n");
       printf("4. To exit the program.\n");
       scanf ("%d", &choice);

       if(choice == 1) printf("num1 + num2 = %d\n", num1+num2);
       if(choice == 2) printf("num1 - num2 = %d\n", num1-num2);
       if(choice == 3) printf("num1 * num2 = %d\n", num1*num2);
   }

   return 0;
}