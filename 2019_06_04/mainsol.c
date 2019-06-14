#include "solucion.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
	int x = 20;
	pid_t pid;
        pid=fork();
        if(pid==0){
		printf("fibonacci(%d) = ",x);
  		x = fibonacci(x);
  		printf("%d\n",x);
  		guardarEntero("archivo",x);      
        }else{
                int status;
		wait(NULL);
		int y=leerEntero("archivo")*100;
                printf("fibonnacci * 100 = %d\n",y);
        }

  return 0;
}
