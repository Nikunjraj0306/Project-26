# Project-26  

1st Semester Project  

**Project work statement:-**  

**Real-world Context**:Users want a command-line locker that stores small text files securely with a password and lightweight encryption.  

**Detailed Problem Description:** 
  Implement a file locker that:  
  -Allows creating, opening, reading, writing, and deleting small text files inside a protected folder.  
  -Requires a master password to access. Use a salted checksum (simple custom hash) to validate password.   
  -Encrypts file contents with a simple reversible algorithm (e.g., XOR with pseudo-random key  derived from password) before writing to disk; decrypt when reading.   
  -Uses structures to keep metadata (filename, size, timestamp).  
  -Uses functions for encryption/decryption, file I/O, and password handling. Use dynamic memory to read variable length files.  
  -Includes access logs and an option to change master password securely.  
     
**Course Outcomes Covered:** CO1–CO5 (design security flow, implement I/O & encryption logic, arrays/functions, pointers & dynamic memory, end-to-end secure tool).  

**Syllabus Topics Applied:** Problem Solving, File I/O, Strings, Functions, Pointers, Dynamic Memory, Structures, Basic security algorithms. 




--------------------------------------------------------------------ALGORITHM-----------------------------------------------------------------------------

**Priyal**- Encryption and Decryption(secrets)
1. Start the function with two inputs:
   - the text we want to protect,
   - and the password chosen by the user
   - 
2.  Take the first letter of the password and convert it into a number.
   This number is then adjusted using a small formula so that it becomes a safe encryption key.

3. If the generated key accidentally becomes zero , change it to 1.
   (A key value of 0 would make the encryption useless.)
   
4. Go through the text character by character.
  
5. For every character in the text , apply in XOR operation usimg the key.
  - This transforms readable text into encrypted symbols.
  - Running XOR again with the same key turns encrypted text back to the original , so the  same function works both for encryption and decryption.
    
6. Continue until the end of the string is reached.
  
7. End the function and return ack to the caller.


**Akhil** – File Creation & Saving Encrypted Text
1.	Start the file creation process.

2.	Ask the user for a filename.
    After reading it, attach “.txt” to make it a complete text-file name.

3.	Ask the user to enter a password, which will later be required to decrypt the file.

4.	Ask the user to type the actual message they want to secure.
    -Read the complete line of text.

5.	Remove any extra newline character that gets added when reading input.

6.	Call Priyal’s encryption function to convert the user’s message into an encrypted form.

7.	Try opening the file in write mode.
   - If it fails, show an error message and stop the process.
   - If the file opens properly, write the encrypted text into it.

9.	Close the file safely.

10.	Show a confirmation message telling the user that the file has been successfully locked and saved.

11.	End the function.


**Nikunj** – File Opening & Decrypting Function
1.	Begin by asking the user which file they want to open.
    After receiving the name, add “.txt” to it.
2.	Ask the user for the password that was originally used to lock the file.

3.	Try to open the file in read mode.
    - If the file doesn’t exist, show “File not found” and stop.

4.	If the file opens correctly, read the encrypted content stored inside.

5.	Close the file.

6.	Send the encrypted text along with the entered password to Priyal’s encryption/decryption function.
    - If the password is correct, the text will return to readable form.
    - If the password is wrong, the output will be meaningless characters.

7.	Display the decrypted content on the screen.

8.	End the function.


**Archit** – File Deletion & Main Menu Control
1.	Ask the user for the name of the file they want to remove.

2.	Add “.txt” to make it a complete filename.

3.	Use the system’s delete command to remove that file.

4.	If deletion succeeds, show a message saying the file was successfully removed.
    - Otherwise, show an error message.

5.	End the delete function.

-------------------------------------------

1.	Start the main program.

2.	Keep the program running in a loop so the user can perform multiple operations.

3.	Display a simple menu with four choices:
    - Create & Save a File
    - Read a File
    - Delete a File
    - Exit

4.	Read the user’s input.

5.	Based on the user’s selection:
    - If they choose 1, call Akhil’s file creation function.
    - If they choose 2, call Nikunj’s file opening function.
    - If they choose 3, call Archit’s file delete function.
    - If they choose 4, exit the program completely.
    - For any invalid input, show an error message.

6.	Loop back to show the menu again until the user decides to exit.

7.	End the program.


























