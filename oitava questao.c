#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char str[100];
    int count = 0;

    printf("Digite uma string: ");
    scanf("%99[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Número de vogais: %d\n", count);

    return 0;
}
