#include "bintree.hh"
#include "util.hh"
#include <iostream>
using namespace pro2;
using namespace std;

/**
 * @brief Avalua un arbre no buit que representa una expressió binària.
 *
 * L'expressió binària és sobre els naturals i els operadors +, -, i *.
 * Les operacions de l'arbre no produeixen errors de sobreeiximent
 * (_overflow_).
 *
 * @pre L'arbre és no buit i l'expressió binària és correcta.
 *
 * @param t Arbre que representa l'expressió binària.
 * @return Resultat de l'avaluació de l'expressió.
 */
int evaluate(BinTree<string> t) {
    if (t.empty()) return 0;
    string val = t.value();
    if (val == "*") {
        int E = evaluate (t.left());
        int D = evaluate (t.right());
        return E * D;
    }else if (val == "+") {
        int E = evaluate (t.left());
        int D = evaluate (t.right());
        return E + D;
    }else if (val == "-") {
        int E = evaluate (t.left());
        int D = evaluate (t.right());
        return E - D;
    }else return string_to_int(val);
}
