#The aim of the project FT_PRINTF
This project was coded as an assignment for my school, Hive Helsinki. The goal was to code your own implementation of the libc function ´printf´ from scratch. The only allowed functions were
´´´
◦ write
◦ malloc
◦ free
◦ exit
◦ The functions of man 3 stdarg
´´´

The ft_printf function had to be able to handle conversion, such as string, integer and float, and it had to manage the implementation of the minimum field width and precision, as well s several flags.

##Supported conversions and flags
• %c, %s, %p
• %d, %i, %o, %u, %x, %X with the following flags: hh, h, l and ll.
• %f with the flags: l and L.
• %%
• The following flags: #, 0, -, + and ' ' (space)
• Minimum field-width
• Precision

##Bonus conversions
The assignment allowed for other conversions that the student themselves would find useful. I coded
a %b -conversion, that converts the input to binary and %y -conversion, which adds colors.
The includes-directory has a file called colors.h, which has all the possible colors listed as macros. Here is an example of a line of code, where colors would be implemented with my %y conversion:


##Test_main
I wrote a long test_main.c file for this project, in which the output of my function ft_printf can easily be compared with the original printf function.
The test_main.c however was not submitted as such when I turned in this project, because it is not written in accordance to the 'coding norme' of our school.
To compile the test_main, run
´gcc -Wno-format test_main.c libftprintf.a -I includes´
The 'no-format' flag here is because otherwise it will give unnecessary compiling warnings because of faulty formatting. I however have written a couple of wrongly formatted lines 
in the test_main to see that my ft_printf handles different edge or wrongly formatted cases the same way the normal printf does.
'	ft_printf("%yThis is in yellow,%y this is not", YELLOW, EOC);  The %y conversion has to be written to start a color, and again to end it (EOC).