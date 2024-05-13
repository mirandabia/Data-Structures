#include <iostream> 
#include <chrono>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::nanoseconds;

void swapValue(int&, int&);
void printArray(int[], int);
void insertionSort(int[], int);

int main()
{
    int arriNumbers_1[] = {42, 7, 0, 3, 666, 1, 111, 10, 13, 137};
    int iArraySize = 10;

    cout << "Array Original: ";
    printArray(arriNumbers_1, iArraySize);

    //time_point<std::chrono::high_resolution_clock>
    auto timeStart = high_resolution_clock::now();
    insertionSort(arriNumbers_1, iArraySize);
    auto timeStop = high_resolution_clock::now();

    cout << "Array Ordenado: ";
    printArray(arriNumbers_1, iArraySize);

    auto timeDuration = duration_cast<nanoseconds>(timeStop - timeStart);
    cout << "Tempo utilizado: " << timeDuration.count() << " nano_segundos." << endl;
    cout << "===========================" << endl;

    return 0;
}

void swapValue(int& irefValue_1, int& irefValue_2)
{
    int iTemp = irefValue_1;
    irefValue_1 = irefValue_2;
    irefValue_2 = iTemp;
}

void printArray(int arriNumbers[], int iLenght)
{
    for (int i = 0; i < iLenght; i++) cout << arriNumbers[i] << " ";
    cout << endl;
}

void insertionSort(int arriNumbers[], int iLength)
{
    int iInsertValue = 0;
    int iInnerLoop = 0;
    
    for (int iOuterLoop = 1; iOuterLoop < iLength; iOuterLoop++)
    {
        iInsertValue = arriNumbers[iOuterLoop];
        iInnerLoop = iOuterLoop - 1;
        while (iInsertValue<arriNumbers[iInnerLoop] && iInnerLoop >= 0)
        {
            arriNumbers[iInnerLoop + 1] = arriNumbers[iInnerLoop];
            iInnerLoop --;
        }
        arriNumbers[iInnerLoop + 1]=iInsertValue;
    }
}