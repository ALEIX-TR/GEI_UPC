#include <iostream>
#include "bintree.hh"
using namespace pro2;
using namespace std;

/**
 * @brief Calcula l'alçada d'un arbre binari
 *
 * @param t Un arbre binari.
 * @returns L'alçada de l'arbre, segons la definició anterior.
 */
int height(BinTree<int> t) {
    if (t.empty()) return 0;
    int h1 = height(t.left());
    int h2 = height(t.right());
    return 1 + max(h1, h2);
}
