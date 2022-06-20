#include <iostream>

using namespace std;

int main()
{
    int n,k; scanf(" %d",&n); scanf(" %d",&k);

    if (k<n && k!=2)
    {
        int contador=k;
        long suma=0;

        for (long i = k+1; i <= n; i++)
        {
            long numero=i;
            
            for(long j=2;numero>1;j++)
            {
                while(numero%j==0)
                {
                    suma+=j;
                    numero /= j;

                }
            }
            if (suma<=k)
            {
                contador++;
            }
            suma=0;
        }
       // if (contador==2)contador--;
        
        printf("%d", contador);
        
    }
    else
    if (k!=2)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d",1);
    }
    
   
    
    return 0;
}
