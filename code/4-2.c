#include <stdio.h>
#include <stdio.h>

void echo() {
    char buf[5];
    fgets(buf , 6 , stdin);
    printf("%s\n",buf);
}

int main() {
    int x = 42;
    echo();
    return 0;
}
