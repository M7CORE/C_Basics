// Arup Guha
// 5/27/09 - Shown in COP 3502
// Short example to show a function dynamically allocating an array of
// primitives.

#include <stdio.h>
#include <time.h>

#define ABSOLUTE_MAX 100000
#define MAX_INT 32767
#define DEFAULT 10

int* createRandArray(int size, int maxVal);
void print(int array[], int size);

int main() {

    int max, arraySize;

    srand(time(0));

    // Read in user input.
    printf("How big do you want your array?\n");
    scanf("%d", &arraySize);
    printf("What is the maximum value you want?\n");
    scanf("%d", &max);

    // Changes user values if they are not in the designated range.
    if (arraySize < 0) arraySize = DEFAULT;
    if (arraySize > ABSOLUTE_MAX) arraySize = ABSOLUTE_MAX;
    if (max < 0) max = DEFAULT;
    if (max > MAX_INT) max = MAX_INT;

    // Create a new array and print it!
    int* values = createRandArray(arraySize, max);
    print(values, arraySize);

    // Free the array memory.
    free(values);
    system("PAUSE");
    return 0;
}

// Creates an array with size elements, fills it with random values in between
// 1 and maxVal, and returns a pointer to this array.
int* createRandArray(int size, int maxVal)  {

     // Allocate the correct amount of memory for the array.
     int* temp;
     temp = (int*)malloc(size*sizeof(int));
     int i;

     // Fill in each array slot with a random value in the desired range.
     for (i=0; i<size; i++)
         temp[i] = 1 + rand()%maxVal;
     return temp;
}

// Prints out the first size elements of array separated by a space, followed
// by a newline.
void print(int array[], int size) {
    int i;
    for (i=0; i<size; i++)
        printf("%d ", array[i]);
    printf("\n");
}
