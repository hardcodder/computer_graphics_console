#include"ddahandler_project.cpp"
#include"bresenhamcircle_handler_project.cpp"
#include"midpointhandler_project.cpp"
#include"floodfillhandler_project.cpp"
#include"boundaryfillhandler_project.cpp"
#include"bresenhamlinehandler_project.cpp"
void fun_call_algo()
{
    int chosealgo , conalgo = 0;
    while(!conalgo)
    {
    system("clear") ;
    cout << "\033[1;4;34m So , You decided to learn Algorithms \033[0m\n" << endl ;
    cout << "\033[32m We have a list of algorithms , you can choose any of them \033[0m\n" <<endl ;
    cout << "\033[36m 1. DDA\033[0m\n" <<endl ;
    cout << "\033[36m 2. Bresenham line drawing algorithm \033[0m\n" << endl ;
    cout << "\033[36m 3. Bresenham circle \033[0m\n" << endl ;
    cout << "\033[36m 4. Mid point circle algorithm \033[0m\n" << endl ;
    cout << "\033[36m 5. Flood fill\033[0m\n" << endl ;
    cout << "\033[36m 6. Boundary fill\033[0m\n"<< endl ;
    cout << "\033[36m 7. Go Back \033[0m\n" << endl ;
    cout << "\033[4;32m Enter the number shown in front of the one you want = \033[0m\n";
    cin >> chosealgo ;
    cout << "\033[1;4;34m Enter 1 to confirm and 0 to again choose = \033[0m\n" << endl ;
    cin >> conalgo ;
    system("clear") ;
    }   
    if(chosealgo == 1)
    {
        fun_handle_dda() ;
    }
    else if(chosealgo == 2)
    {
        fun_handle_brline() ;
    }
    else if(chosealgo == 3)
    {
        fun_handle_brcir() ;
    }
    else if(chosealgo == 4)
    {
        fun_handle_midpoint();
    }
    else if(chosealgo == 5)
    {
        fun_handle_ffill() ;
    }
    else if(chosealgo == 6)
    {
        fun_handle_bfill() ;
    }
    else if(chosealgo == 7)
    {
    }
}
