#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char str[100];
    int letras = 0, digitos = 0, especiais = 0;

    printf("Digite uma string: ");
    scanf("%99[^\n]", str);

    int i = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            letras++;
        } else if (isdigit(str[i])) {
            digitos++;
        } else {
            especiais++;
        }
        i++;
    }

    printf("Número de letras: %d\n", letras);
    printf("Número de dígitos: %d\n", digitos);
    printf("Número de caracteres especiais: %d\n", especiais);

    return 0;
}
