#include <iostream>

using namespace std;
 class compteBancaire {
  public:
    string num;
    string titulaire;
    double solde;
     // methodes
     //crediter ajoute un montant a un solde
     void crediter (double montant){
     this -> solde = solde + montant;
     }
     //debiter retire un montant dans un solde
     void debiter (double montant){
     this -> solde = solde - montant;
     }
     //description d'un compte
     void decrire(){
     cout <<"le solde du compte de " <<this->titulaire<< " de numero de compte " <<this->num<<" est de " <<this->solde<<endl;
     }//constructeur
     compteBancaire(string leNum,string Letitulaire,double soldeInitial){
     this->num = leNum ;
     this->titulaire = Letitulaire;
     this->solde = soldeInitial;
     }
    };

int main()
{
//instancier un object et lui affecter des valeurs
    cout << "bienvenu dans un compte bancaire !!!" << endl;
    compteBancaire myaccount;
    myaccount.num="10";
    myaccount.titulaire="Marie";
    myaccount.solde = 10000;
    double montant1 = 3000;
    double montant2 = 5000;
//appellation des methodes
     myaccount.crediter(montant1);
     myaccount.debiter(montant2);
//affichon la description d'un compte
    cout <<"le solde du compte de " <<myaccount.titulaire<<" de numero de compte " <<myaccount.num<<" est de " << myaccount.solde<<" FCFA"<<endl;
//transfert entre 2 comptes
     compteBancaire paul,jean;
//compte de paul
     paul.num="1001";
     paul.titulaire="paul";
     paul.solde=50000;
//compte de jean
     jean.num="1002";
     jean.titulaire="Jean";
     jean.solde=0;
//crediter jean et debiter paul
     const double montant = 30000;
     jean.crediter(montant);
     paul.debiter(montant);
     paul.decrire();
     jean.decrire();
//notion de constructeur
      compteBancaire con("12","Rochnel",15000);
      con.decrire();
    return 0;
}
