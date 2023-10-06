#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int valida_cpf(string);
int j = 0;

int main()
{
    cout << "Quantas possibilidades existem para o CPF 245.XXX.XX3-97?" << endl;

    int cpf_frag = 3;
    int i;

    for (i = 0; cpf_frag <= 999993; i++)
    {

        string cpf_str = to_string(cpf_frag);
        string zeros = string(6 - cpf_str.length(), '0');
        string result = "245" + zeros + cpf_str;
        valida_cpf(result);
        //if (i >= 10) break;
        cpf_frag += 10;
    }

    return 0;
}

int valida_cpf(string cpf_string)
{
    int auxp = 0;
    int auxs = 0;

    int p1 = cpf_string[0] - '0';
    auxp = (p1 * 10) + auxp;

    int p2 = cpf_string[1] - '0';
    auxp = (p2 * 9) + auxp;

    int p3 = cpf_string[2] - '0';
    auxp = (p3 * 8) + auxp;

    int p4 = cpf_string[3] - '0';
    auxp = (p4 * 7) + auxp;

    int p5 = cpf_string[4] - '0';
    auxp = (p5 * 6) + auxp;

    int p6 = cpf_string[5] - '0';
    auxp = (p6 * 5) + auxp;

    int p7 = cpf_string[6] - '0';
    auxp = (p7 * 4) + auxp;

    int p8 = cpf_string[7] - '0';
    auxp = (p8 * 3) + auxp;

    int p9 = cpf_string[8] - '0';
    auxp = (p9 * 2) + auxp;

    int auxA = auxp * 10;

    int resto1 = auxA % 11;


    int s1 = cpf_string[0] - '0';
    auxs = (s1 * 11) + auxs;

    int s2 = cpf_string[1] - '0';
    auxs = (s2 * 10) + auxs;

    int s3 = cpf_string[2] - '0';
    auxs = (s3 * 9) + auxs;

    int s4 = cpf_string[3] - '0';
    auxs = (s4 * 8) + auxs;

    int s5 = cpf_string[4] - '0';
    auxs = (s5 * 7) + auxs;

    int s6 = cpf_string[5] - '0';
    auxs = (s6 * 6) + auxs;

    int s7 = cpf_string[6] - '0';
    auxs = (s7 * 5) + auxs;

    int s8 = cpf_string[7] - '0';
    auxs = (s8 * 4) + auxs;

    int s9 = cpf_string[8] - '0';
    auxs = (s9 * 3) + auxs;

    auxs = (resto1 * 2) + auxs;

    int auxB = auxs * 10;
    int resto2 = auxB % 11;

    if (resto1 == 9 && resto2 == 7)
    {   
        j++;
        cout << "Possibilidade " << setw(5) << setfill('0') << j << ": " << cpf_string << endl;
    }

    return 0;
}
