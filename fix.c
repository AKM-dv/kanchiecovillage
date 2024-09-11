char * infixtopostfix(char* infix){
    struct stack * sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *) malloc(sp->size * sizeof(char));
    char * postfix = (char *) malloc(strlen(infix) + 1 * sizeof(char));
    int i=0;  //tracks the infix traversal
    int j = 0 ; //tracks postfix addition

    while(infix[i]! = '\0'){
        if(!isOperator(infix[i])){
            postfix[j] = infix[i]
            j++;
            i++
        }
        else{
            if(precedence(infix[i]) > precedence(stackTop(sp))){
                push(sp, infix[i]);
                i++
            }
            else{
                postfix[j] = pop(sp);
                j++;
            }
        }



    }



while(!isEmpty(sp)){
    postfix[j] = pop(sp);
    j++
}
postfix[j] = '\0';
return postfix


}




int main(){
    char * infix = "a-b+t/6"
}