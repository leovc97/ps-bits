#include <stdio.h>
#include <unistd.h>

int main(){
	int i;
	
	for(i = 0; i < 900; i++){
		printf("%do numero: %d\n\n", i + 1, i);
		sleep(60);
	}
	
	return 0;
}
