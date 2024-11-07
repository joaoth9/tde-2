#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[100], str2[100];

    printf("Digite uma string: ");
    scanf("%99[^\n]", str1);

    strcpy(str2, str1);

    printf("String original: %s\n", str1);
    printf("String copiada: %s\n", str2);

    return 0;
}
