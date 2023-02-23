#include <iostream>
#include <map>

using namespace std;

double moda(map<int, double>& dicionario) {
    // Map para armazenar a frequência de cada valor
    map<double, int> frequencia;

    // Conta a frequência de cada valor
    for (auto const& [chave, valor] : dicionario) {
        frequencia[valor]++;
    }

    // Encontra o valor com a maior frequência
    double moda = 0;
    int maior_frequencia = 0;

    for (auto const& [valor, freq] : frequencia) {
        if (freq > maior_frequencia) {
            moda = valor;
            maior_frequencia = freq;
        }
    }

    return moda;
}
