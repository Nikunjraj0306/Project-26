int secrets(char *text,char *password){    //we want text to be encrypted using password
    
    int key=password[0];


    int i;
    //now loop and encrypt the text
    for(i=0;text[i]!='\0';i++){
        text[i]^=key;
    }
    
    return 0;
}
