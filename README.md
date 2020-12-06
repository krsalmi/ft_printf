# The aim of the project FT_PRINTF
This project was coded as an assignment for my school, Hive Helsinki. The goal was to code your own implementation of the libc function `printf` from scratch. The only allowed functions were
```
◦ write
◦ malloc
◦ free
◦ exit
◦ The functions of man 3 stdarg
```

The ft_printf function had to be able to handle conversion, such as string, integer and float, and it had to manage the implementation of the minimum field width and precision, as well s several flags.

## Supported conversions and flags
• %c, %s, %p  
• %d, %i, %o, %u, %x, %X with the following flags: hh, h, l and ll  
• %f with the flags: l and L  
• %%  
• The following flags: #, 0, -, + and ' ' (space)  
• Minimum field-width  
• Precision  

## Bonus conversions
The assignment allowed for other conversions that the students themselves would find useful. I coded
a %b -conversion, that converts the input to binary and %y -conversion, which adds colors.
The includes-directory has a file called colors.h, which has all the possible colors listed as macros. Here is an example of a line of code, where colors would be implemented with my %y conversion:
```
ft_printf("%yThis is in yellow,%y this is not", YELLOW, EOC); 
```
The %y conversion has to be written to start a color, and again to end it (EOC).
My ft_printf also handles the wildcard flag (*) with precision as well as feel width, which I find very useful.

## Test_main
I've written a long test_main.c file for this project, in which the output of my function ft_printf can easily be compared with the original printf function.
The test_main.c however was not submitted as such when I turned in this project, because it is not written in accordance to the 'coding norme' of our school.
To compile the test_main, run
```
gcc -Wno-format test_main.c libftprintf.a -I includes
```
The 'no-format' flag here is because otherwise it will give unnecessary compiling warnings because of faulty formatting. I however have written a couple of wrongly formatted lines 
in the test_main to see that my ft_printf handles different edge or wrongly formatted cases the same way the normal printf does.

## Remarks on my ft_printf and the project in general
One of my goals for this project was to make my ft_printf function work fast. I decided to save everything in the input 
into one sometimes long string after completing the formatting (making the conversion etc), so I would only have to call `write` once. This did make my ft_printf 
faster than those of many of my peers, but, then again, my version uses more memory.  
I coded this project in February 2020, so needless to say, there are many things I would do differently today. Although I have
named the files according to the function that is in it, I find that I could have group many many of the functions together and end
up with fewer files.  
In this project we were allowed to use the functions in our 'libft' library, which we coded as one of our first assignments after starting the
école 42 curriculum. Here those functions can be found in files named 'libc_functions*.c'. However, nowadays, I have
added my ft_printf into my libft-library and not the other way around.  
In this project, even though I tried to name variables and functions in a descriptive manner, I think it is a shame that 
my code does not have any comments, something I would definitely do differently if I would begin this project now.  
  
In general, I'd say that this was a very challenging project for me. The basic structure of the function was fast and wuite 
fun to build, but when it was time to code the individual conversions in detail, (for ex. managing the %f float conversion and the rounding up according to precision)
 the project got exponentially more demanding. But it was definitely worth it and I learned so much and my understanding
 of the nomal `printf` function (and my ability to use it) is at a whole other level.
