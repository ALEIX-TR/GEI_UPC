#include "bintree.hh"
using namespace pro2;
using namespace std;

/**
 * @brief Retorna l'arbre de sumes de `t`.
 *
 * L'arbre de sumes és un arbre binari amb la mateixa forma
 * de `t` però a on cada valor conté la suma dels valors
 * del subarbre que penja de la mateixa posició a `t`.
 *
 * @param t L'arbre binari original.
 *
 * @returns L'arbre de sumes de `t`.
 */
BinTree<int> tree_of_sums(BinTree<int> t) {
    if (t.empty()) return BinTree<int>();
    auto FE = tree_of_sums(t.left());
    auto FD = tree_of_sums(t.right());
    return BinTree<int>((FE.empty()? 0:FE.value()) + (FD.empty()? 0:FD.value()) + t.value(), FE, FD);
}
