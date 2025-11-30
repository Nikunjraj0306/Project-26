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
























