#include <iostream>
#include <math.h>

using namespace std;
int minimo(int a,int b)
{
    int min=0;
    if (a>b)
    {
        min=b;
    }
    else
    {
        min=a;
    }
    
    return min;
}

int main ()
{
    //Guardo los elementos de la matriz
    int row; scanf(" %d",&row);
    int colum; scanf(" %d",&colum);
    
    int matrix[row][colum];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            scanf (" %d",&matrix[i][j]);
        }
        
    }
    
    //Inicializo los arreglos booleanos en 0
    bool odd_row[row];
    for (int i = 0; i < row; i++)
    {
        odd_row[i]=0;
    }
    bool odd_col[colum];
    for (int i = 0; i < colum; i++)
    {
        odd_col[i]=0;
    }

    //Busco las filas impares
    for (int i = 0; i < row; i++)
    {
        int sumarow=0;
        for (int j = 0; j < colum; j++)
        {
            sumarow+=matrix[i][j];
        }
        
        if (sumarow%2)
        {
            odd_row[i]=1;
        }
        else
        {
            odd_row[i]=0;
        }
    }
    //Busco las columnas impares 
    for (int i = 0; i < colum; i++)
    {
        int sumacol=0;
        for (int j = 0; j < row; j++)
        {
            sumacol+=matrix[j][i];
        }
        
        if (sumacol%2)
        {
            odd_col[i]=1;
        }
        else
        {
            odd_col[i]=0;
        }
    }
    //Hago una matriz de ady
    
    int ady[row][colum];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            ady[i][j]=odd_row[i]*odd_col[j];
        }
        
    }
    
    //muestro la matriz de adyacencia
    /*
    cout << endl << "==================" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            cout << ady[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"\n================\n";
    */
    
    //Solucion
    //primeramente para cuando la fila y las columas del elemento i,j es impar
   //int n= minimo(row,colum);
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            if (odd_row[i] && odd_col[j])
            {
                matrix[i][j]+=1;
                odd_row[i]=0;
                odd_col[j]=0;
            }     
        }
        
    }
    //Repaso las columnas impares.
    for (int i = 0; i < colum-1; i++)
    {
        for (int j = i+1; j < colum; j++)
        {
            if (odd_col[i] && odd_col[j])
            {
                matrix[0][j]+=1;
                matrix[0][i]+=1;
                odd_col[j]=0;
                odd_col[i]=0;
            }     
        }
        
        
    }
    for (int i = 0; i < row-1; i++)
    {
        for (int j = i+1; j < row; j++)
        {
            if (odd_row[i] && odd_row[j])
            {
                matrix[j][0]+=1;
                matrix[i][0]+=1;
                odd_row[j]=0;
                odd_row[i]=0;
            }     
        }
        
    }
        
        


//Muesto las filas y columnas impares
   /*
    for (int i = 0; i < row; i++)
    {
        cout <<odd_row[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < colum; i++)
    {
        cout <<odd_col[i] << " ";
    }

    cout << endl;
    */

    
    //Muestro la solucion
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            printf ("%d ",matrix[i][j]);
        }
        printf("\n");
        
    }

    






    return 0;
}