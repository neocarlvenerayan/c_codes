#include <stdio.h>

int main() {
    printf("\033[1;31mJohn\033[0m\nttttttt");  // Red color for name John
    printf("\033[1;32mMary\033[0m\n");  // Green color for name Mary
    printf("\033[1;34mDavid\033[0m\n"); // Blue color for name David

    return 0;
}
