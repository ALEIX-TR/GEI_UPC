//Sentit de moviment
//Donat un punt inicial i un punt final del estil (x,y),
//indica cap a quina direccio a anat, Nord, Sud, Nortoest...
//Input: Un nombre enter positiu que indica la quantitat de quartets d'enters
//que el presedeixen.
//Output: Direccio cap on s'ha dirigit cada un dels quartets

#include <iostream>
using namespace std;

int main() {

    int Quartets;
    cin >> Quartets;

    while (Quartets > 0) {
        //llegeix els components dels dos punts
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;
        
        //Vector que formen els dos punts
        int VX, VY;
        VX = X2 - X1;
        VY = Y2 - Y1;

        //Comprobar cada una de les 4 direccions amb el vector
        if (VY != 0) {
            
            if (VY < 0){
                cout << 'S';

            }else cout << 'N';
        }

        if (VX != 0) {
        
            if (VX < 0){
                cout << 'O';

            }else cout << 'E';
        }
        
        cout << endl;
        --Quartets;
    }
}
