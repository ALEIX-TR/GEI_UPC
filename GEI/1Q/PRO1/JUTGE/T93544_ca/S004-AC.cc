#include <iostream>
#include "bintree.hh"
using namespace std;
using namespace pro2;

/**
 * @brief Suma els valors d'un arbre binari.
 *
 * Si un arbre és buit, el seu valor és 0.
 *
 * @param t Un arbre binari.
 *
 * @returns La suma dels valors dels nodes de l'arbre `t`.
 */
 int suma_valors(BinTree<int> t) {
     if (t.empty()) return 0;
     int h1 = suma_valors(t.left());
     int h2 = suma_valors(t.right());
     int V = t.value();
     return V+ h1 + h2;
}
