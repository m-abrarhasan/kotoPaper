// clear
void  clear() {

	for(int i=0; i<1000; i++) {

		std::cout << "\n";
	}
}

// tui
void tui(std::string txtpath) {

	std::ifstream getui(txtpath);

	if (getui.is_open()) {
		std::cout << getui.rdbuf();
	}
}
