#include "bintree.hh"
using namespace pro2;

bool cerca_valor(BinTree<int> t, int x) {
    if (t.empty()) return false; //Cas senciy 1
    if (t.value() == x) return true; //Cas senciy 2
    bool R1 = cerca_valor(t.left(), x);
    if (R1) return true;
    bool R2 = cerca_valor(t.right(), x);
    return R2;
}
