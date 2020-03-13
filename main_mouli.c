#include <stdio.h>

int		main()
{
	int i;
	int j;

	ft_printf("\n\n{YELLOW}********************************************************************************************{EOC}\n");
	ft_printf("{CYAN}----------------------------------TESTS FOR FT_PRINTF-------------------------------------------{EOC}");
	ft_printf("\n{YELLOW}*******************************************************************************************{EOC}\n\n");
	ft_printf("All tests will follow the same logic:\n1) results for my ft_printf and		return value\n2) results for normal printf and	return value\n\n\n");
	ft_printf("{MAGENTA}		Basic string tests without arguments or flags{EOC}\n\n");
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

	ft_printf("\n{MAGENTA}Testing %%-mark{EOC}\n");
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

	ft_printf("\n{YELLOW}$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$${EOC}\n");
	ft_printf("\n	{MAGENTA}Testing c-conversion:\n{EOC}");
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

	ft_printf("\n{YELLOW}$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$${EOC}\n");
	ft_printf("\n	{MAGENTA}Testing s-conversion:\n{EOC}");

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

	ft_printf("\n{YELLOW}$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$${EOC}\n");
	ft_printf("\n	{MAGENTA}Testing p-conversion:\n{EOC}");
	int b = 3;
	int *p = b;

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


	ft_printf("\n{YELLOW}$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$${EOC}\n");
	ft_printf("\n	{MAGENTA}Testing d-conversion. From now on only the printed output will be shown in the same order as before:\n{EOC}");

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
	ft_printf("long long:%lld\n", 424242424242424242);
	printf("long long:%lld\n\n", 424242424242424242);

	ft_printf("short:%hd\n", 1);
	printf("short:%hd\n\n", 1);

	ft_printf("\n	With precision\n");
	ft_printf("%.5d\n", 42);
	printf("%.5d\n", 42);

	ft_printf("\n	With both field width and precision\n");
	ft_printf("|%15.5d|\n", 42);
	printf("|%15.5d|\n\n", 42);

	ft_printf("\n{YELLOW}$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$${EOC}\n");
	ft_printf("	{MAGENTA}Testing i- and u-conversions\n{EOC}");
	
	ft_printf("%i\n", 678);                          //-> "678"
	printf("%i\n\n", 678); 
	
	ft_printf("%u\n", 987);                          //-> "987"
	printf("%u\n\n", 987);     


	ft_printf("\yn{YELLOW}$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$${EOC}\n");
	ft_printf("	{MAGENTA}Testing x- and X-conversions\n{EOC}");
	
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

	ft_printf("long long:%llX\n", 9223372036854775807);       //-> "7fffffffffffffff"
	printf("long long:%llX\n\n", 9223372036854775807); 

	ft_printf("	With zero flag and a field width\n");
	ft_printf("|%010x|\n", 542);                      //-> "000000021e"
	printf("|%010x|\n\n", 542); 

	ft_printf("	With a precision of 10\n");
	ft_printf("%.10x\n", 5427);                      //-> "1533" 
	printf("%.10x\n\n", 5427);   

	ft_printf("	With 10 precision and 20 field width\n");
	ft_printf("%20.10x\n", 5427);                     //-> " 1533"
	printf("%20.10x\n\n", 5427); 

	ft_printf("	With hash flag\n");
	ft_printf("%#X\n", 42);                         //-> "0x2a"
	printf("%#X\n\n", 42); 

	ft_printf("%#x\n", 0);                          //-> "0"
	printf("%#x\n\n", 0); 

	ft_printf("	With hash and zero flags and a field width of 8\n");
	ft_printf("%#08x\n", 42);                       //-> "0x00002a"
	printf("%#08x\n\n", 42);  

	ft_printf("\yn{YELLOW}$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$${EOC}\n");
	ft_printf("	{MAGENTA}Testing o-conversion{EOC}");
  ft_printf("%05o\n", 42);                        //-> "00052"
  printf("%05o\n\n", 42); 
  
  ft_printf("%-5o\n", 2500);                      //-> "4704 "
  printf("%-5o\n\n", 2500);  
  
  ft_printf("%#6o\n", 2500);                      //-> " 04704"
  printf("%#6o\n\n", 2500);       
  
  ft_printf("%-#6o\n", 2500);                     //-> "04704 "
  printf("%-#6o\n\n", 2500); 
  
  ft_printf("%-05o\n", 2500);                     //-> "4704 "
  printf("%-05o\n\n", 2500);         
  
   
  ft_printf("@moulitest: %o\n", 0);               //-> "@moulitest: 0"
  printf("@moulitest: %o\n\n", 0);      
 	
   
  ft_printf("@moulitest: %#.o %#.0o\n", 0, 0);    //-> "@moulitest: 0 0"
  printf("@moulitest: %#.o %#.0o\n\n", 0, 0);  
 
   ft_printf("%d\n", 1);                           //-> "1"
  printf("%d\n\n", 1);   
  
  ft_printf("the %d\n", 1);                       //-> "the 1"
  printf("the %d\n\n", 1); 
  
  ft_printf("%d is one\n", 1);                    //-> "1 is one"
  printf("%d is one\n\n", 1);     
  
  ft_printf("%d\n", -1);                          //-> "-1"
  printf("%d\n\n", -1);    
  
  ft_printf("%d\n", 4242);                        //-> "4242"
  printf("%d\n\n", 4242);   
  
  ft_printf("%d\n", -4242);                       //-> "-4242"
  printf("%d\n\n", -4242);           
  
  ft_printf("%d\n", 2147483647);                  //-> "2147483647"
  printf("%d\n\n", 2147483647); 
  
  ft_printf("%d\n", 2147483648);                  //-> "-2147483648"
  printf("%d\n\n", 2147483648);      
  
  ft_printf("%d\n", -2147483648);                 //-> "-2147483648"
  printf("%d\n\n", -2147483648);   
  
  ft_printf("%d\n", -2147483649);                 //-> "2147483647"
  printf("%d\n\n", -2147483649);      
 
  //103.      ft_printf("% d", 42);                        // -> " 42"
// 104.     ft_printf("% d", -42);                       // -> "-42"
// 105.      ft_printf("%+d", 42);                       //  -> "+42"
// 106.      ft_printf("%+d", -42);                      //  -> "-42"
  ft_printf("%+d\n", 0);                          //-> "+0"
  printf("%+d\n\n", 0);  
  
//  ft_printf("%+d\n", 4242424242424242424242);     //-> "-1"//error: integer literal is too large to be represented in any integer type
//  printf("%+d\n\n", 4242424242424242424242); 
  
  ft_printf("% +d\n", 42);                        //-> "+42"
  printf("% +d\n\n", 42);  
  
  ft_printf("% +d\n", -42);                       //-> "-42"
  printf("% +d\n\n", -42);    
  
  ft_printf("%+ d\n", 42);                        //-> "+42"
  printf("%+ d\n\n", 42);    
  
  ft_printf("%+ d\n", -42);                       //-> "-42"
  printf("%+ d\n\n", -42);   
  
  ft_printf("%  +d\n", 42);                       //-> "+42"
  printf("%  +d\n\n", 42);   
  
  ft_printf("%  +d\n", -42);                      //-> "-42"
  printf("%  +d\n\n", -42);    
  
  ft_printf("%+  d\n", 42);                       //-> "+42"
  printf("%+  d\n\n", 42);     
  
  ft_printf("%+  d\n", -42);                      //-> "-42"
  printf("%+  d\n\n", -42);  
  
  ft_printf("% ++d\n", 42);                       //-> "+42"
  printf("% ++d\n\n", 42);    
  
  ft_printf("% ++d\n", -42);                      //-> "-42"
  printf("% ++d\n\n", -42);   
  
  ft_printf("%++ d\n", 42);                       //-> "+42"
  printf("%++ d\n\n", 42);    
  
  ft_printf("%++ d\n", -42);                      //-> "-42"
  printf("%++ d\n\n", -42);             
  
  // 121.      ft_printf("%0d", -42);                     //   -> "-42"
  ft_printf("%00d\n", -42);                       //-> "-42"
  printf("%00d\n\n", -42); 
  
  ft_printf("%5d\n", 42);                         //-> "   42"
  printf("%5d\n\n", 42);   
  
  ft_printf("%05d\n", 42);                        //-> "00042"
  printf("%05d\n\n", 42);     
  
  // 125.      ft_printf("%0+5d", 42);                   //    -> "+0042"
  
  ft_printf("%5d\n", -42);                        //-> "  -42"
  printf("%5d\n\n", -42);     
  
  ft_printf("%05d\n", -42);                       //-> "-0042"
  printf("%05d\n\n", -42);    
  
  // 128.      ft_printf("%0+5d", -42);                  //    -> "-0042"
  ft_printf("%-5d\n", 42);                        ///-> "42   "
  printf("%-5d\n\n", 42);  
  
  ft_printf("%-05d\n", 42);                       //-> "42   "
  printf("%-05d\n\n", 42);   
  
  ft_printf("%-5d\n", -42);                       //-> "-42  "
  printf("%-5d\n\n", -42);             
  
  ft_printf("%-05d\n", -42);                      //-> "-42  "
  printf("%-05d\n\n", -42); 
  
  ft_printf("%hd\n", 32767);                      //-> "32767"
  printf("%hd\n\n", 32767);  
  
//  ft_printf("%hd\n", −32768);                   //-> "0"//non-ASCII characters are not allowed outside of literals and identifiers
//  printf("%hd\n\n", −32768);     
  
  ft_printf("%hd\n", 32768);                     // -> "-32768"
  printf("%hd\n\n", 32768);    
  
  //ft_printf("%hd\n", −32769);                   //-> "0"
  //printf("%hd\n\n", −32769);       
  
  ft_printf("%hhd\n", 127);                      // -> "127"
  printf("%hhd\n\n", 127);    
  
   
  ft_printf("%ld\n", 2147483647);                 //-> "2147483647"
  printf("%ld\n\n", 2147483647);        
  
  
  ft_printf("%ld\n", 2147483648);                 //-> "2147483648"
  printf("%ld\n\n", 2147483648);        
  
    
  ft_printf("%lld\n", 9223372036854775807);       //-> "9223372036854775807"
  printf("%lld\n\n", 9223372036854775807);     
 
   ft_printf("%d\n", 1);                           //-> "1"
  printf("%d\n\n", 1);        
  
  ft_printf("%d %d\n", 1, -2);                    //-> "1 -2"
  printf("%d %d\n\n", 1, -2);         
  
  ft_printf("%d %d %d\n", 1, -2, 33);             //-> "1 -2 33"
  printf("%d %d %d\n\n", 1, -2, 33);        
  
  ft_printf("%d %d %d %d\n", 1, -2, 33, 42);      //-> "1 -2 33 42"
  printf("%d %d %d %d\n\n", 1, -2, 33, 42); 
  
  ft_printf("%d %d %d %d gg!\n", 1, -2, 33, 42, 0); //-> "1 -2 33 42 gg!"
  printf("%d %d %d %d gg!\n\n", 1, -2, 33, 42, 0); 
  
  ft_printf("%4.15d\n", 42);                      //-> "000000000000042"
  printf("%4.15d\n\n", 42);   
  
  // 153.      ft_printf("%.2d", 4242);                    //  -> "4242"
  ft_printf("%.10d\n", 4242);                     //-> "0000004242"
  printf("%.10d\n\n", 4242);    
  
  ft_printf("%10.5d\n", 4242);                   /// -> "     04242"
  printf("%10.5d\n\n", 4242);         
  
  ft_printf("%-10.5d\n", 4242);                   //-> "04242     "
  printf("%-10.5d\n\n", 4242);   
  
  ft_printf("% 10.5d\n", 4242);                   //-> "     04242"
  printf("% 10.5d\n\n", 4242);          
  
  ft_printf("%+10.5d\n", 4242);                   //-> "    +04242"
  printf("%+10.5d\n\n", 4242);     
  
  ft_printf("%-+10.5d\n", 4242);                  //-> "+04242    "
  printf("%-+10.5d\n\n", 4242);    
  
  ft_printf("%03.2d\n", 0);                       ///-> " 00"
  printf("%03.2d\n\n", 0);   
  
  ft_printf("%03.2d\n", 1);                       //-> " 01"
  printf("%03.2d\n\n", 1); 
  
   
  ft_printf("@moulitest: %.10d\n", -42);          //-> "@moulitest: -0000000042"
  printf("@moulitest: %.10d\n\n", -42);    
  
  ft_printf("@moulitest: %.d %.0d\n", 42, 43);    //-> "@moulitest: 42 43"
  printf("@moulitest: %.d %.0d\n\n", 42, 43);  
  
  ft_printf("@moulitest: %.d %.0d\n", 0, 0);      //-> "@moulitest:  "
  printf("@moulitest: %.d %.0d\n\n", 0, 0);  
  
  ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);    //-> "@moulitest:            "
  printf("@moulitest: %5.d %5.0d\n\n", 0, 0); 
  
  ft_printf("%u\n", 0);                           //-> "0"
  printf("%u\n\n", 0);  
  
  ft_printf("%u\n", 1);                           //-> "1"
  printf("%u\n\n", 1);           
  ft_printf("%u\n", 4294967296);                 // -> "0"
  printf("%u\n\n", 4294967296); 
  
  	printf("\n================================================\n");

  ft_printf("%lu\n", 4294967296);                // -> "4294967296"
  printf("%lu\n\n", 4294967296);    
  
  ft_printf("%lu\n", -42);                       // -> "18446744073709551574"
  printf("%lu\n\n", -42);     
  
  ft_printf("%llu\n", 4999999999);               // -> "4999999999"
  printf("%llu\n\n", 4999999999);   
  
  ft_printf("@moulitest: %.5u\n", 42);          //  -> "@moulitest: 00042"
  printf("@moulitest: %.5u\n\n", 42);      

	printf("\n\n////////////////////////////////////////////////////////////////////////\n");


  	printf("\n\n-------------19--u, -1---------\n");

  ft_printf("%u\n", -1);                         // -> "4294967295"   FIX 2
  printf("%u\n\n", -1);

  	printf("\n-------------20---u, 4291967295----------\n");

  ft_printf("%u\n", 4294967295);                 // -> "4294967295"    FIX 2
  printf("%u\n\n", 4294967295);

 	printf("\n\n-------------15----hhd, 128---------\n");

  ft_printf("%hhd\n", 128);                       //-> "-128"     FIX 3
  printf("%hhd\n\n", 128);

  	printf("\n\n--------------16---hhd, -129--------\n");

