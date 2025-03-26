#include <iostream>
using namespace std;

int MesToDies(const string Mes) {
  int MesI = 0;
  if (Mes == "February") MesI = 31;
  else if (Mes == "March") MesI = 59;
  else if (Mes == "April") MesI = 90;
  else if (Mes == "May") MesI = 120;
  else if (Mes == "June") MesI = 151;
  else if (Mes == "July") MesI = 181;
  else if (Mes == "August") MesI = 212;
  else if (Mes == "September") MesI = 243;
  else if (Mes == "October") MesI = 273;
  else if (Mes == "November") MesI = 304;
  else if (Mes == "December") MesI = 334;
  return MesI;
}

int AnysADies(int Anys) {
  int Dies = Anys * 365;
  Dies += Anys / 4;
  return Dies;
}

string DiaDeLaSetmana(int Dies) {
  string Dia = "Friday";
  if (Dies % 7 == 2) Dia = "Saturday";
  else if (Dies % 7 == 3) Dia = "Sunday";
  else if (Dies % 7 == 4) Dia = "Monday";
  else if (Dies % 7 == 5) Dia = "Tuesday";
  else if (Dies % 7 == 6) Dia = "Wednesday";
  else if (Dies % 7 == 0) Dia = "Thursday";
  return Dia;
}

int main() {
  int Dia, Dies;
  while (cin >> Dia) {
    string Mes_String;
    cin >> Mes_String;
    Dies = Dia + MesToDies(Mes_String);
    int Any;
    cin >> Any;
    if (Dies > 59 and (Any-2024)%4==0 and Mes_String != "February") ++Dies;
    Dies += AnysADies(Any-2021);
    cout << DiaDeLaSetmana(Dies) << endl;
  }
}
