#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// ATÉ A A1: LISTAS
int main()
{
    //////////////////////////////////////////////////////////////////////////////////////
    //                         Repetições
    //////////////////////////////////////////////////////////////////////////////////////
    // int iContador = 1;
    
    // while (iContador <= 5) 
    // {
    //     cout << iContador << "\n";
    //     iContador++;
    // }

    // iContador = 42;

    // do{
    //     cout << iContador << "\n";
    //     iContador++;
    // } while (iContador <= 5);

    // for (int i = 0; i < 11; i++)
    // {
    //     for (int j = 1; j < 11; j++)
    //     {
    //         for (int k = 1; k < 11; k++)
    //         {
    //             cout << "(" << i << ", " << j << ", " << k << ")\n";
    //         }
    //     }
    // }
    /////////////////////////////////////////////////////////////////////////////////////



    /////////////////////////////////////////////////////////////////////////////////////
    //                       Vetores e Matrizes
    ////////////////////////////////////////////////////////////////////////////////////
    // TIPO NOME TAMANHO 
    // int x[100] = {0};

    // cout << "x[0] = " << x[0] << ", endereço: " << &x[0] << endl;
    // cout << "x[1] = " << x[1] << ", endereço: " << &x[1] << endl;
    // cout << "x[99] = " << x[99] << ", endereço: " << &x[99] << endl; 
    // cout << "Tamanho de x: " << sizeof(x)/sizeof(x[0]) << endl; // calcula o tamanho do array
    // cout << sizeof(x) << endl;
    // cout << sizeof(x[0]) << endl;
    // cout << "---------------------------------------------" << endl;

    // int array[4];
    // array[0] = 8;
    // array[1] = 64;
    // array[2] = 256;
    // array[3] = 512;

    // cout << "array[0] = " << array[0] << ", endereço: " << &array[0] << endl;
    // cout << "array[1] = " << array[1] << ", endereço: " << &array[1] << endl;
    // cout << "array[2] = " << array[2] << ", endereço: " << &array[2] << endl;
    // cout << "array[3] = " << array[3] << ", endereço: " << &array[3] << endl;
    // cout << "array[4] = " << array[4] << ", endereço: " << &array[4] << endl;
    // // if (&array[0] == array){ cout << "Faz sentido!" << endl; }
    // // cout << array << endl;
    // // cout << &array << endl;
    // // offset => array + (index * sizeof(elemento))
    // cout << "---------------------------------------------" << endl;
    ///////////////////////////////////////////////////////////////////////////////////
    // row major
    int arriTest1[2][3] = {2, 4, 5, 9, 0, 19};
    int arriTest2[2][3] = {{2, 4, 5}, {9, 0, 19}};

    cout << "--- Testando array 1 ---" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Array 1 em [" << i << "][" << j << "] = " << arriTest1[i][j] << ", Endereço: " << &arriTest1[i][j] << endl;
        }
    }

    return 0;
}