// 139.      ft_printf("%hhd", -128);                   //   -> "-128"        FIX 3
  ft_printf("%hhd\n", -129);                      //-> "127"
  printf("%hhd\n\n", -129);




  	printf("\n\n===============WAS WRONG:========================\n");

  ft_printf("%5u\n", 4294967295);                 //-> "4294967295"//fxi 1
  printf("%5u\n\n", 4294967295);

  ft_printf("%15u\n", 4294967295);              //  -> "     4294967295"//fix 1
  printf("%15u\n\n", 4294967295);

  ft_printf("%-15u\n", 4294967295);              // -> "4294967295     "//fix 1
  printf("%-15u\n\n", 4294967295);

  ft_printf("%015u\n", 4294967295);              // -> "000004294967295"//fix 1
  printf("%015u\n\n", 4294967295);

    
  ft_printf("% u\n", 4294967295);                // -> "4294967295" 1 empty too much      FIX 2
  printf("% u\n\n", 4294967295);

  ft_printf("%+u\n", 4294967295);                // -> "4294967295" + should nnot show       FIX 2
  printf("%+u\n\n", 4294967295);

  



  printf("\n\n---------------1-------fixed----------\n");

  printf("\n%d\n%d\n\n", ft_printf("\n"), printf("\n"));      




 
  printf("\n\n------------------2-------fixed----------\n");

  printf("\n%d\n%d\n\n", ft_printf("test\\n"), printf("test\\n"));
  




  printf("\n\n-----------------3--fixed-\n");    
  
  printf("\n%d\n%d\n\n", ft_printf("%6%"), printf("%6%"));


  	printf("\n================================================\n");




  		printf("\n=======NEGATIVE and LONG  HEXA and #?=======================\n");

  printf("\n\n------------------4--\n");   
  
  printf("\n%d\n%d\n\n", ft_printf("%x", -42), printf("%x", -42));

  
  printf("\n\n--------------5----- \n");       
  
  printf("\n%d\n%d\n\n", ft_printf("%X", -42), printf("%X", -42));	

  printf("\n\n--------------6---\n");        
  
  ft_printf("%llx\n", 9223372036854775808);       //-> "7fffffffffffffff"
  printf("%llx\n\n", 9223372036854775808);

  printf("\n\n---------------7-- --\n");

  ft_printf("%#-08x\n", 42);                      //-> "0x2a    "
  printf("%#-08x\n\n", 42);

  printf("\n------------8--------------\n");

  ft_printf("%X\n", -42);
  printf("%X\n\n", -42);


  
   printf("\n\n------------HEXA ########-\n");

  ft_printf("|%#-08x|\n", 42);                      //-> "0x2a    "
  printf("|%#-08x|\n\n", 42);

  ft_printf("%#08x\n", 42);                       //-> "0x00002a"
   printf("%#08x\n\n", 42);  

   ft_printf("|%#8x|\n", 42);                        //-> "    0x2a"
  printf("|%#8x|\n\n", 42); 

  ft_printf("%#08x\n", 42);                       //-> "0x00002a"
  printf("%#08x\n\n", 42);  
	



