//Codificado por: sAfOrAs
//Codigo Fuente: Calcula el número mayor y menor.Usando 4 funciones
int menor(int, int, int);
int mayor(int, int, int);
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,m,n;
    cout<<"ingrese cuatro numeros\n";
    cin>>a>>b>>c1;
    m=menor(a,b,c);
    n=mayor(a,b,c);
    cout<<"el menor es: "<<m<<endl;
    cout<<"el mayor es: "<<n<<endl;
    cin.ignore();return 0;
}
int menor(int a,int b,int c)
{
    int m;
    if(a<b)
        if(a<c)
            m=a;
        else
            m=c;
    else
        if(b<c)
            m=b;
        else
            m=c;
return m;
}
int mayor(int a,int b,int c)
{
    int n;
    if(a>b)
        if(a>c)
            n=a;
        else
            n=c;
    else
        if(b>c)
            n=b;
        else
            n=c;
return n;
}