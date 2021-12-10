#include <limits>
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    char    enter = 0 ;
    double  rate, ordreSize ;

    do
    {
        int    PrintSize, sheetSize ;
        //system ("cls");
        system ("clear");     //for linux
        
        ifstream print_size("print_size.txt");
        if (print_size.is_open()){
            cout << print_size.rdbuf();
        }
        
        cin >> PrintSize;
        cout << PrintSize;
        cout << ";alkdflfj";
         
        
        
        
        
        
        
        
        
        
        
        
        
        cout<< "Press ENTER to continue" <<endl;
        enter=getchar();
        //system ("cls");
        system ("clear");     //for linux
        
    } while (enter == '\n');
    



       
    return 0;
}