printf("\n#########################################################################################\n");

printf("\n====================OCTALS==========================\n");


	printf("\n\n---------------8--------\n");

  ft_printf("|%o|\n", 40);                          //-> "50"
  printf("|%o|\n\n", 40);

  	printf("\n\n---------------9----------\n");

  ft_printf("|%5o|\n", 41);                         //-> "   51"
  printf("|%5o|\n\n", 41);

  	printf("\n\n---------------10------\n");

  ft_printf("|%-5.10o|\n", 2500);                   //-> "0000004704"
  printf("|%-5.10o|\n\n", 2500);

  	printf("\n\n---------------11-------\n");

  ft_printf("|%-10.5o|\n", 2500);                   //-> "04704     "
  printf("|%-10.5o|\n\n", 2500);

  	printf("\n------------------12--------\n");

  ft_printf("@moulitest: %.o %.0o|\n", 0, 0);      //-> "@moulitest:  "
  printf("@moulitest: %.o %.0o|\n\n", 0, 0);

	printf("\n\n--------------13---------\n");

  ft_printf("@moulitest: %5.o %5.0o|\n", 0, 0);    //-> "@moulitest:            "
  printf("@moulitest: %5.o %5.0o|\n\n", 0, 0);

  printf("\n\n-------------14------------\n");

  ft_printf("@moulitest: %.10o\n", 42);           //-> "@moulitest: 0000000052"
  printf("@moulitest: %.10o\n\n", 42);

  
  

 		printf("\n\n===========SOME INT CASES=============\n");
 
  printf("\n\n----------------17---------\n");

  ft_printf("%lld\n", -9223372036854775808);      //-> "-9223372036854775808"
  printf("%lld\n\n", -9223372036854775808);

  printf("\n\n----------------18-------------\n");

  ft_printf("%03.2d\n", -1);                      //-> "-01"
  printf("%03.2d\n\n", -1);  
   
  printf("\n----------------\n");

  ft_printf("%ld\n", -2147483650);                //-> "-2147483649"
  printf("%ld\n\n", -2147483650);         
   
  

	return (0);
}
