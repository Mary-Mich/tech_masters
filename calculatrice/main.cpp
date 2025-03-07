#include <iostream>
#include<string>

using namespace std;
string reponse;
int choix ,a,b;
int main()
{
    cout << "bienvenu dans la calculatrice de MARY !!!" << endl;
    cout<<"---------------------------------------------"<<endl;
    do{
    cout<<"souhaitez-vous effectuer une operation ? (oui/non)"<<endl;
    cin>>reponse;
      } while(reponse != "oui" );

    cout<<"1: addition"<<endl;
    cout<<"2: soustraction"<<endl;
    cout<<"3: multiolication"<<endl;
    cout<<"4: division"<<endl;
    cout <<"entrer votre choix"<<endl;
    cin>>choix;

    switch(choix){
    case 1 :
        cout<<"entrer vous operandes:"<<endl;
        cin>>a;
        cin>>b;
        cout<<"le resultat est :"<< a+b <<endl;
        break;
    case 2 :
        cout<<"entrer vous operandes:"<<endl;
        cin>>a;
        cin>>b;
        cout<<"le resultat est :"<< a-b <<endl;
        break;
    case 3 :
        cout<<"entrer vous operandes:"<<endl;
        cin>>a;
        cin>>b;
        cout<<"le resultat est :"<< a*b <<endl;
        break;
    case 4 :
        cout<<"entrer vous operandes:"<<endl;
        cin>>a;
        do{
        cout<<"Erreur : division par zero"<<endl;
        cin>>b;
        }while(b == 0);
        cout<<"le resultat est :"<< a/b <<endl;
        break;
    default:
        cout<<"votre choix n'est pas encore disponible dans cwtte calculatrice"<<endl;
        break;
    }
    return 0;
}
