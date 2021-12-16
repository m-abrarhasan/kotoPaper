// clear
void clear() {

	//system("cls");
	system("clear");
}

// tui
void tui(std::string txtpath) {

	std::ifstream getui(txtpath);

	if (getui.is_open()) {
		std::cout << getui.rdbuf();
	}
}

// user input
int get_option(std::string txtpath) {

	clear(); //clear screen

	int PrintSize;
	tui(txtpath);
	PringSize = getchar();

	clear(); //clear screen
	return PrintSize;
}
