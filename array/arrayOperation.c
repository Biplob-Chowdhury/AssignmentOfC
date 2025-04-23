#include <stdio.h>
#include <stdlib.h>

void insertArray(int array[], int size) {

    printf("Please Enter your %d Values: ", size);

    for(int i = 0; i < size; ++i) scanf("%d", &array[i]);

    displayArray(array, size);

}


void displayArray(int array[], int size) {

    printf("Your Current array is: ");

    for(int i = 0; i < size; ++i) printf("%d ", array[i]);

    printf("\n");
}


void updateArray(int array[], int size) {

    int position, newValue;

    printf("Enter the position to update (1 to %d): ", size);

    scanf("%d", &position);

    if(position >= 1 && position <= size) {

        printf("Enter the new value: ");
        scanf("%d", &newValue);

        array[position-1] = newValue;
        displayArray(array, size);
    }
    else {
        printf("Please Enter Valid position from 1 to %d\n", size);
    }
}

void deleteElementFromArray(int array[], int size) {

    int position;

    printf("Enter the position to delete (1 to %d): ", size);
    scanf("%d", &position);

    if(position >= 1 && position <= size) {
        for(int i = position-1; i < size - 1; ++i) {
            array[i] = array[i + 1];
        }
    }
    else {
        printf("Please Enter Valid position from 1 to %d\n", size);
    }

    printf("After Delete Element from Position %d.\n", position);

    displayArray(array, size-1);

}


void bubbleSort(int array[], int size) {

    for (int i = 0; i < size - 1; ++i) {

        for (int j = 0; j < size - i - 1; ++j) {

            if (array[j] > array[j + 1]) {

                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Your Current Array is in (increasing Order) after applying Bubble sort:\n");
    displayArray(array, size);

}


void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {

        int minElmntIndx = i;

        for (int j = i + 1; j < size; ++j) {

            if (array[j] < array[minElmntIndx]) minElmntIndx = j;
        }

        int temp = array[minElmntIndx];
        array[minElmntIndx] = array[i];
        array[i] = temp;
    }

    printf("Your Current Array is in (increasing Order) after applying Selection sort:\n");
    displayArray(array, size);

}


void sortArray(int array[], int size) {

    int option;

    printf("Which type of sorting algorithm do you prefer?\n1)Bubble Sort  2)Selection Sort");
    scanf("%d", &option);

    if (option == 1) bubbleSort(array, size);
    else if (option == 2) selectionSort(array, size);
    else printf("Invalid Algo!!! Please Enter Correct Option:)");

}



void linearSearch(int array[], int size, int target) {

    for (int i = 0; i < size; ++i) {
        if (array[i] == target) {

            printf("Congrats! Your searched value is at position %d\n", i+1);
            return;
        }
    }
    printf("Sorry:( Element Not Found.\n");
}


int binarySearch(int array[], int size, int target) {

    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == target) {
            printf("Congrats! Your searched value is at position %d\n", mid+1);
            return;
        }
        else if (array[mid] < target) {
            low = mid + 1;
        }
        else high = mid - 1;

    }

    printf("Sorry:( Element Not Found.\n");
}

void searchElement(int array[], int size) {

    int target;
    printf("Enter the Value that you want to search for: ");
    scanf("%d", &target);

    int option;
    printf("Which type of searching algo do you prefer?\n1)Linear Search  2)Binary Search\n");
    scanf("%d", &option);

    if (option == 1) linearSearch(array, size, target);
    else if (option == 2) binarySearch(array, size, target);
    else printf("Invalid Algo!!! Please Enter Correct Option:)");

}



int main() {

    int size;
    printf("Enter the size of your Array: ");
    scanf("%d", &size);
    int array[size];

    insertArray(array, size);


    while(1) {

        int option;

        printf("\nChoose an option:\n 1.Update\n 2.Delete\n 3.Sort\n 4.Search\n 5.Display\n 6.Exit\n");
        scanf("%d", &option);

        if(option == 1) {
            updateArray(array, size);
        }
        else if(option == 2) {
            deleteElementFromArray(array, size);
        }
        else if(option == 3) {
            sortArray(array, size);
        }
        else if(option == 4) {
            searchElement(array, size);
        }
        else if(option == 5) {
            displayArray(array, size);
        }
        else if(option == 6) {
            printf("Thanks for using this program!");
            break;
        }
        else {
            printf("Enter a valid input (1-6):\n");
        }
    }

    return 0;
}
