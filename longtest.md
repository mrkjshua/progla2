[Longtest](https://goo.gl/forms/XLs32AcwkAE6AcaM2) (closed)
## 1. Example of an array is: int array1[4] = [10, 5, 678, -400] ;
False. Array values should be enclosed in '{}'. Valid example would be:

	int array1[4] = [10, 5, 678, -400];
    
## 2. int array1[4] = { 10, 5, 678, -400 }; What is array1[2]?
678, Basic. LoL

## 3. int array1[4] = { 10, 5, 678, -400 }; What is array1[4]?
None. Remember:

	array1[0] = 10
    array1[1] = 5
    array1[2] = 678
    array1[3] = -400
    
array[4] does not exist
    
## 4. int x[50], y[50] ; To copy x to y we
Use loop to copy each array's element. Remember: 

	for ( i=0; i < 50; i++)
		y[i] = x[i]; 
    
## 5. int x[50], y[50] ; To compare x and y we
Use loop to compare each array's element. Remember: 

	for ( i=0; i < 50; i++)
		x[i] == y[i]; 
        
## 6. int array1[4] = { 10, 5, 678, -400 }; To output the second element, we use
array1[1], basic. LoL

## 7. absolute_value() is a predefined function?
False. abs() is a predefined function. absolute_value() is a user defined function.

## 8. absolute_value() is a user defined function?
True, basic. LoL

## 9. int function1(int num, int num1){} can be called using function1(1, '1')?
False. Take note of the '1'. It is a character. `int function1(int num, int num1){}` should receive an int parameter, not a character.

## 10. int function1(int num, int num1){} can be called using function1(1, 1)?
True, basic. LoL

## 11. void functions can return values?
False. Remember that void functions are `Golddiggers`. They do not return anything.

## 12. function2(){cout<<"Yo\n"; function1();} is recursive?
False. Recursion happens when a function calls itself. If you format the code properly, it should be: 

	function2(){
    	cout<<"Yo\n"; 
        function1();
    }

As you can see, function2() calls function1() and not itself.

## 13. character shortString[]= “I am a string”; is a string?
False, basic. LoL. There is no `character` datatype, only `char`.

## 14. char aString[10]; aString = "Hello"; is valid?
False. You do not assign that way. We have `strcpy`. Proper way should be: 
	#include<stdio.h>
    #include<cstring>
    int main(){
        char aString[10]; 
        strcpy(aString, "Hello");
    }
    
## 15. char str[10] = "Hello"; if(strcmp(aString,"Hello")==0){cout << "Hello";} is valid?
False. Bonus kasi nagkamali ako ng pagpili ng tamang choice. LoL. Upon proper formatting, it should be:

	char str[10] = "Hello"; 
	if(strcmp(aString,"Hello")==0){
		cout << "Hello";
	}

 
There is no `aString` variable.

## 16. What is the output of cout << ceil(3.6);?
4.0, basic. LoL. ceil() gets the higher rounded form.

## 17. What is the output of cout << floor(3.6);?
3.0, basic. LoL. floor() gets the lower rounded form.

## 19. To get the lowercase of the character 'A', we
tolower('A');, basic. LoL

## 20. 5 is the array[1] from int array1[4] = [10, 5, 678, -400];
False. Take note, **array[1]** is different from **array1[1]**. Please be paranoid when reading code. This determines your survival. 

## 21. a[1][1] on int a[2][3] = {{5,6,7},{10,20,30}};
20, basic. LoL. 

a[0] is {5,6,7}

a[1] is {10,20,30}

a[1][0] is 10, therefore:

a[1][1] is 20

## 22. a[2][1] on int a[2][3] = {{5,6,7},{10,20,30}};
None. There is no spoon. Este, there is no a[2]. Only until a[1].

