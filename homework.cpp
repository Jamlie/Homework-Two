#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

#define INT_MIN -2147483647
#define INT_MAX 2147483647

using namespace std;

// ! Omar Estietie

/**
 * @brief This function is used to copy an array into a new dynamic array.
 * 
 * @param toBeCopied An array to be copied.
 * @param toCopyIn An array to be copied in.
 * @param size The size of the array.
 */
void copy(int toBeCopied[], int toCopyIn[], int size) 
{

    for (int i = 0; i < size; i++)
    {
        toCopyIn[i] = toBeCopied[i];
    }

}


/**
 * @brief A median function used to get the median values whether the array was even or odd.
 * 
 * @param medianArray The array that we assign in the main function.
 * @param sizeOfMedianArray The size of the array.
 */
void median(int medianArray[], int sizeOfMedianArray) 
{

    int evenSize;
    int oddSize;

    if (sizeOfMedianArray % 2 == 0) {
        evenSize = (sizeOfMedianArray / 2);

        cout << double(medianArray[evenSize - 1] + medianArray[evenSize]) / 2;
    }
    else {
        oddSize = (sizeOfMedianArray / 2);
        cout << double(medianArray[oddSize]);
    }
}


int main() {

    int medianArray[] =  {100, 10, 20, 57, 2, 64, 83, 22, 71, 65, 64, 92}; 
    int size = sizeof(medianArray) / sizeof(medianArray[0]);

    int *newMedianArray = new int[size];

    copy(medianArray, newMedianArray, size);

    sort(newMedianArray, newMedianArray + size);

    median(newMedianArray, size);

    delete[] newMedianArray;

}
