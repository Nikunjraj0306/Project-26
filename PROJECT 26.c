/*Making a password and text encryptor
Same concept we learned in Cybersecurity---> data--->while sending--->using key--->gets encrypted
key would be first letter of password in ascii number...and that key will be further operator with text
in loop using XOR operator and generate encrypted text...
*/

#include<stdio.h>
#include<string.h>


// START for Encryption Decryption Section(Priyal)

int secrets(char *text,char *password){    //we want text to be encrypted using password
    
    //int key=password[0]; this was not valid because in this case if i select "xyz" as pass 
    //and my content as " i am xyz", then while looping for encrption using XOR the program will
    //while printing the output , fgets take this as the new line and skips the whole text...

    int key =(password[0]%200)+30; //this type of Ascii value of pass will not 
                                  //match any text in the letter...

    if(key==0 ){//this is the correction 
        key==1;//for an empty password...
    }

    int i;
    //now loop and encrypt the text
    for(i=0;text[i]!='\0';i++){
        text[i]^=key;
    }
    
    return 0;
}

//END for Encryption and Decryption Section

//now whatever text wee input, that text will be encrypted using this algorithm
//but we have to take the password and input text from the user in our creating function...

/* There will be 4 functions according to our project:
    1. Create file(encryption + writing data)
    2. Read File(decryption + reading data)
    3. Deleting File
    4. Exit
*/

//START for File Creation Section(Akhil)

void filecreation(){
    //requirements needed--- filename; encryption function will bee written here so we can encrypt 
    //our file at the of making, this will requirement text & password.
    char filename[50];
    printf("Enter the name of file;");
    scanf("%49s",filename);
    
    strcat(filename,".text");
    
    char password[50];
    printf("Set up the password for your file:");
    scanf("%49s",password);  // we have selected 49 bcz of null operator added to the string
    getchar();
    
    char text[300];
    
    printf("enter the text to save in the file:");
    fgets(text,sizeof(text),stdin);
    //to remove newline at the end we use string function strcspn
    text[strcspn(text,"\n")]='\0,;
    
    //now the function we have made for encryption comes
    secrets(text,password);
    //now text is encrypted...and we have to store in a file
    //named filename(input already taken from user)
    
    //file handling: writing file
    
    File *fptr=fopen(filename,"W");
    fprintf(fptr,"%s",text);
    fclose(fptr);
    printf("File secured successfully.\n");
    printf("Dont't forget the password.");
}

//END for File Creation Section


//START for File Opening and Reading Section(Nikunj)

void fileopening(){
    char filename[50];
    scanf("%49s",filename);

    char openingpassword[50];
    scanf("%49s",openingpassword);

    /* wee now have to get the encrypted data and convert iit back into the string and again applly
       encryption decrytion to finallly get the original text but we this decryption would have to succefully 
       happen only when wee enter the right password for the file, otherwise it should not give the originall data...
    */
    FILE *fptr=fopen(filename,"r");

    //to decrypt the encrypted text in the file...wee must have to get the encrypted data first
    char encryptedtext[300];
    gets(encryptedtext,fptr);

    secrets(encryptedtext,openingpassword);
    //now we have converted the encrypted text back into the original text using the encryption decryption function
    printf("%s",encryptedtext);
}


//END for File Opening and Reading Section


//START for File Deletion Section
void deletingfile(){
    ///file name for deletion 
    chr nameoffile[50];
    printf("enter the name of the File :")
    scanf("%49s",nameoffile);

    strcat(nameoffile,'.txt');

    if (remove(nameoffile)==0){
        printf("file removed.");
    }else{
        printf("Could not remove file.");
         }
    }

//END for File Deletion Section

//START for MENU Creation for the user

int main (){
    printf('\n welcome to our file locker');
    printf("1.create and save the file \n");
    printf("2.delete file\n");
    printf("3.Exit \n");
    
}

//END for MENU creation for the user

