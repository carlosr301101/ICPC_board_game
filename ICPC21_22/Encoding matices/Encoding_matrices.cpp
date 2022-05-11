#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int N; 
    scanf(" %d",&N);
    char x[N][N];
    int contador=0;
    for (int i = 0; i < N; i++)
    {   
        for(int k=0;k<N;k++)
        {
            scanf(" %c",&x[i][k]);
        

            if (x[i][k]=='1')
            {
                contador++;
            }
            
        }
    }
    if(contador>N*N/2 || (contador==N*N/2 && x[0][0]=='1'))
    {
        for (int i = 0; i < N; i++)
        {   
            for (int j = 0; j < N; j++)
            {             
                if (x[i][j]=='1')
                {
                    x[i][j]='*';
                }   
                else
                {
                    x[i][j]='o';
                }
            }
        }   
    }
    else
    {
        for (int i = 0; i < N; i++)
        {   
            for (int j = 0; j < N; j++)
            {             
                if (x[i][j]=='1')
                {
                        x[i][j]='o';
                }   
                else
                {
                    x[i][j]='*';
                }
            }
        }      
    }
    for (int i = 0; i < N; i++)
        {   
            for (int j = 0; j < N; j++)
            {             
                cout<< x[i][j];
            }
            cout <<endl;
        }   

    return 0;
}