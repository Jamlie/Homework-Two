#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

// ! Omar Estietie

/**
 * @brief This function is used to copy an array into a new dynamic array.
 * 
 * @param toBeCopied An array to be copied.
 * @param toCopyIn An array to be copied in.
 * @param size The size of the array.
 */
void copy(int toBeCopied[], int toCopyIn[], int size) {

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
void median(int medianArray[], int sizeOfMedianArray) {

    int *newMedianArray = new int[sizeOfMedianArray];

    copy(medianArray, newMedianArray, sizeOfMedianArray);

    int evenSize;
    int oddSize;


    if (sizeOfMedianArray % 2 == 0) {
        sort(newMedianArray, newMedianArray + sizeOfMedianArray);
        evenSize = (sizeOfMedianArray / 2);

        cout << double(newMedianArray[evenSize - 1] + newMedianArray[evenSize]) / 2;
    }
    else {
        sort(newMedianArray, newMedianArray + sizeOfMedianArray);
        oddSize = (sizeOfMedianArray / 2);
        cout << double(newMedianArray[oddSize]);
    }

    delete[] newMedianArray;
}

int main() {

    int medianOddArray[] =  {100, 10, 20, 57, 2, 64, 83, 22, 71, 65, 64, 92}; 
    int size = sizeof(medianOddArray) / sizeof(medianOddArray[0]);
    median(medianOddArray, size);

}
