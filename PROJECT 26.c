// START for Encryption Decryption Section(Priyal)

int secrets(char *text,char *password){    //we want text to be encrypted using password
    
    int key=password[0];


    int i;
    //now loop and encrypt the text
    for(i=0;text[i]!='\0';i++){
        text[i]^=key;
    }
    
    return 0;
}

//END for Encryption and Decryption Section


//START for File Creation Section(Akhil)

void filecreation(){
    //requirements needed--- filename; encryption function will bee written here so we can encrypt 
    //our file at the of making, this will requirement text & password.
    char filename[50];

    scanf("%49s",password);
    strcat(filename,".text");
    
    char password[50];
    scanf("%49s",password);  // we have selected 49 bcz of null operator added to the string
    
    char text[300];
    printf("enter the text to save in the file:");
    fgets(text,sizeof(text),stdin);
    
    //now the function we have made for encryption comes
    
    secrets(text,password);
    //now text is encrypted...and we have to store in a file
    //named filename(input already taken from user)
    //file handling: writing file
    
    File *fptr=fopen(filename,"W");
    fprintf(fptr,"%s");
    printf("File secured successfully.\n");
}

//END for File Creation Section














