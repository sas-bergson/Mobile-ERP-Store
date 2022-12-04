#define CYAN 3
#define RED 4
#define GREEN 10
#define WHITE 15
#define YELLOW 14

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

inline void SET_CONSOLE_COLOR(int color)
{
    SetConsoleTextAttribute(hConsole, color);
}
inline void CLEAR_CONSOLE()
{
    system("CLS");
}

void ShowMessage(string message, int color)
{
    SET_CONSOLE_COLOR(color);
    cout << message;
    SET_CONSOLE_COLOR(WHITE);
}

void WaitForKeyPress()
{
    cout << "Press Enter to Continue...";
    getch();
}