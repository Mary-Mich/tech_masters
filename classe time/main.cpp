#include <iostream>
#include <string>.h>
using namespace std;
class temps{
 public:
    int heure;
    int minute;
    int seconde;
    //les constructeurs de la classes
    //constructeur par defaut
    temps(){
    heure=1;
    minute=0;
    seconde=0;
    }
    temps(int h,int min,int sec){
    this->heure=h;
    this->minute=min;
    this->seconde=sec;
    }
    //une methode qui avance une heure d'une seconde
    void tick(){
    if(seconde>=0 && seconde<59)
      {
      seconde+=1;
      }
      else if(minute>=0 && minute<59)
      {
        minute+=1;
        seconde=0;
      }
      else if(heure >=0 && heure <24)
        heure += 1;
      else{
        heure=0;
        minute=0;
        seconde=0;
      }
      }
      //affichage d'une heure
      string string(){
      return "il est : "+ to_string(heure)+"h "+ to_string(minute)+"min et "+ to_string(seconde)+"s";
      }
      };

int main()
{
     temps m(24,59,59);
     m.tick();
     cout<< m.string()<<endl;
    return 0;
}
