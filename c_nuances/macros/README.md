# MACROS in C 

It is a simple identifier that will be replace by a code fragment by the preprocessor. Use the `#define` perprocessor directive to define macros followed by the expansion or replacement list. They are mainly of two types 

* Object like macros 
* Function like macros 
* Macro definition only take effect after the point where you defined them 
* when a preprocessor expands a macro name, the macro expansion replaces the macro invocation, the expansion is then examined for more macros to expand 


## 1. Function like macros 

	* put a pair of parenthesis immeadiatly after the macro name. 
	* if you use a space after the macro name the `()` will be considered as part of the expansion 
	* These macros can take arguments, the arguments can be inserted in between the paranthesis
	* arguments must be valid C identifiers comma separated and with optional space beetween
	* not type checking so can be risky if not used judiciously
	* all arguments to a macro are completely macro expanded before they are subsituted in to the macro body

## 2. Stringizing

	* you can convert macro argument into string constants using the `#` preprocessing operator 
	* this replaces the argument with the literal string of the argument 
	* to strigize the expansion of an argument you'll have to levels of macros
	* concatenation can be done using `##`

## 3. Variadic macros  

	* you can declare macros to accepts variable number of arguments
	* use teh `#define <MACRO_NAME>(...) <MACRO_EXPANSION> (<named_args>,__VA_ARGS)__)

## 4. Standard predefined macros 

	* ``__FILE__`` expands to the name of the current input file 
	* ``__LINE__`` expands to current input line number 
	* both are used for logging and error messages
	* `#include` changes the expansion to the included file
	* ``__func__`` contain the name of the current function 
	* ``__DATE__``
	* ``__TIME __`

## 5. Common predefined macros

	* too useless for me right now
