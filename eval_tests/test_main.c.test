#include <stdio.h>
#include "ft_printf.h"

int		main()
{
	int i;
	int j;

	ft_printf("\n\n%y********************************************************************************************%y\n", YELLOW, EOC);
	ft_printf("%y----------------------------------TESTS FOR FT_PRINTF-------------------------------------------%y", CYAN, EOC);
	ft_printf("\n%y*******************************************************************************************%y\n\n", YELLOW, EOC);
	ft_printf("All tests will follow the same logic:\n1) results for my ft_printf and		return value\n2) results for normal printf and	return value\n\n\n");
	ft_printf("%y		Basic string tests without arguments or flags%y\n\n", MAGENTA, EOC);
	ft_printf("Empty string:\n");
	i = ft_printf("");
	ft_printf("	%d\n", i);
	j = printf("");
	printf("	%d\n", j);	

	ft_printf("\nOther Strings\n");
 	i = ft_printf("test");
	ft_printf("	%d\n", i);
  	j = printf("test");                            //-> "test"
	printf("	%d\n", j);
  	ft_printf("\n");

  	i = ft_printf("1234");                            //-> "1234"
	ft_printf("	%d\n", i);
 	j = printf("1234");      
	printf("	%d\n", j);
  	ft_printf("\n");

  	i = ft_printf("Hello World!");                            //-> "1234"
	ft_printf("	%d\n", i);
 	j = printf("Hello World!");      
	printf("	%d\n", j);
  	ft_printf("\n");

	i = ft_printf("Shall I compare thee to a summers day?\nThou art more lovely and more temperate:\nRough winds Do shake the darling buds of May,\nAnd summers lease hath all too Short a date:\nSometime too hot the eye of heaven shines,\nAnd often is his gold complexion dimmd");
	ft_printf("\n	%d\n\n", i);
	j = printf("Shall I compare thee to a summers day?\nThou art more lovely and more temperate:\nRough winds Do shake the darling buds of May,\nAnd summers lease hath all too Short a date:\nSometime too hot the eye of heaven shines,\nAnd often is his gold complexion dimmd");
	printf("\n	%d\n", j);
	ft_printf("\n");

	ft_printf("\n%y	Testing %%-mark%y\n\n", MAGENTA, EOC);
  	i = ft_printf("%%");                              //-> "%"
  	ft_printf("	%d\n", i);
	j = printf("%%");
	printf("	%d\n", j);
	ft_printf("\n");;

  	i = ft_printf("|%5%|");                            //-> "%5%"
	ft_printf("	%d\n", i);
 	j = printf("|%5%|");
	printf("	%d\n", j);
  	ft_printf("\n");

  	i = ft_printf("|%-5%|");                            //-> "%-5%"
	ft_printf("	%d\n", i);
 	j = printf("|%-5%|");
	printf("	%d\n", j);
  	ft_printf("\n");
 
  	i = ft_printf("|%.0%|");                            //-> "%.0%"
	ft_printf("	%d\n", i);
 	j = printf("|%.0%|");
	printf("	%d\n", j);
  	ft_printf("\n");

  	i = ft_printf("%%%%%%%%");                            //-> "%%%%%%%%"
	ft_printf("	%d\n", i);
 	j = printf("%%%%%%%%");
	printf("	%d\n", j);
  	ft_printf("\n");

	ft_printf("\n%y$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%y\n", YELLOW, EOC);
	ft_printf("\n	%yTesting c-conversion:\n\n%y", MAGENTA, EOC);
  	i = ft_printf("%c", 'a');                            //-> "a"
	ft_printf("	%d\n", i);
 	j = printf("%c", 'a');
	printf("	%d\n", j);
  	ft_printf("\n");

	char x;
	x = 'k';
  	i = ft_printf("%c", x);                            //-> "x"
	ft_printf("	%d\n", i);
 	j = printf("%c", x);
	printf("	%d\n", j);
  	ft_printf("\n");

	ft_printf("\n	With some flags\n");
  	i = ft_printf("|%7c|", x);                            //-> "x with field width"
	ft_printf("	%d\n", i);
 	j = printf("|%7c|", x);
	printf("	%d\n", j);
  	ft_printf("\n");

  	i = ft_printf("|%-7c|", x);                            //-> "x with justify flag"
	ft_printf("	%d\n", i);
 	j = printf("|%-7c|", x);
	printf("	%d\n", j);
  	ft_printf("\n");

	ft_printf("Testing NULL character, check with cat -e\n");
	i = ft_printf("%c", 0);
	ft_printf("	%d\n", i);
	j = printf("%c", 0);
	printf("	%d\n", j);
	printf("\n");

	ft_printf("Testing NULL character in a string (hello %%c null char)\n");
	i = ft_printf("hello %c null char", 0);
	ft_printf("	%d\n", i);
	j = printf("hello %c null char", 0);
	printf("	%d\n", j);
	printf("\n");

	ft_printf("\n%y$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%y\n", YELLOW, EOC);
	ft_printf("\n	%yTesting s-conversion:\n\n%y", MAGENTA, EOC);

	i = ft_printf("%s", "Today is a new day");          // -> "Today is a new day"
	ft_printf("	%d\n", i);
	j = printf("%s", "Today is a new day");
	printf("	%d\n", j);
  	ft_printf("\n");

	i = ft_printf("Today is a new %s", "day");          //-> "Today is a new day"
	ft_printf("	%d\n", i);
	j = printf("Today is a new %s", "day");
	printf("	%d\n", j);
  	ft_printf("\n");

	i = ft_printf("%.2s is a new day", "Today");          //-> "Tod is a new day"
	ft_printf("	%d\n", i);
 	j = printf("%.2s is a new day", "Today");
	printf("	%d\n", j);
  	ft_printf("\n");

  	i = ft_printf("Today is a new |%5s|", "day");
	ft_printf("	%d\n", i);
 	j = printf("Today is a new |%5s|", "day");
	printf("	%d\n", j);
  	ft_printf("\n");

	i = ft_printf("%s%s%s%s%s", "Today", "is", "a", "new", "day");
	ft_printf("	%d\n", i);
 	j = printf("%s%s%s%s%s", "Today", "is", "a", "new", "day");
	printf("	%d\n", j);
  	ft_printf("\n");


	i = ft_printf("NULL argument:%s", NULL);
	ft_printf("	%d\n", i);
	j = printf("NULL argument:%s", NULL);
	printf("	%d\n", j);
  	ft_printf("\n");

	ft_printf("\n	%yTesting p-conversion:\n\n%y", MAGENTA, EOC);
	int b = 3;
	int *p;
	p = &b;

  	i = ft_printf("%p", &b);                            //-> "&b"
	ft_printf("	%d\n", i);
 	j = printf("%p", &b);
	printf("	%d\n", j);
  	ft_printf("\n");

  	i = ft_printf("%p", p);                            //-> "p"
	ft_printf("	%d\n", i);
 	j = printf("%p", p);
	printf("	%d\n", j);
  	ft_printf("\n");

  	i = ft_printf("|%30p|", &b);                            //-> "&b + field w"
	ft_printf("	%d\n", i);
 	j = printf("|%30p|", &b);
	printf("	%d\n", j);
  	ft_printf("\n");


	ft_printf("\n%y$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%y\n", YELLOW, EOC);
	ft_printf("\n	%yTesting d-conversion. From now on only the printed output will be shown in the same order as before:\n%y", MAGENTA, EOC);

	ft_printf("%d\n", 1);                           //-> "1"
	printf("%d\n\n", 1);

	ft_printf("%d is one\n", 1);                    //-> "1 is one"
	printf("%d is one\n\n", 1);

	ft_printf("%d\n", -4242);                       //-> "-4242"
	printf("%d\n\n", -4242);

	ft_printf("%d\n", 2147483647);                  //-> "2147483647"
	printf("%d\n\n", 2147483647);

	ft_printf("\n	With plus flag\n");
	ft_printf("%+d\n", 42);                        //-> "+42"
	printf("%+d\n\n", 42);

  	ft_printf("%+d\n", -42);                       //-> "-42"
  	printf("%+d\n\n", -42);
	
	ft_printf("\n	With space flag\n");
	ft_printf("% d\n", 42);
	printf("% d\n\n", 42);

	ft_printf("\n	With both space and plus flags\n");
	ft_printf("% +d\n", 42);
	printf("% +d\n\n", 42);

	ft_printf("\n	With zero flag\n");
	ft_printf("%06d\n", 42);
	printf("%06d\n\n", 42);

	ft_printf("\n	With length flags\n");
	long long int l = 4242424242424242;
	ft_printf("long long:%lld\n", (l * 10000));
	printf("long long:%lld\n\n", (l * 10000));

  	ft_printf("long:%ld\n", 2147483648);                 //-> "2147483648"
  	printf("long:%ld\n\n", 2147483648);
	
	short int a;
	a = 1;
	ft_printf("short:%hd\n", a);
	printf("short:%hd\n\n", a);

	ft_printf("\n	With precision\n");
	ft_printf("|%.5d|\n", 42);
	printf("|%.5d|\n", 42);


	ft_printf("\n	With field width of 8 and 42 as argument\n");	
	ft_printf("|%8d|\n", 42);
	printf("|%8d|\n", 42);	

	ft_printf("\n	With field width of 8 and -42 as argument\n");	
	ft_printf("|%8d|\n", -42);
	printf("|%8d|\n", -42);

	ft_printf("\n	With justify flag, a field width of 8 and -42 as argument\n");
	ft_printf("|%-8d|\n", -42);
	printf("|%-8d|\n", -42);

	ft_printf("\n	With zero flag, a field width of 8 and -42 as argument\n");
	ft_printf("|%08d|\n", -42);
	printf("|%08d|\n", -42);

	ft_printf("\n	With both field width of 15 and a precision of 5 (and 42 as argument)\n");
	ft_printf("|%15.5d|\n", 42);
	printf("|%15.5d|\n\n", 42);

	ft_printf("\n	Combining several d arguments\n");
  	ft_printf("Get ready for numbers! %d %d %d %d %d\n", 1, -24, 875, 42, 0);
  	printf("Get ready for numbers! %d %d %d %d %d\n", 1, -24, 875, 42, 0);

	ft_printf("\n	With zero flag, a field width of 3, a precision of 2 and 1 as argument\n"); 
  	ft_printf("|%03.2d|\n", 1); 
  	printf("|%03.2d|\n\n", 1);
 	
	ft_printf("In both cases a field width of 6. In the first one, the precision is not stated,\nin the second precision is 0. Argument is always 0\n");
  	ft_printf("|%6.d| |%6.0d|\n", 0, 0);
	printf("|%6.d| |%6.0d|\n", 0, 0);

	ft_printf("\n%y$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%y\n", YELLOW, EOC);
	ft_printf("	%yTesting i- and u-conversions\n%y", MAGENTA, EOC);
	
	ft_printf("%i\n", 678);                          //-> "678"
	printf("%i\n\n", 678); 
	
	ft_printf("%u\n", 987);                          //-> "987"
	printf("%u\n\n", 987);     

	ft_printf("u conversion with long flag and a negative argument (-42)\n");
	ft_printf("%lu\n", -42);                       // -> "18446744073709551574"
	printf("%lu\n", -42);

	ft_printf("\n%y$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%y\n", YELLOW, EOC);
	ft_printf("	%yTesting x- and X-conversions\n%y", MAGENTA, EOC);
	
	ft_printf("%X\n", 0);                           //-> "0"
	printf("%X\n\n", 0);   

	ft_printf("|%10x|\n", 42);                        //-> "        2a"
	printf("|%10x|\n\n", 42); 

	ft_printf("|%-10x|\n", 42);                       //-> "2a        "
	printf("|%-10x|\n\n", 42); 

	ft_printf("	With length flags\n");
	ft_printf("long:%lx\n", 4294967296);                 //-> "100000000"
	printf("long:%lx\n\n", 4294967296); 

	ft_printf("a large number as a short:%hx\n", 4294967296);                 //-> "0"
	printf("a large number as a short:%hx\n\n", 4294967296); 

	unsigned long long u = 9223372036854775807;
	ft_printf("long long:%llX\n", u);       //-> "7fffffffffffffff"
	printf("long long:%llX\n\n", u); 

	ft_printf("	With zero flag and a field width\n");
	ft_printf("|%010x|\n", 542);                      //-> "000000021e"
	printf("|%010x|\n\n", 542); 

	ft_printf("	With a precision of 10\n");
	ft_printf("|%.10x|\n", 5427);                      //-> "1533" 
	printf("|%.10x|\n\n", 5427);   

	ft_printf("	With 10 precision and 20 field width\n");
	ft_printf("|%20.10x|\n", 5427);                     //-> " 1533"
	printf("|%20.10x|\n\n", 5427); 

	ft_printf("	With hash flag\n");
	ft_printf("%#X\n", 42);                         //-> "0x2a"
	printf("%#X\n\n", 42); 

	ft_printf("%#x\n", 0);                          //-> "0"
	printf("%#x\n\n", 0); 

	ft_printf("	With hash and zero flags and a field width of 8\n");
	ft_printf("|%#08x|\n", 42);                       //-> "0x00002a"
	printf("|%#08x|\n\n", 42);  

	ft_printf("\n%y$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%y\n", YELLOW, EOC);
	ft_printf("	%yTesting o-conversion\n%y", MAGENTA, EOC);
  	
	ft_printf("42 in octal with zero flag and a field width of 5\n");
	ft_printf("|%05o|\n", 42);                        //-> "00052"
 	printf("|%05o|\n\n", 42); 
  
  	ft_printf("2500 in octal with hash flag and a field width of 6\n");
	ft_printf("|%#6o|\n", 2500);                      //-> " 04704"
	printf("|%#6o|\n\n", 2500);       
  
  	ft_printf("Zero as argument\n");
	ft_printf("%o\n", 0);               //-> "0"
 	printf("%o\n\n", 0);      
 	
	ft_printf("Hash flag and precision, hash flag and precision is zero. Both have 0 as argument\n");
	ft_printf("|%#.o| |%#.0o|\n", 0, 0);    //-> "0 0"
	printf("|%#.o| |%#.0o|\n\n", 0, 0);  
  

	ft_printf("\n%y$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%y\n", YELLOW, EOC);
	ft_printf("	%yTesting f-conversion\n\n%y", MAGENTA, EOC);

	ft_printf("With no flags or precision specified. Argument is 4242.123456789\n");
	ft_printf("%f\n", 4242.123456789);
	printf("%f\n\n", 4242.123456789);
	
	ft_printf("Same argument as before with a precision of 4\n");
	ft_printf("%.4f\n", 4242.123456789);
	printf("%.4f\n\n", 4242.123456789);

	ft_printf("Same as above but with a field width of 15\n");
	ft_printf("|%15.4f|\n", 4242.123456789);
	printf("|%15.4f|\n\n", 4242.123456789);
	
	ft_printf("With 0 precision\n");
	ft_printf("%.0f\n", 4242.123456789);
	printf("%.0f\n\n", 4242.123456789);

	ft_printf("With 0 precision and 42.9999999 as argument\n");
	ft_printf("%.0f\n", 42.9999999);
	printf("%.0f\n\n", 42.9999999);

	ft_printf("With no precision specified and argument is 42.9999999\n");
	ft_printf("%f\n", 42.9999999);
	printf("%f\n\n", 42.9999999);	

	ft_printf("With zero flag, a field width of 15 and no precision specified. Argument is 42.42\n");
	ft_printf("|%015f|\n", 42.42);
	printf("|%015f|\n\n", 42.42);

	ft_printf("With hash flag and a precision of zero. Input is 42.9999999\n");
	ft_printf("%#.0f\n", 42.9999999);
	printf("%#.0f\n\n", 42.9999999);

	ft_printf("With length flag L and argument 123456789123456789.123456789123456789L\n");
	ft_printf("%Lf\n", 123456789123456789.123456789123456789L);
	printf("%Lf\n\n", 123456789123456789.123456789123456789L);

	ft_printf("\n%y$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%y\n", YELLOW, EOC);
	ft_printf("	%yTesting asterisk * -flag\n\n%y", MAGENTA, EOC);

	ft_printf("* as field width of 10, argument is 1234\n");
	ft_printf("|%*d|\n", 10, 1234);
	printf("|%*d|\n\n", 10, 1234);
	
	ft_printf("* as precision of 4, string argument is Shakespeare\n");
	ft_printf("|%.*s|\n", 4, "Shakespeare");
	printf("|%.*s|\n\n", 4, "Shakespeare");

	ft_printf("With field width and precision both as flags. Arguments are (field w=)15, (prec=)4 and (float=)4242.123456789\n");
	ft_printf("|%*.*f|\n", 15, 4, 4242.123456789);
	printf("|%*.*f|\n\n", 15, 4, 4242.123456789);

	ft_printf("\n%y$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%y\n", YELLOW, EOC);
	ft_printf("	%yTesting precision-flag with 0\n\n%y", MAGENTA, EOC);
	
	ft_printf("With .0 precision and argument is 0, format specifier is x %%.x, 0\n");
	ft_printf("|%.x|\n", 0);
	printf("|%.x|\n\n", 0);

	ft_printf("Same as before but with hash-flag %%#.x, 0\n");
	ft_printf("|%#.x|\n", 0);
	printf("|%#.x|\n\n", 0);

	ft_printf("\n%y$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%y\n", YELLOW, EOC);
	ft_printf("	%yTesting my own binary conversion %%b\n\n%y", MAGENTA, EOC);
	ft_printf("With an input of 42\n");
	ft_printf("%b\n\n", 42);
	
	ft_printf("With an input of 532\n");
	ft_printf("%b\n", 532);
//	while(1);				//to test leaks, un-comment  the while loop
	return (0);
}
