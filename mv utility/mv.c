#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>




int mv_main(int argc, char *argv[]) {



	if (argc == 2 ) {printf("%s: missing destination file operand after '%s' ", argv[0], argv[1]); exit(-1);}
	if (argc == 1 ) {printf("%s: missing file operand ", argv[0]); exit(-2);}

	int fd1 = open( argv [1] , O_RDONLY);
	
	if (fd1 < 0) {printf("%s: cannot stat '%s': No such file or directory" , argv[0], argv[1]); exit(-3);}
	if (fd1 > 0 ){
	
		if (strcmp(argv[1], argv[2]) == 0) {printf("%s: %s and %s are the same file" , argv[0], argv[1], argv[2]); return 0;} 
		else if (rename(argv[1], argv[2]) == 0) { close(fd1); unlink(argv[1]);  return 0; }
		else {
			
			int fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC , 0644  );
			if (fd2 > 0) {
				
					int bytes = 10;
					
					char buf [bytes] ;

					int number_read;
					while ((number_read = read (fd1 , buf , bytes))  > 0) {
						
						write (fd2 , buf , number_read);
						
					
						}
 
					close(fd1);
					unlink(argv[1]);
					close(fd2);

					return 0;
				}
		
			if (fd2 < 0) exit (-10);
		
		}
	
	
	}

	
}
