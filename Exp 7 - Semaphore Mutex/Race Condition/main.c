#include <stdio.h>
#include <pthread.h>
#define MAXCOUNT 1000000
#define NUMTHREADS 5


int shared_variable = 0;

void *thread_fun(void *thread_id){
    for(int i=0; i<MAXCOUNT; i++){
        shared_variable++;
    }
    pthread_exit(NULL);
}

int main(){
    pthread_t thread[NUMTHREADS];

    for(int i=0; i<NUMTHREADS; i++){
        pthread_create(&thread[i], NULL, thread_fun, NULL);
    }

    for(int i=0; i<NUMTHREADS; i++){
        pthread_join(thread, NULL);
    }

    printf("%d\n", shared_variable);
    return 0;
}