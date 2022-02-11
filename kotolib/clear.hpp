// Clears The Console
void clear() {

#ifdef _WIN32
  system("cls");
#endif

#ifdef linux
  system("clear");
#endif
}
