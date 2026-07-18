 #include <unistd.h>
 #include<stdio.h>
 #include <string.h>



int main() {
	int bytes = 0;
	
	
	
	while (1){
	
	char buf [bytes];
	
	char * test = getcwd( buf,  bytes);
	
	if (test == NULL)  bytes++;
		
	else {write (1 , buf , bytes); printf ("\n"); break;}
	
	
	
	
	}
	
	
	    
	return 0;
}
