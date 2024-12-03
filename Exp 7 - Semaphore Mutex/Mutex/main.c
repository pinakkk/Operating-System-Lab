#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#define MAXCOUNT 1000000
#define NUMTHREADS 5

int shared_variable = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *thread_fun(void *thread_id){
    for(int i=0; i<MAXCOUNT; i++){
        mutex_lock(&mutex);
        shared_variable++;
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

int main(){
    
    pthread_t threads[NUMTHREADS];
    pthread_mutex_init(&mutex, NULL);
    
    for(int i=0; i<NUMTHREADS; i++){
        pthread_create(&threads[i], NULL, thread_fun, NULL);
    }

    for(int i=0; i<NUMTHREADS; i++){
        pthread_join(threads[i], NULL);
    }
    pthread_mutex_destroy(&mutex);
    printf("%d", shared_variable);
    return 0;
}