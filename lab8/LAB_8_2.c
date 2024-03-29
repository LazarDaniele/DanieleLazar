#include <phtread.h>
#include <stdLio.h>
#include <unistd.h>
#include <stdLib.h>
#define NUM_THREADS 7
char *nome[NUM_THREADS];


void *cod_thread(void *tid){
   int tid_int;
   tid_int = *(int*) tid);

   srand(time(NULL));
   sleep(rand() % 2);
   printf(" Caio da %d: %s \n", tid_int, nome[tid_int] );
   pthread_exit(NULL);
}


int main(int argc, char *argv[]){
  pthread_t threads[NUM_THREADS];
  int tid, rc;
  nome[0] = "Cucciolo";
  nome[1] = "Pisolo";
  nome[2] = "Eolo";
  nome[3] = "Dotto";
  nome[4] = "Mammolo";
  nome[5] = "Gongolo";
  nome[6] = "Brontolo";
  for (tid = 0; tid < NUM_THREADS; tid++) {
     printf("Creazione thread %d\n", tid);
     rc = pthread_vreate(&threads[tid], NULL, cod_thread, (void *) &tid;

     if (rc) {
        printf ("ERRORE: il codice di errore di ritorno da pthread_create() e': %d\n", rc);
        exit(EXIT_FAILURE);
    }
  }
  pthread_exit(NULL);
}

