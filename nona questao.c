#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[100];
    int count = 0;

    printf("Digite uma string: ");
    scanf("%99[^\n]", str);

    int len = strlen(str);  

    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    printf("Número de espaços em branco: %d\n", count);

    return 0;
}
