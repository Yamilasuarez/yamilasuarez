#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
    char a,b,c,d;
    int i;
    int nota1,nota2,nota3,nota4,nota;
    int materia;
    int ponderado1,ponderado2,ponderado3,ponderado4,ponderado;
    int numero;
    cout<<"ingrese la cantidad de materia a considerar :"<<endl;
    cin>>numero;
    for(i=0;i<4;i++){
         cout<<"ingrese la cantidad de materia a considerar :"<<numero+i<<endl;

                    cout<<"materia a :"<<endl;
                    cin>>a;
                    cout<<" la nota es :"<<endl;
                    cin>>nota1;
                    cout<<" ponderado de la materia"<<endl;
                    cin>>ponderado1;
                     cout<<"materia b :"<<endl;
                     cin>>b;

                     cout<<" la nota es :"<<endl;
                    cin>>nota;
                     cout<<" ponderado de la materia"<<endl;
                    cin>>ponderado2;
                     cout<<"materia c :"<<endl;
                     cin>>c;

                     cout<<" la nota es :"<<endl;
                    cin>>nota;
                     cout<<" ponderado de la materia"<<endl;
                    cin>>ponderado3;
                     cout<<"materia d :"<<endl;
                     cin>>d;

                     cout<<" la nota es :"<<endl;
                    cin>>nota;
                     cout<<" ponderado de la materia"<<endl;
                    cin>>ponderado4;

                    ponderado=(nota1*ponderado1)+(nota2*ponderado2)+(nota3*ponderado3)+(nota4*ponderado4)/(ponderado1+ponderado2)+(ponderado3+ponderado4);
                      cout<<" promedio ponderado"<<ponderado<<endl;

                     system("pause");
    }


}
