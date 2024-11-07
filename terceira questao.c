#include <iostream>
#include <cstring>   

using namespace std;

int main() {
    char str[100];

  
    printf("Digite uma string: ");
    scanf("%99[^\n]", str); 

   
    printf("Cada caractere da string:\n");
    for (int i = 0; str[i] != '\0'; i++) {  
        printf("%c\n", str[i]); 
    }

    return 0;
}
