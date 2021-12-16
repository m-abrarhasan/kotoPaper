#include <iostream>
#include <fstream>
#include "headers/func.h" 

int main ()
{
    char    enter = 0 ;
    double  rate, ordreSize ;

	int PrintSize = get_option("tui/print_size.txt");
	std::cout << PrintSize << std::endl;

	int SheetSize = get_option("tui/sheet_size.txt");
	std::cout << SheetSize << std::endl;

//    do
//    {
//        
//        
//        
//        
//        
//        
//        
//        
//        
//        
//	std::cout<< "Press ENTER to continue" << std::endl;
//        enter=getchar();
//
//	clear(); //clear screen
//        
//    } while (enter == '\n');
    
    return 0;
}
