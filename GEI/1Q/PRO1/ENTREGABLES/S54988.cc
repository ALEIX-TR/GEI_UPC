11: //Suma Fruites
  12: //Donat un llistat de noms de fruita retorna un llistat ordenat alfabeticament.
  13: //Input: Llistat de fruites seguit de la seva cantitat.
  14: //Output: Llistat ordenat.
  15: #include <iostream>
  16: #include <vector>
  17: using namespace std;
  18: 
  19: struct Fruit {
  20:   string name;
  21:   int amount;
  22: };
  23: //Anar afegint les fruites ordenadament a un vector Fruit
  24: void add_fruit(vector<Fruit>& fruits, const Fruit& fruit) {
  25:     int Tamany = fruits.size(), Actual = 0;
  26:     bool Trobat = false;
  27:     while (!(Trobat) and Actual < Tamany) {
  28:         if (fruits[Actual].name == fruit.name) {
  29:             fruits[Actual].amount += fruit.amount;
  30:             Trobat = true;
  31:         }
  32:         else if (fruits[Actual].name > fruit.name) {
  33:           fruits.push_back(fruits[Tamany - 1]);
  34:           int ActualEnMoviment = 1;
  35:           while (ActualEnMoviment < (Tamany - Actual)) {
  36:             fruits[Tamany - ActualEnMoviment] =
  37:             fruits[(Tamany - ActualEnMoviment) - 1];
  38:             ++ActualEnMoviment;
  39:           }
  40:           fruits[Actual] = fruit;
  41:           Trobat = true;
  42:         }
  43:         ++Actual;
  44:     }
  45:     if (Tamany == 0) {
  46:         Trobat = true;
  47:         ++Tamany;
  48:         fruits.push_back(fruit);
  49:     }else if (!Trobat) {
  50:         fruits.push_back(fruit);
  51:     }
  52: }
  53: 
  54: 
  55: int main() {
  56:   vector<Fruit> fruits;
  57:   Fruit f;
  58:   while (cin >> f.name >> f.amount) {
  59:     add_fruit(fruits, f);
  60:   }
  61:   int MidaFruits = fruits.size(), Element = 0;
  62:   while (Element < MidaFruits) {
  63:     cout << fruits[Element].name << ' ' << fruits[Element].amount << endl;
  64:     ++Element;
  65:   }
  66: }
