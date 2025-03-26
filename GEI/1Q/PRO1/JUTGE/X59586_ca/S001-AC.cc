//Concurs de talents
//Donat tres valors entre 1 i 10, fes la seva mitjana tenint en compte que
//si dos valors son iguals i un es diferent, s'haura de sumar 1 si els dos
//iguals son majors al diferent i s'haura de restar 1 si els dos iguals son 
//menors.
//A mes a mes si el valor final esta entre el 5 i 10 s'ha d'escriure un text
//depenen del interval en que es troba. Valor >= 9 escriu "Medalla or",
// 7 <= Valor > 9 escriu "Medalla plata" i 5 <= Valor > 7 "Medalla bronze"
//En el cas de que la mitjana no superi el 5 s'escriu "Cap premi"
//Si els tres valors inicials han estat iguals i la mitjana es troba entre
//5 i 10 s'ha d'escriure "Premi a la unanimitat".
//Input: 3 numeros enters <= 10 i >=1.
//Output: El text d'obtencio de medalla, el valor de la mitjana amb
//dos decimals i el text del premi a la unanimitat

#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    double Nota1, Nota2, Nota3;
    cin >> Nota1 >> Nota2 >> Nota3;
    
    double Mitjana;
    Mitjana = (Nota1 + Nota2 + Nota3)/3;

    //sumar i restar a la mitjana si hi ha dos notes iguals
    if (Nota1 != Nota2 or Nota1 != Nota3) {
        if (Nota1 == Nota2) {
            if (Nota1 > Nota3) ++Mitjana;
            else --Mitjana;
        }else if (Nota1 == Nota3) {
            if (Nota1 > Nota2) ++Mitjana;
            else --Mitjana;
        }else if (Nota3 == Nota2) {
            if (Nota3 > Nota1) ++Mitjana;
            else --Mitjana;
        }
        if (Mitjana > 10) Mitjana = 10;
    }

    //Entregar premis
    if (Mitjana >= 9) cout << "Medalla or" << endl;
    else if (Mitjana >=7) cout << "Medalla plata" << endl;
    else if (Mitjana >=5) cout << "Medalla bronze" << endl;
    else cout << "Cap premi" << endl;

    cout << Mitjana << endl;

    //Comprovar si les tres notes son iguals i te una medalla
    if (Nota1 == Nota2 and Nota1 == Nota3 and Mitjana >= 5) cout << 
    "Premi a la unanimitat" << endl;
}