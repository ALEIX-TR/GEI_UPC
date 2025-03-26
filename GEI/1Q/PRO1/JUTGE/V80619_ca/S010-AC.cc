#include "bintree.hh"
#include <iostream>
using namespace pro2;
using namespace std;
/**
 * @brief Poda les branques amb valor `x` d'un arbre binari.
 *
 * Retorna un nou arbre binari que és una còpia de `t`
 * però sense les branques que contenen el valor `x`.
 * Alhora retorna si la poda ha tingut èxit o no s'ha podat res.
 *
 * @param t Arbre binari.
 * @param x Valor de les branques a podar.
 *
 * @return Retorna una parella (`std::pair`) amb l'arbre podat
 *         i un booleà que és `true` si s'ha podat alguna branca
 *         i `false` si l'arbre resultat és igual que `t`.
 */
pair<BinTree<int>, bool> prune_tree(BinTree<int> t, int x) {
    if (t.empty()) return pair<BinTree<int>, bool>(t, false);
    if (t.value() == x) return pair<BinTree<int>, bool>(BinTree<int>(), true);
    pair<BinTree<int>, bool> E, D;
    E = prune_tree(t.left(), x);
    D = prune_tree(t.right(), x);
    return pair<BinTree<int>, bool>(BinTree<int>(t.value(), E.first, D.first), (E.second or D.second));
}
