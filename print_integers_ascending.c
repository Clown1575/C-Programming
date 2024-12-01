#include <stdio.h>
#include <stdlib.h>

int sort(int numarr[],int n){//Sorting the numbers

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numarr[j] > numarr[j + 1]) {
                int temp = numarr[j];
                numarr[j] = numarr[j + 1];
                numarr[j + 1] = temp;
            }
        }
    }
}

int main() {

int n;

   printf("Please enter the amount of numbers needed to be in order.\n");// Asking the user how many values is needed to put in order
   scanf("%d", &n);

    if (n<=0){
    printf("Invalid number. Number should be higher than 0\n");//if the number of values are 0 or less than 0, it will be invalid
    return 1;


   }else{

        int numarr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numarr[i]);
    }
    sort(numarr, n);//Calling the sorting function

        printf("Sorted in according to the ascending order\n");//Output the sorted array
            for (int i = 0; i < n; i++) {
        printf("%d ", numarr[i]);
    }
    printf("\n");


}
}

