#include<stdio.h>

/*첫 번째 인자로 문자열의 주소값이 들어오면 거기서 부터 분리를 시도하고
만약 NULL이 들어오면 이전에 자기가 기억한 곳으로부터 분리를 시도한다.*/
/*주소값을 반환해주어야 한다.*/

char *my_strtok(char *str,const char *token);
int main(){
    char str[80] = "MY ORANGE JUICE";
    char *current;
    current = my_strtok(str," ");
    while(current != NULL){
        printf("%s\n",current);
	current = my_strtok(NULL," ");
    }
    return 0;}

char *my_strtok(char *str,const char *token){
    static char *tmp; //현재 문장을 돌고있는 포인터 
    static char *start; //토큰이 잘리는 부분의 포인터    
    if(str != NULL) {
        tmp = str; //tmp = &str[0];
    }
    while(tmp != NULL){
        start = tmp;
        if(tmp == token){
	    *tmp++='\0'; 
	    //현재 포인터가 가르키는 곳에 '\0'넣고 그다음 포인터로 이동
	    return start;}
	*tmp++;
    }
    if(*tmp == '\0') return NULL;
    else return start;
}
