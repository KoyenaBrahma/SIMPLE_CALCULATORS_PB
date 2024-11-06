#include <stdio.h>
int main(){
    int s,e,num1,num2,p,c,i,n;
    //s=starting range,e=ending range,p=power,i=for loop,c=counter to store the number of digits in the current number
    printf("Enter Starting Range:");
    scanf("%d",&s);
    printf("Enter Ending Range:");
    scanf("%d",&e);
      for (i = s; i <= e; i++) {
        num1 = i;
        num2 = i;
 while (num1 != 0) {
            num1 = num1 / 10;
            ++c;
        }//This loop calculates the number of digits in the current number (i) and stores it in the variable c.
         while (num2 != 0) {
            n = num2 % 10;
            int pow=1;
            for(int i=1;i<=c;i++)
            pow= pow*n;
           p = p + (pow);
            num2 = num2 / 10;
        }//This loop calculates the sum of digits raised to the power of the number of digits. It uses a nested for loop to perform the exponentiation for each digit.
         if (p == i) {
            printf("Armstrong Number:%d\n", i);
        }
        p = 0;
        c = 0;
    }//If the sum (arm) is equal to the original number (i), then the current number is an Armstrong number, and it is printed.
    return 0;
}
