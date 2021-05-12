# Pointers

A Pointer is : 
- A variable that holds a memory location
- The address of another variable
- The address of a chunk of memory

But why? 
- Well part of the answer is that C is a midlevel language. In a way it's almost shorthand for assembly language which is close to the machine code spoken directly by the processor. 
- C's pointers provide access to memory locations similar to the way assembly language accesses memory directly. 
- Pointers offer a potent way to examine and manipulate data. 

Because of their low level access, using pointers involves a few rules. 

- First, a pointer is declared as a specific data type. The type matches the data the pointer must reference. So to obtain the address of a character variable, a character pointer is used. 
 ```c
 char a;
 char *ptr;
 ```
- Second and most importantly, a pointer must be initialized before it's used. This rule is true for all C language variables but more so for pointers. That's because an uninitialized pointer contains an unknown memory location which if accessed can crash the program or bring down the entire system. 

### The pointer's dual nature

The most confusing aspect of pointers is their dual nature. 

- We use the unary asterisk operator to declare a pointer, like this. `char *ptr` 
- After it's declared and initialized, the pointer is used with or without the asterisk operator. 
- Without the asterisk operator, the pointer refers to an address.
`ptr` --> An Address
- With the asterisk, it refers to the value stored at the address. `*ptr`

## Pointer Tools

The tools used in C to implement pointers. They fall into two categories:
- Operators 

    - The operators are the unary asterisk (`*`) , or *a pointer operator*. 
    - The unary ampersand (`&`), the *address of* operator.  
    - The `sizeof` operator, which is a key word, but also an operator. 
- Symbolic constants 

The symbolic constants are null, which references a pointer not assigned to any specific address, and size t, which represents a byte count, such as the number of bytes in a buffer. These items come into play primarily when allocating memory. The operators help examine a variable. All C variables have a data type. They have a name assigned by the programmer. And they are assigned a value. The ampersand operator obtains another information tidbit, the variables address, its storage location in memory. And the size of operator returns the number of bytes the variable occupies in storage. In this code, character variable A is assigned a value at line eight, the uppercase letter A. At line 11, the ampersand operator is used to obtain the address of that variable in memory. The percent p placeholder outputs the address as a hexadecimal value. And at line 12, the size of operator is used to obtain the number of bytes the variable uses in memory. This value is represented as a long, unsigned integer. Build and run. The address value may be different on your computer, but character variables occupy one byte of storage, at least on this system for this program. Now on your own, you can examine the other two exercise files, examine two, which uses an integer variable, and examine three, which uses a double. Comments in the source code files explain the results. In this exercise file, pointer ptr is assigned to the address of variable a at line 10. Two print f statements output the variables address and value, but they use the pointer variable to do so indirectly. So with the asterisk at line 12, variable ptr returns the value stored at its memory location, which should be the uppercase letter A. Now minus the asterisk, at line 13, the variable returns the address of variable a, as pointers store addresses. Build and run. And again the address may be different from the earlier example, and differ from computer to computer. But the output shows the value and address of the variable as stored in memory and referenced by the pointer. Two other exercise files perform the same actions but on different variable types. Integer here in p examine two, and double for p examine three, which you can look at in your leisure. Comments in the code explain what's going on, but the process and purpose remains the same. The pointer holds the variable address, and it can reference the variables data.