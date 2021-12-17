#include <iostream>
#include <fstream>
#include "headers/func.h" 

int main ()
{
    char    enter = 0;
    double  rate, ordreSize;

    do
    {
        
	const int PrintSize = get_option("tui/print_size.txt");

	const int SheetSize = get_option("tui/sheet_size.txt");

	if (PrintSize == 1 && SheetSize ==1){
		std::cout << "ONE";
	} else {
		std::cout << "NOT ONE";
	}
        

    } while (get_enter());
  
  return 0;
}
