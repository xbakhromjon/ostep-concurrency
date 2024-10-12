#include <stdio.h>
#include <pthread.h>

void *child(void *args) {
    printf("child \n");
    // XXX how to indicate we are done?
    return NULL;
}

int main(void) {
    printf("parent: begin\n");
    pthread_t c;
    pthread_create(&c, NULL, child, NULL);
    // XXX how to wait for child?
    printf("parent: end\n");
    return 0;
}
