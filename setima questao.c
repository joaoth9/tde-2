#include <iostream>
#include <cstring>
#include <ctype.h>

using namespace std;

int main() {
    char str[100];

    printf("Digite uma string: ");
    scanf("%99[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("String em maiúsculas: %s\n", str);

    return 0;
}
