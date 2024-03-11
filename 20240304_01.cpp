#include <iostream>

using std::cout;
using std::endl;
using std::string;

// aula sobre tipos de variáveis e seus respectivos tamanhos
int main()
{
    //-2,147,483,648 to 2,147,483,647
    // 4 bytes
    // int iNum1 = 42, iNum2, iNum3=17; //NÃO

    int iNum1 = 42;
    int iNum2 = 0;
    int iNum3 = 17;

    cout << "iNum1: " << iNum1 << "\nTamanho: " << sizeof(iNum1) << endl;
    cout << "iNum2: " << iNum2 << "\nTamanho: " << sizeof(iNum2) << endl;
    cout << "iNum3: " << iNum3 << "\nTamanho: " << sizeof(iNum3) << endl;

    // -32,768 to 32,767
    // 2 bytes
    short sNum = 17;
    cout << "sNum: " << sNum << "\nTamanho: " << sizeof(sNum) << endl;

    // -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    // 8 bytes
    long lNum = 17;
    cout << "lNum: " << lNum << "\nTamanho: " << sizeof(lNum) << endl;

    //8, 12 ou 16 bytes
    long long llNum = 17;
    cout << "llNum: " << llNum << "\nTamanho: " << sizeof(llNum) << endl;

    float fNum = 42.123456789;
    double dNum = 42.123456789;
    long double ldNum = 42.123456789;

    cout << "fNum: " << fNum << "\nTamanho: " << sizeof(fNum) << endl;
    cout << "dNum: " << dNum << "\nTamanho: " << sizeof(dNum) << endl;
    cout << "ldNum: " << ldNum << "\nTamanho: " << sizeof(ldNum) << endl;

    char cValue = 'E';
    cout << "cValue: " << cValue << "\nTamanho: " << sizeof(cValue) << endl;
    cout << "(int)cValue: " << (int)cValue  << endl;

    char cPalavraPreferida_1 = 77;
    char cPalavraPreferida_2 = 0x41;
    char cPalavraPreferida_3 = 0b01110000;

    cout << cValue;
    cout << cPalavraPreferida_1;
    cout << cPalavraPreferida_2;
    cout << cPalavraPreferida_3 << endl;

    string strValue_1 = "Eu adoro a";
    string strValue_2 = "EMAp";

    cout << "strValue_1: " << strValue_1 << "\nTamanho: " << sizeof(strValue_1) << endl;
    cout << "strValue_2: " << strValue_2 << "\nTamanho: " << sizeof(strValue_2) << endl;

    bool bValue = true;
    bool bValue_2 = false;
    bool bValue_3 = 42;
    bool bValue_4 = 0;

    cout << "bValue: " << bValue << "\nTamanho: " << sizeof(bValue) << endl;
    cout << "bValue_2: " << bValue_2 << "\nTamanho: " << sizeof(bValue_2) << endl;
    cout << "bValue_3: " << bValue_3 << "\nTamanho: " << sizeof(bValue_3) << endl;
    cout << "bValue_4: " << bValue_4 << "\nTamanho: " << sizeof(bValue_4) << endl;

    const int iNUMERO = 42; //NÃO PODE SER ALTERADO
    cout << "iNUMERO: " << iNUMERO << "\nTamanho: " << sizeof(iNUMERO) << endl;

    unsigned short usNum = 42;
    cout << "usNum: " << usNum << "\nTamanho: " << sizeof(usNum) << endl;

    unsigned long long int ulliNum_1 = 42;
    cout << "ulliNum: " << ulliNum_1 << "\nTamanho: " << sizeof(ulliNum_1) << endl;

    long unsigned long int lulliNum_2 = 42; // NÃO IMPORTA A ORDEM 
    cout << "lulliNum: " << lulliNum_2 << "\nTamanho: " << sizeof(lulliNum_2) << endl;
}
