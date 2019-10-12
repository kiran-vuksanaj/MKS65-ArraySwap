#include<stdio.h>
#include<stdlib.h>
#include<time.h> // for random array seeding

int main(){
  srand( time(NULL) ); //seed the random number generator
  // ARRAY SWAP
  int ARY_LENGTH = 10; // separate declaration of array length so its still accessible
  int randArray[ ARY_LENGTH ]; // array declaration
  for(int i=0;i<ARY_LENGTH;i++){ //loop through all elements
    randArray[i] = rand(); // assign a random value to each (do i need it to go into an individual?)
  }
  randArray[ ARY_LENGTH - 1 ] = 0; // set last value to zero
  //print array
  for(int i=0;i<ARY_LENGTH;i++){
    printf("array value %d: %d \n",i,randArray[i]);
  }

  int secondArray[ ARY_LENGTH ]; // another declaration, using same array length
  int* forwardPointer = randArray; // a pointer to move forward along the first array
  int* backwardPointer = secondArray + ARY_LENGTH - 1; // a pointer to move backward along the second array
  for(int i=0;i<ARY_LENGTH;i++){
    *backwardPointer-- = *forwardPointer++; // assign value in second array, move backwards on second and move forward on first
  }

  //print second array
  for(int i=0;i<ARY_LENGTH;i++){
    printf("array value %d: %d \n",i,secondArray[i]);
  }


}
