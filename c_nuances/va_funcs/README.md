# Variable argument functions in C

## 1. `va_list`

* The `va_list` array type is defined in `sstdarg.h`
* it is basically a char array 
* when defining a variadic function in C give an identifier for each function signature possible
* then use `...` to signify the variable arguments
* the contents that take the place of `...` will be filled in `va_list`

## 2. `va_start`

* this function helps us initalize the variable arguments list 
* we pass it the optional list and the arg preceding the list
* call this before the starting processing

## 3. `va_arg`

* pointer to the argument list 
* type of the next argument 
* subsequent calls to the `va_arg` return the remaining arguments in succession 


## 4. `va_end`

* used to terminate the argument list pointer that was intialized during `va_start`

