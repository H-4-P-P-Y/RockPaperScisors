#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int score[2] = {}; // {0,1}

int bot(){
    srand(time(0));
    int los = rand() % 3 + 1;

    return los;
}
int wynik(int los,int userInput){
  if(userInput == los){
        cout<<"Remis"<<endl;
    } else if(userInput == 1 && los == 2){
        cout<<"Papier bije kamien, PRZEGRYWASZ!"<<endl;
        score[1]++;
    } else if(userInput == 1 && los == 3){
        cout<<"Kamien bije nozyce, WYGRYWASZ"<<endl;
        score[0]++;
    } else if(userInput == 2 && los == 1){
        cout<<"Papier bije kamien, WYGRYWASZ!"<<endl;
        score[0]++;
    } else if(userInput == 2 && los == 3){
        cout<<"Nozyce bije papier, PRZEGRYWASZ!"<<endl;
        score[1]++;
    } else if(userInput == 3 && los == 1){
        cout<<"Kamien bije nozyce, PRZEGRYWASZ"<<endl;
        score[1]++;
    } else if(userInput == 3 && los == 2){
        cout<<"Nozyce bije papier, WYGRYWASZ!"<<endl;
        score[0]++;
    }
}
int main()
{
    int userInput;


    cout<<"Witaj uzytkowniku w grze Papier, Kamien, Nozyce"<<endl;
    while(true){
    cout<<"Your score: "<<score[0]<<" "<<"Bot score: "<<score[1]<< endl;
    cout<<"Wybierz: 1-Kamien, 2-Papier, 3-Nozyce, 4-Wyjdz"<<endl;
    cin>>userInput;
    if(userInput == 4){
        break;
    }
    else if( userInput == 1 || userInput == 2 || userInput == 3){
        wynik(bot(),userInput);
    }

    }
    cout<<"ERROR!";
    return 0;
}
