#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    

    int N;cin >> N;
    int arreglo[N];
    int maximo=0;
    int minimo=INT_MAX;

    for(int i=0;i<N;i++)
    {
        scanf("%d",&arreglo[i]);
        if(maximo<arreglo[i])maximo=arreglo[i];
        if(minimo>arreglo[i])minimo=arreglo[i];
    }
    cout<< maximo-minimo;

    return 0;
}