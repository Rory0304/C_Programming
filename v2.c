#include<stdio.h>
#include<string.h>
char *str_tok(char* str,const char* token);
int main(){
    char str[] = "s s s s";
    char *current = strtok(str," ");
    while(current != NULL){
        printf("%s\n",current);
	str_tok(NULL," ");
    return 0;}

char *str_tok(char* str,const char* token){
    char *tmp;
    int size = strlen(str);
    static int start = 0; // 토큰이 잘리는 시작점 인덱스
    static int last; //현재 스트링을 돌고있는 지점 인덱스


    if(str != NULL){
        tmp = str;} //첫번째 단계

    for(int i=start;i<size;i++){
        while(tmp != '\0'){
	    if(tmp[i] == token){
	        tmp[i] = '\0';
		start = i;
		start++;
		return &tmp[i]}
	    start++;
}
