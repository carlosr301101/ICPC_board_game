#include <iostream>


using namespace std;

int main()
{
    long long n; scanf(" %lld",&n);
    long long m; scanf(" %lld",&m);
    long long c; scanf(" %lld",&c);
    long long q; scanf(" %lld",&q);

    long long matrix[n][m];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            matrix[i][j]=0;
        }
        
    }
    
    //pongo las fichas en la matriz
    for (long long i = 0; i < c; i++)
    {
        long long x,y;
        scanf(" %lld",&x);
        scanf(" %lld",&y);
        x--;
        y--;
        matrix[x][y]+=1;

    }
    
    //guardo las partidas;
    long long r[q];
    for (long long i = 0; i < q; i++)
    {
        scanf(" %lld",&r[i]);
    }
    //mostrando el tablero
    /*
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            prlong longf("%d ",matrix[i][j]);
        }
        cout << endl;
    }
    */
    //contando quien gana
    bool gana[q];
    
    long long ri;
    for (long long k = 0; k < q; k++)
    {
        ri=r[k];
        long long suma=0;
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < ri; j++)
            {
                if (matrix[i][j])
                {
                    suma+=(j*matrix[i][j]);
                }
                
            }
        }
        //imprimiendo matriz para cada r
        /*
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 1; j < ri; j++)
            {
                prlong longf("%d ",matrix[i][j]);
            }
            cout << endl;
        }
        */

       if (!suma%2)
        {
                gana[k]=0;
        }
        else
        {
            gana[k]=1;
        }    

    }


    //Respuesta
    
    for (long long i = 0; i < q; i++)
    {
        if (gana[i])
        {
            printf("Alice\n");
        }
        else
        {
            printf("Bob\n");
        }
        
    }
    
    
        



    return 0;
}