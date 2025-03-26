//Suma Fruites
//Donat un llistat de noms de fruita retorna un llistat ordenat alfabeticament.
//Input: Llistat de fruites seguit de la seva cantitat.
//Output: Llistat ordenat.
#include <iostream>
#include <vector>
using namespace std;

struct Fruit {
  string name;
  int amount;
};
//Anar afegint les fruites ordenadament a un vector Fruit
void add_fruit(vector<Fruit>& fruits, const Fruit& fruit) {
    int Tamany = fruits.size(), Actual = 0;
    bool Trobat = false;
    while (!(Trobat) and Actual < Tamany) {
        if (fruits[Actual].name == fruit.name) {
            fruits[Actual].amount += fruit.amount;
            Trobat = true;
        }
        else if (fruits[Actual].name > fruit.name) {
          fruits.push_back(fruits[Tamany - 1]);
          int ActualEnMoviment = 0;
          while (ActualEnMoviment < (Tamany - Actual)) {
            fruits[Tamany - ActualEnMoviment] = fruits[Tamany - ActualEnMoviment - 1];
            ++ActualEnMoviment;
          }
          fruits[Actual] = fruit;
          Trobat = true;
        }
        ++Actual;
    }
    if (Tamany == 0) {
        Trobat = true;
        ++Tamany;
        fruits.push_back(fruit);
    }else if (!Trobat) {
        fruits.push_back(fruit);
    }
}


int main() {
  vector<Fruit> fruits;
  Fruit f;
  while (cin >> f.name >> f.amount) {
    add_fruit(fruits, f);
  }
  int MidaFruits = fruits.size(), Element = 0;
  while (Element < MidaFruits) {
    cout << fruits[Element].name << ' ' << fruits[Element].amount << endl;
    ++Element;
  }
}
