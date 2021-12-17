#include <iostream>
#include <fstream>
#include "headers/func.h" 

int main ()
{
    char    enter = 0;
    double  rate, ordreSize;

    do
    {
        
	int PrintSize = get_option("tui/print_size.txt");

	int SheetSize = get_option("tui/sheet_size.txt");
        


        std::cout<< "Press ENTER to continue" << std::endl;
        enter = getchar();

    } while (enter == '\n');
  
  return 0;
}
