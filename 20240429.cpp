#include <iostream>
#include <chrono>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::nanoseconds;

// using namespace std;

void swapValue(int&, int&);
void printArray(int [], int);
void bubbleSort(int[], int);
void optimizedBubbleSort(int[], int);

// Buble sort
int main(){
    int arriNumbers[] = {42, 7, 0, 3, 666, 1, 111, 10, 13};
    int iArraySize = 9;

    cout << "Array original: ";
    printArray(arriNumbers, iArraySize);

    //time_point<std::chrono::high_resolution_clock>
    auto timeStart = high_resolution_clock::now();
    bubbleSort(arriNumbers, iArraySize);
    auto timeStop = high_resolution_clock::now();

    cout << "Array ordenado: ";
    printArray(arriNumbers, iArraySize);

    auto timeDuration = duration_cast<nanoseconds> (timeStop - timeStart);
    cout << "Tempo utilizado: " << timeDuration.count() << " nanossegundos." << endl;
    cout << "=============================";
}

void swapValue(int& iValue_1, int& iValue_2){
    int iTemp = iValue_1;
    iValue_1 = iValue_2;
    iValue_2 = iTemp;
}

void printArray(int arriNumbers[], int iLength){
    for (int i = 0; i < iLength; i++) {
        cout << arriNumbers[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arriNumbers[], int iLength){
    for (int iOuterLoop = 0; iOuterLoop < iLength-1; iOuterLoop++)
        for (int iInnerLoop = 0; iInnerLoop < iLength-1; iInnerLoop++)
            if (arriNumbers[iInnerLoop] > arriNumbers[iInnerLoop+1])
                swapValue(arriNumbers[iInnerLoop], arriNumbers[iInnerLoop+1]);       
   
}

void optimizedBubbleSort(int arriNumbers[], int iLength){
    bool bUnordered = false;

    for (int iOuterLoop = 0; iOuterLoop < iLength-1; iOuterLoop++)
    {
        bUnordered = false;

        for (int iInnerLoop = 0; iInnerLoop < iLength-1-iOuterLoop; iInnerLoop++)
        {
            if (arriNumbers[iInnerLoop] > arriNumbers[iInnerLoop+1])
            {
                swapValue(arriNumbers[iInnerLoop], arriNumbers[iInnerLoop+1]);
                bUnordered = true;
            }
        }
        if (!bUnordered == false)
    }
            
   
}