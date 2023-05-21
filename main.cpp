#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int userPick() {
    int liczba;
    // Pobieranie wyboru użytkownika od 1 do 3

    do {
        cout << "Wybierz: 1-Kamien, 2-Papier, 3-Nozyce"<<endl;
        cin >> liczba;

        if (liczba < 1 || liczba > 3) {
            cout << "Niepoprawna liczba! Wybierz: 1-Kamien, 2-Papier, 3-Nozyce." << std::endl;
        }
    } while (liczba < 1 || liczba > 3);

    return liczba;
}

int main()
{
    int liczba;
    int licznikA, licznikB = 0;
    // Inicjalizacja generatora liczb pseudolosowych
    srand(time(0));

    // Wygenerowanie losowej liczby od 1 do 3
    int los = rand() % 3 + 1;
    
    // Pętla gry, która kończy się, gdy któryś z graczy osiągnie 3 punkty
    while(licznikA != 3 || licznikB != 3){
        if(los == userPick()){
         cout<<"Remis"<<endl<<"Wynik: "<<licznikA<<":"<<licznikB<<endl;
        }
        if(los == 1 && userPick() == 2){
            licznikB++;
            cout<<"Papier bije kamien, WYGRYWASZ!"<<endl<<"Wynik: "<<licznikA<<":"<<licznikB<<endl;
        }   
     if(los == 1 && userPick() == 3){
          licznikA++;
           cout<<"Kamien bije nozyce, PRZEGRYWASZ"<<endl<<"Wynik: "<<licznikA<<":"<<licznikB<<endl;
        }
        if(los == 2 && userPick() == 1){
         licznikA++;
            cout<<"Papier bije kamien, PRZEGRYWASZ"<<endl<<"Wynik: "<<licznikA<<":"<<licznikB<<endl;
        }
        if(los == 2 && userPick() == 3){
            licznikB++;
            cout<<"Nozyce bija papier, , WYGRYWASZ"<<endl<<"Wynik: "<<licznikA<<":"<<licznikB<<endl;
        }
        if(los == 3 && userPick() == 1){
         licznikB++;
            cout<<"Kamien bije nozyce, WYGRYWASZ"<<endl<<"Wynik: "<<licznikA<<":"<<licznikB<<endl;
        }
        if(los == 3 && userPick() == 2){
         licznikA++;
            cout<<"Nozyce bija papier, PRZEGRYWASZ"<<endl<<"Wynik: "<<licznikA<<":"<<licznikB<<endl;
        }
    }
    return 0;
}