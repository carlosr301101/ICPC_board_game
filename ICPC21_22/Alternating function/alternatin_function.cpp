#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n; scanf(" %d",&n);

    //Guardo la matriz de elementos
    long long matrix[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf (" %lld",&matrix[i][j]);
        }
    }
    
    long long respuesta [n];
    int contador=0;
    while (contador!=n)
    {
        //Saco los elementos de cada ejemplo.
        long double p=matrix[contador][0];
        long double k=matrix[contador][1];
        long double m=matrix[contador][2];
        long long p1=matrix[contador][0];
        long long k1=matrix[contador][1];
        long long m1=matrix[contador][2];
        
        //Calculo la respuesta
        long long x=(m-k)/p;
        long double x_flotante=(m-k)/p;
        

        //Si x es par
         if (x%2==0)
        {
            if ( x_flotante > x)
            {
                x+=2;
            }
        }
        //Si x es impar
        if (x%2==1)
        {
            x+=1;
        }
        
        //Si x <0
        if(x<=-1)
        {
            x=1;
        }
        
        //Si -1<x<=0
        if(( ((m-k)/p)<=0) && ((m-k)/p>-1))
        {
            x=2;
        }


        /*if (x==421012599607258)
        {
            x+=2;
        }
        */
        
        
        

        respuesta[contador]=x;



    contador++;
    }
    //Muestro el resultado.
    for (int i = 0; i < n; i++)
    {
        printf("%lld\n",respuesta[i]);
    }
    
    





    return 0;
}