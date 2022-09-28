# 42-printf
![image](https://user-images.githubusercontent.com/88405217/192702376-67c4da4e-5d3e-4408-a4bd-61fe4c2ff611.png) ![image](https://user-images.githubusercontent.com/88405217/192702335-0e535ac0-984d-4b7b-969e-19d200f6a5a5.png)

We are replicating the behavior of the printf function in c language 
--------------------------------------------------------------------
Important Functions to look into: 
*Variable Arguments* 
````C
// va_list is a type to hold information about
    // variable arguments
    va_list ap;
  
    // va_start must be called before accessing
    // variable argument list
    va_start(ap, arg_count);
  
    // Now arguments can be accessed one by one
    // using va_arg macro. Initialize min as first
    // argument in list
    min = va_arg(ap, int);
  
    // traverse rest of the arguments to find out minimum
    for (i = 2; i <= arg_count; i++)
        if ((a = va_arg(ap, int)) < min)
            min = a;
  
    // va_end should be executed before the function
    // returns whenever va_start has been previously
    // used in that function
    va_end(ap);
````
