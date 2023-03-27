#include <stdio.h>
#include <stlib.h>

int main() {
	int status;
	pid_t pid_figlio;
	printf("S1 (padre1) - pid = %d\n", getpid());
	printf(" fork esterna - \n");
	if ((pid_figlio = fork()) == -1) {
		printf("fork non riuscita!");
	} else if (pid_figlio == 0) {
		prinf("figlio1: pid = %d, padre pid = %d\n");
		ramo34();
	}
}
	
ramo34() {
	 int status;
	 pid_t pid4;
	 printf("fork - processi P34 -> crezione P4\n");
	 if ((pid4 = fork()) == -1) {
		 printf("fork non riuscita!");
	}
	if (pid4 == 0) {
		printf("S4 (figlio2) - pid = %d, padre pid = %d\n", getpid(), getppid());
	} else {
		printf("S3 (padre2) - pid = %d, padre pid = %d\n", getpid(), getppid());
		printf("wait fine ramo P4 (padre2 join figlio2)\n");
		wait(pid4, &status, 0);
		printf("fine attesa P4\n");
		printf("fine ramo P34\n");
	}
	exit(0);
}	