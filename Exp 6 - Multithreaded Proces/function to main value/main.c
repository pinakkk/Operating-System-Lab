#include <stdio.h>
#include <pthread.h>

void *thread_function(void *arg){
        int *result = (int *) arg;
        *result = 42;
        pthread_exit(NULL);
}

int main(){
        pthread_t thread_id;
        int result = 0;

        if(pthread_create(&thread_id, NULL, thread_function, (void *) &result)){
                printf("Error Creating Thread...\n");
                return 1;
        }

        pthread_join(thread_id, NULL);
        printf("result value : %d\n", result);
        return 0;
}
