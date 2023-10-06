#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    cout << "Quantas possibilidades existem para o CPF 245.XXX.XX3-97?" << endl;

    int cpf_frag = 3;
    int i;

    for (i = 0; cpf_frag <= 999993; i++) {
        string cpf_str = to_string(cpf_frag);
        string zeros = string(6 - cpf_str.length(), '0');
        string result = "245" + zeros + cpf_str;
        int final_result = stoi(result);
        cout << "Possibilidade " << setw(5) << setfill('0') << i << ": " << final_result << endl;
        // if (i >= 10) break;
        cpf_frag += 10;
    }

    return 0;
}