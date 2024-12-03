#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#define MAXCOUNT 1000000
#define NUMTHREADS 5
int shared_variable = 0;
sem_t semaphore;

void *thread_fun(void *thread_id){
    for(int i=0; i<MAXCOUNT; i++){
        sem_wait(&semaphore);
        shared_variable++;
        sem_post(&semaphore);
    }
    pthread_exit(NULL);
}

int main(){
    sem_init(&semaphore, 0, 1);
    pthread_t threads[NUMTHREADS];

    for(int i=0; i<NUMTHREADS; i++){
        pthread_create(&threads[i], NULL, thread_fun, NULL);
    }

    for(int i=0; i<NUMTHREADS; i++){
        pthread_join(threads[i], NULL);
    }
    sem_destroy(&semaphore);
    printf("%d", shared_variable);
    return 0;
}