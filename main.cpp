#include <iostream>
using namespace std;

int main() {
    int n, i, p, b;
    float voto, somma, media;
    string nome;
    do
    {
      cout<<"Quanti sono gli alunni?"<<endl;
      cin>>n;  
    }
    while(n<0);
    i=1;
    somma=0;
    b=0;
    p=0;
    while(i<=n)
    {
        cout<<"come ti chiami?"<<endl;
        cin>>nome;
        cout<<"Qual è la tua media di informatica?"<<endl;
        cin>>voto;
        if(voto>=6)
        {
            cout<<nome<<" sei stato promosso!"<<endl;
            p=p+1;
        }
        else
        {
            cout<<nome<<" sei stato bocciato!"<<endl;
            b=b+1;
        }
        i=i+1;
        somma=somma+voto;
    }
    cout<<"Gli studenti con il debito sono "<<b<<"; gli studenti promossi sono "<<p<<endl;
    media=somma/n;
    cout<<"La media dei voti è "<<media;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
