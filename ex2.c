#include <stdio.h>
#include <stdlib.h>
#define INPUT_BUFFER 256
typedef enum {false,true}bool;

void read_eval_print_loop(void);
void get_input_from_eval_loop(char* eval_loop_string);

int main(int argc, char const *argv[])
{
	read_eval_print_loop();
	return 0;
}



void read_eval_print_loop(void){
    bool loop_is_active = true ;
    char eval_loop_string[INPUT_BUFFER];
    while (loop_is_active) {
    	get_input_from_eval_loop(eval_loop_string);
	    printf("%s",eval_loop_string);
	}	

}

void get_input_from_eval_loop(char* eval_loop_string){
	 printf("OS SHell:");
	 fgets(eval_loop_string, INPUT_BUFFER, stdin);
}