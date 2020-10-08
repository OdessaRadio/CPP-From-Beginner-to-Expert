#include <iostream>

/*Functions and pointers*/

using namespace std;

// Exercise

int *createArray (int);
void swapTwoValues (int *, int *);
void fillArrayWithValues (int [], int);
void printArrayValues (int [], int);
void bubbleSort (int [], int, bool);
void selectionSort (int [], int, bool);

int main (){

    int number;
    cout << "Input the size of the array to sort: ";
    cin >> number;

    int * customArray = createArray(number);
    fillArrayWithValues(customArray, number);
    printArrayValues(customArray, number);

    bool selection;
    cout << "Sort Ascending - 1, Descending - 0: ";
    cin >> selection;

    char sortSelection;
    cout << "Bubble Sort or Selection Sort? B or S";
    cin >> sortSelection;

    if (sortSelection == 'S' || sortSelection == 's')
        selectionSort(customArray, number, selection);
    else if (sortSelection == 'B' || sortSelection == 'b')
        bubbleSort (customArray, number, selection);
    else {
        cout << "Default method selected";
        bubbleSort (customArray, number, selection);
    }

    selectionSort(customArray, number, selection);

    delete []customArray;

    return 0;
}

int *createArray (int number){

    int* customArray = new int[number];

    return customArray;
}

void swapTwoValues (int *firstValue, int *secondValue){
    int temp;

    temp = *firstValue;
    *secondValue = *firstValue;
    *secondValue = temp;
}

void fillArrayWithValues (int arrayToFill[], int arraySize){
    for (int i = 0; i < arraySize; i++){
        cout << "Enter " << i+1 << " element: ";
        cin >> arrayToFill[i];
    }
    system("cls");
}

void printArrayValues (int customArray[], int arraySize){
    for (int i = 0; i < arraySize; i++){
        cout << customArray[i] << endl;
    }

}

void bubbleSort (int arrayToSort[], int size_of_arrayToSort, bool sortDirection){ // direction: ascending->1; descending->0
    for (int i = 0; i < size_of_arrayToSort-1; i++)
    {
        for (int j = 0; j < size_of_arrayToSort-1; j++)
        {
            if (sortDirection == 1 && arrayToSort[j] > arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1);
            }
            else if (sortDirection == 0 && arrayToSort[j] < arrayToSort[j+1])
            {
                    swapTwoValues(arrayToSort+j, arrayToSort+j+1);
            }
        }
    }
    printArrayValues (arrayToSort , size_of_arrayToSort);
}


void selectionSort (int arrayToSort[], int size_of_arrayToSort, bool sortDirection){ // direction: ascending->1; descending->0
    int limitIndex;
    for (int i = 0; i < size_of_arrayToSort; i++)
    {
        limitIndex = i;
        for (int j = i + 1; j < size_of_arrayToSort; j++)
        {
            if (sortDirection == 1 && arrayToSort[j] < arrayToSort[limitIndex])
            {
                limitIndex = j;
            }
            else if (sortDirection == 0 && arrayToSort[j] > arrayToSort[limitIndex])
            {
                limitIndex = j;
            }
        }
        swapTwoValues(arrayToSort+i, arrayToSort+limitIndex);
    }
    printArrayValues(arrayToSort, size_of_arrayToSort);


}
