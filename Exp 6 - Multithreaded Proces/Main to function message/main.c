#include <stdio.h>
#include <pthread.h>

void *thread_function(void *message){
        printf("Received message from main: %s\n", (char *) message);
        return NULL;
}

int main(){
        pthread_t thread_id;
        pthread_create(&thread_id, NULL, thread_function, "Hello from main function");
        pthread_join(thread_id, NULL);
        return 0;
}




