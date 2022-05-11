#include <iostream>

using namespace std;



int main ()
{
    int n; scanf(" %d",&n);

    int matrix[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf (" %d",&matrix[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        int cat_dog=matrix[i][0];
        int cat_look = matrix[i][1]; 
        int dog_look = matrix[i][2];
        if (cat_look+dog_look>cat_dog)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
            int looking[cat_dog][cat_dog];
            //Inicializo la matriz de miradas en 0
            for (int i = 0; i < cat_dog; i++)
            {
                for (int j = 0; j < cat_dog; j++)
                {
                    looking[i][j]=0;
                }
                
            }
            //Lleno las miradas de los gatos
            for (int i = 0; i < cat_dog; i++)
            {
                for (int j = 0; j < cat_look; j++)
                {
                    looking[i][(i+j)%cat_dog]=1;
                }
                
            }
            //Lleno las miradas de los perros
            int contador=0;
            for (int i = 0; i < cat_dog; i++)
            {
                contador=0;
                for (int j = 0; j < cat_dog; j++)
                {
                    if (!looking[j][i])
                    {
                        looking[j][i]=-1;
                        contador++;
                    }
                    if (contador==dog_look)
                    {
                        break;
                    }
                        
                }
                
            }

            //Muestro matriz de adyacencia.
            /*
              for (int i = 0; i < cat_dog; i++)
            {
                for (int j = 0; j < cat_dog; j++)
                {
                    cout << looking[i][j] << " ";
                }
                cout << endl;
                
            }
             
            */

            //Muestro a quien miran los gatos
            for(int i=0;i<cat_dog;i++)
            {
                for (int j = 0; j < cat_dog; j++)
                {
                    if (looking[i][j])
                    {
                        cout << j+1 << " ";
                    }
                    
                }
                cout << endl;
            }

            //muestro a quien mira los perros
            for(int i=0;i<cat_dog;i++)
            {
                for (int j = 0; j < cat_dog; j++)
                {
                    if (looking[j][i]==-1)
                    {
                        cout << j+1 << " ";
                    }  
                    
                }
                cout << endl;
            }

        }
        
    }
    




    return 0;
}