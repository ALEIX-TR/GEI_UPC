#include "bintree.hh"
using namespace pro2;
using namespace std;

/**
 * @brief Retorna l'arbre de mides de `t`.
 *
 * L'arbre de mides és un arbre binari amb la mateixa forma
 * que `t` però a on cada valor conté la quantitat total de
 * nodes del subarbre que penja de la mateixa posició a `t`.
 *
 * @param t L'arbre binari original.
 *
 * @returns L'arbre de mides de `t`.
 */
BinTree<int> tree_of_sizes(BinTree<int> t) {
    if (t.empty()) return BinTree<int>();
    auto FE = tree_of_sizes(t.left());
    auto FD = tree_of_sizes(t.right());
    return BinTree<int>((FE.empty()? 0:FE.value()) + (FD.empty()? 0:FD.value()) + 1, FE, FD);
}
