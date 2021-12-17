#ifdef _WIN32
#endif 
#ifdef linux
#endif 

//////////////////////////////////////////
// clear
void clear() {

#ifdef _WIN32
	system("cls");
#endif 

#ifdef linux
	system("clear");
#endif 
}

//////////////////////////////////////////
// tui
void tui(std::string txtpath) {

  std::ifstream getui(txtpath);

  if (getui.is_open()) {
    std::cout << getui.rdbuf();
  }
}

//////////////////////////////////////////
// user input
int get_option(std::string txtpath) {

  clear(); // clear screen

  int PrintSize;
  tui(txtpath);
  std::cin >> PrintSize;

  clear(); // clear screen
  return PrintSize;
}

//////////////////////////////////////////
