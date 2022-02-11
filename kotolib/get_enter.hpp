bool get_enter() {
  std::cout << "\n\n\nPress Enter to Continue........." << std::endl;
  getchar();
  char enter = getchar();

  if (enter == '\n') {
    return true;
  } else {
    return false;
  }
}
