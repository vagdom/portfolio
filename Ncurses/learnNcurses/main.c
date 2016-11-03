//Programmer : Vagner Domingues
//Date       :
//Contact    : vagdom@hotmail.com

#include <ncurses.h>

int main void()
{

    initscr();
    
    addstr("Hello World!");
    
    refresh();
    
    getch();
    
    endwin();
    
    return 0;




}
