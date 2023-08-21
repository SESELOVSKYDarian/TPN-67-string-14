#include <iostream>
#include <string>
using namespace std;
string InvertirPalabra(string f, int a, int b);
int main()
{
    int n1, n2;
    string palabra;
    cout<<"Ingrese palabra a invertir: ";
    getline(cin, palabra);
    cout<<"Ingrese numero de inicio: ";
    cin>>n1;
    cout<<"Ingrese numero de final: ";
    cin>>n2;
    cout<<InvertirPalabra(palabra, n1, n2) << endl;
    return 0;
}

string InvertirPalabra(string f, int a, int b)
{
    string invertida;
    for (int i=0; i<f.size(); i++)
    {
        if (i>=a && i<=b)
        {
            for (int j=b; j>=a; j--)
            {
                invertida+=f[j];
            }
            i=b;
        }
        else
        {
            invertida+=f[i];
        }
    }
    return invertida;
}