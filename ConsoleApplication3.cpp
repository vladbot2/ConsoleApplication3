#include <iostream>

using namespace std;

//1
//template<typename T>
//T findMin(T a, T b) {
//    return (a < b) ? a : b;
//}


//2
//template<typename T>
//void swapValues(T& a, T& b) {
//    T temp = a;
//    a = b;
//    b = temp;
//}

//3
//template<typename T>
//T sumArray(T* arr, int size) {
//    T sum = 0;
//    for (int i = 0; i < size; ++i) {
//        sum += arr[i];
//    }
//    return sum;
//}

//5
//template<typename T>
//T findMinOfThree(T a, T b, T c) {
//    return min(min(a, b), c);
//}

//6
//template<typename T>
//T calculateAverage(T* arr, int size) {
//    T sum = 0;
//    for (int i = 0; i < size; ++i) {
//        sum += arr[i];
//    }
//    return sum / size;
//}

//7
    //template<typename T>
    //int countElements(T* arr, int size) {
    //return size;
    //int main() {
	//1
//    int intA = 10, intB = 20;
//    cout << "Minimum of integers: " << findMin(intA, intB) << endl;
//
//    double doubleA = 10.5, doubleB = 5.5;
//    cout << "Minimum of doubles: " << findMin(doubleA, doubleB) << endl;
//
//    char charA = 'a', charB = 'b';
//    cout << "Minimum of characters: " << findMin(charA, charB) << endl;

    //2
  /*  int x = 5, y = 10;
    swapValues(x, y);
    cout << "Swapped integers: " << x << " " << y << endl;

    int m = 1.5, n = 2.5;
    swapValues(m, n);
    cout << "Swapped doubles: " << m << " " << n << endl;*/

    //3
    /*int intArray[] = { 1, 2, 3, 4, 5 };
    cout << "Sum of integer array: " << sumArray(intArray, 5) << endl;*/

    //5
  /*  int intA = 10, intB = 20, intC = 5;
    cout << "Minimum of integers: " << findMinOfThree(intA, intB, intC) << endl;

    double doubleA = 10.5, doubleB = 5.5, doubleC = 7.5;
    cout << "Minimum of doubles: " << findMinOfThree(doubleA, doubleB, doubleC) << endl;*/
                                                                                                                                                          
    //6
    ////int intArray[] = { 1, 2, 3, 4, 5 };
    ////cout << "Average of integer array: " << calculateAverage(intArray, 5) << endl;

    ////double doubleArray[] = { 1.1, 2.2, 3.3, 4.4 };
    ////cout << "Average of double array: " << calculateAverage(doubleArray, 4) << endl;


    //7
//int intArray[] = { 1, 2, 3, 4, 5 };
//cout << "Number of elements in integer array: " << countElements(intArray, 5) << endl;
//
//double doubleArray[] = { 1.1, 2.2, 3.3 };
//cout << "Number of elements in double array: " << countElements(doubleArray, 3) << endl;

}
