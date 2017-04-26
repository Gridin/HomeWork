#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "_4_05.h"

using namespace std;


int mymain()
{
    const int size = 10;
    int a[size];
    int i = 0;
    
    init(a, size);
    
    cout << "Элемент" << setw(13) << " Значение" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << setw(7) << i << setw(13) << a[i] << endl;
    }
    
    average(a, size);

    return 0;
}

void init(int a[], int size)
{
    srand (time(0));
    
    for (int i = 0; i < size; i++)
    {
        a[i] = 1 + rand () % 10;
    }
}

int average(int b[], int length)
{
    int total = 0;
    int averageNumber = 0;
    
    for (int i = 0; i < length; i++)
    {
        total = total + b[i];
        averageNumber = total / 10;
    }
    cout << "Среднее арифметическое: " << averageNumber << endl;
    
    return averageNumber;
}

