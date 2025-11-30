#include <iostream>
using namespace std;

int main() {
    char str[100];
    char result[100];
    int j = 0;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
              c=='A' || c=='E' || c=='I' || c=='O' || c=='U')) {
            result[j++] = c;
        }
    }
    result[j] = '\0';
    cout << "String without vowels: " << result;

    return 0;
}
