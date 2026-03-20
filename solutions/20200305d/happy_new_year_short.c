#include <stdio.h>

int main() {
    return printf("%d\n", '-' * '-' + 'b' - 'a') < 'a' - 'a';
}
