# InventoryProgram
I took a small simple program and I began adding more features off C++ as I was learning in class

It started simple but than it started getting a little more complex, for me.

My first version was simple. Everything in main. I used a while loop to read and a for loop to print
I didnt really struggle here.

* My second version I moved the code into a function. My loops went into the function. Main() only had
the function call. No struggling here.

* My third version I seperated the function into one for reading and one for pritning. The AddInventory()
function has the prompt and a while loop to read input int a vector.
The PrintInventory() function has the for loop to print. Main() has an empty vector that serves as the
arguments for the two function calls. 

I learned why I needed pass-by-reference parameters ('&' after data type). I was using pass-by-value
before. My code was compiling w/o errors but I wasnt getting any output.

Pass-by-reference allows the the vector in main to 'see' or 'connect' to the vectors in the functions
above main. This parameter type allows the functions to modify the argument.

* My fourth version I am going to convert the program into a class and seperate the program into
 seperate files, and add error handling for bad input.
