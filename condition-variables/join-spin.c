#include <stdio.h>
#include <pthread.h>

volatile int done = 0;

void *child(void *args) {
    printf("child \n");
    done = 1;
    return NULL;
}

int main(void) {
    printf("parent: begin\n");
    pthread_t c;
    pthread_create(&c, NULL, child, NULL);
    while (!done) {

    }
    printf("parent: end\n");
    return 0;
}
