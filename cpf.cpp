#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::endl;
using std::setw;
using std::setfill;
using std::string;

int main() {
    cout << "Quantas possibilidades existem para o CPF 245.XXX.XX3-97?" << endl;

    int cpf_frag = 3;
    int i;

    for (i = 0; cpf_frag <= 999993; i++) {
        cout << "Possibilidade " << setw(5) << setfill('0') << i << ": 245" << setw(6) << setfill('0') << cpf_frag << endl;
        if (i >= 10) break;
        cpf_frag += 10;
    }

    return 0;
}