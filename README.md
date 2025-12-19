# assignment-3.1

       1. Normal Variable vs Pointer
      Normal variable
 Stores actual value (e.g., `10`, `3.14`).
 Accessed directly by name.
 Value read by using variable name.
Value modified by assignment (`x = 20;`).

        Pointer
   Stores memory address of another variable.
   Accessed indirectly via address.
   Value read using dereference operator `*`.
   Value modified indirectly (`*ptr = 20;`).

      2. Declaration & Definition
        Normal variable
  Declaration + definition allocate memory for value.
   Example: `int a;` → allocates memory for integer.

         Pointer variable
   Declaration + definition allocate memory for address.
   Example: `int *p;` → allocates memory for pointer to int.
   Must be assigned an address (`p = &b;`).

         Role of Operators
      `&` (Address-of)
   Gives memory address of a variable.
Example: `p = &b;`.

           `*` (Dereference)
   Accesses/modifies value at stored address.
   Example: `*p = 20;` changes value of `b`.


  Example
  ```c
int num = 50;       // normal variable
int *ptr = &num;    // pointer stores address of num

printf("%d", num);   // prints 50
printf("%d", *ptr);  // prints 50

*ptr = 100;          // modifies num indirectly
printf("%d", num);   // prints 100


         3. Dereferencing a Pointer
          Meaning
Dereferencing means accessing the value stored at the memory address a pointer holds.  
 Done using the `*` operator.  

         Accessing value example
  ```c
  int x = 10;
  int *ptr = &x;     // ptr stores address of x
  printf("%d", *ptr); // dereferencing → prints 10
  ```

         Modifying value  example
  ```c
  *ptr = 20;          // changes value at address
  printf("%d", x);    // prints 20
  ```

       4. Scenarios Where Pointers Are Preferred
         Dynamic memory allocation 
 Used when memory size is not known at compile time.  
   Example: allocating memory for an array using `malloc()` in C.  

           Efficient data handling
   Passing large structures/arrays to functions via pointers avoids copying entire data.  
   Example:  
    ```c
    void update(int *p) { *p = *p + 5; }
    int num = 10;
    update(&num);   // modifies num directly
    ```

        5. Limitations and Risks of Pointers
           Complexity 
   Harder to understand and debug compared to normal variables.

      Dangling pointers
  Occur when a pointer references memory that has been freed.  

            Memory leaks
   Forgetting to free dynamically allocated memory wastes resources.  

         Security risks 
   Improper pointer use can lead to buffer overflows or unauthorized memory access.  

         Null pointers
   Dereferencing a null pointer causes program crashes.  


       6. Call by Value vs Call by Reference

     Call by Value
Function receives a   (copy  )of the variable’s value.  
Changes inside the function do   (not affect)the original variable.  
Example:
    ```c
    void addTen(int x) {
        x = x + 10;   // modifies local copy only
    }
    int num = 5;
    addTen(num);
    printf("%d", num); // prints 5 (unchanged)
    ```
         Call by Reference
Function receives the **address** of the variable.  
 Changes inside the function **affect the original variable**.  
 Example:
    ```c
    void addTen(int *x) {
        *x = *x + 10; // modifies actual variable via pointer
    }
    int num = 5;
    addTen(&num);
    printf("%d", num); // prints 15 (changed)
    ```

         Data Passing
           By Value:
   Data passed is a copy → safe, but no changes to original.  
                By Reference:
   Data passed is an address → efficient, allows modification of original.


      7. Practical Scenarios

    a) Call by Value Preferred**
 When you want to **protect original data** from modification.  
 Useful in small computations where copying is cheap.  
 Example:  
Passing a constant like `pi` to a function for calculations.  
Sending simple integers to a function that only needs temporary use.

         b) Call by Reference Preferred**
 When you want the function to **modify the original data**.  
 Efficient for large data structures (avoids copying overhead).  
 Example:  
Updating elements of an array inside a function.  
Functions that swap two numbers:
   ```c
    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
 

thus we can say;

      Call by Value
safer, original data unchanged.  

       Call by Reference
 efficient, allows direct modification.  




