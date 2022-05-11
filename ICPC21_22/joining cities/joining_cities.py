n=int(input())
arreglo= [i for i in range(n)]
maximo=0
minimo=99999999
for i in range(n):
    arreglo[i]=int(input())
    if(maximo<arreglo[i]):
        maximo=arreglo[i]
    if(minimo>arreglo[i]):
        minimo=arreglo[i]

print (n)