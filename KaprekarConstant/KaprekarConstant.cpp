#include <iostream>
#include <algorithm>
using namespace std;

int arraySize = 4;

void numberToArray(int number, int arr[]) {
    for (int i = arraySize - 1; i >= 0; i--) {
        arr[i] = number % 10;
        number = number / 10;
    }
}

int arrayToNumber(int arr[]) {
    int result = 0;
    for (int i = 0; i < arraySize; i++) {
        result = result * 10 + arr[i];
    }
    return result;
}

void bubbleSortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int kaprekar(int number) {
    int steps = 0;
    
    while (number != 6174) {
        int digits[arraySize];
        
        // Convert the number to an array of digits
        numberToArray(number, digits);
        
        // Sort the digits in ascending and descending order
        bubbleSortAscending(digits,arraySize);
        int ascending = arrayToNumber(digits);
        bubbleSortDescending(digits, arraySize);
        int descending = arrayToNumber(digits);
        
        // Calculate the difference between the descending and ascending numbers
        number = descending - ascending;
        
        // Increment the count
        steps++;

        cout << descending << " - " << ascending << " = " << number <<endl;
    }
    
    return steps;
}

int main() {
    int userInput;
    
    // Input a 4-digit number 
    cout << "Enter a 4-digit number : ";
    cin >> userInput;
    if(userInput == 1111)
    {
        cout<<"1111 is Exceptional Case"<<endl;
        return 1;
    }
    
    if (userInput < 1000 || userInput > 9999) {
        cout << "Invalid input. Please enter a 4-digit number " <<endl;
        return 1;
    }
    
    int steps = kaprekar(userInput);
    
    cout << "It took " << steps << " steps to reach 6174." <<endl;
    
    return 0;
}