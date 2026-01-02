#include <stdio.h>

int main() {

int size, i, sum=0, max, min; 

printf("Enter the size of the array: ");
scanf("%d", &size);
printf("\n");

int arr[size]; // Variable Length Array (VLA) declaration

for(i = 0; i < size; i++) {

    printf("Enter element %d: ", i + 1); //i+1 to display element number starting from 1
    scanf("%d", &arr[i]);
    sum += arr[i];

}
printf("The elements in the array are: \n");
for(i = 0; i < size-1; i++) { //size-1 to avoid trailing comma

    printf("%d, ", arr[i]); // Print element followed by a comma
    }
printf("%d", arr[size-1]); // Print last element without trailing comma
printf("\n"); 

max = min = arr[0]; // Initialize max and min with the first element
// Element sorting known as Linear Search
for(i = 1; i < size; i++) { // Start from second element

    if(arr[i] > max) {
        max = arr[i];
    }
    if(arr[i] < min) {
        min = arr[i];
    }
    }
printf("The sum of the elements is: %d\n", sum);
printf("The maximum element is: %d\n", max);
printf("The minimum element is: %d\n", min);
printf("\n======Code Executed Successfully======\n");


    return 0;
}