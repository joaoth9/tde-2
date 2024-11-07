#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[100], str2[100], resultado[200];

    printf("Digite a primeira string: ");
    scanf("%99[^\n]", str1);

    getchar();

    printf("Digite a segunda string: ");
    scanf("%99[^\n]", str2);

    strcpy(resultado, str1);
    strcat(resultado, str2);

    printf("Resultado da concatenação: %s\n", resultado);

    return 0;
}
