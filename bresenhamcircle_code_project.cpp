void fun_handle_brcir() ;
void call_brcir_code()
{
    char chosebrcircode;
    char cbrcrcode ;
	cout<<"\033[33m #include <stdio.h>\033[0m\n"<<endl;
cout<<"\033[33m #include <dos.h>\033[0m\n"<<endl; 
cout<<"\033[33m #include <graphics.h>\033[0m\n"<<endl; 
  
// Function to put pixels 
// at subsequence points 
cout<<"\033[35m void drawCircle(int xc, int yc, int x, int y)\033[0m\n"<<endl; 
cout<<"\033[33m {\033[0m\n"<<endl; 
    cout<<"\033[35m putpixel(xc+x, yc+y, RED);\033[0m\n"<<endl; 
    cout<<"\033[35m putpixel(xc-x, yc+y, RED);\033[0m\n"<<endl; 
    cout<<"\033[35m putpixel(xc+x, yc-y, RED);\033[0m\n"<<endl; 
    cout<<"\033[35m putpixel(xc-x, yc-y, RED);\033[0m\n"<<endl; 
    cout<<"\033[35m putpixel(xc+y, yc+x, RED);\033[0m\n"<<endl; 
    cout<<"\033[35m putpixel(xc-y, yc+x, RED);\033[0m\n"<<endl; 
    cin.get(cbrcrcode) ;
    cin.get(cbrcrcode) ;
    cout<<"\033[35m putpixel(xc+y, yc-x, RED);\033[0m\n"<<endl; 
    cout<<"\033[35m putpixel(xc-y, yc-x, RED);\033[0m\n"<<endl; 
cout<<"\033[33m }\033[0m\n"<<endl; 
  
// Function for circle-generation 
// using Bresenham's algorithm 
cout<<"\033[35m void circleBres(int xc, int yc, int r)\033[0m\n"<<endl; 
cout<<"\033[33m {\033[0m\n"<<endl; 
    cout<<"\033[35m int x = 0, y = r;\033[0m\n"<<endl; 
    cout<<"\033[35m int d = 3 - 2 * r;\033[0m\n"<<endl; 
    cout<<"\033[35m drawCircle(xc, yc, x, y);\033[0m\n"<<endl; 
    cout<<"\033[35m while (y >= x)\033[0m\n"<<endl; 
    cout<<"\033[33m {\033[0m\n"<<endl; 
        // for each pixel we will 
        // draw all eight pixels 
          
       cout<<"\033[35m  x++;\033[0m\n"<<endl; 
  cin.get(cbrcrcode) ;
        // check for decision parameter 
        // and correspondingly  
        // update d, x, y 
        cout<<"\033[35m if (d > 0)\033[0m\n"<<endl; 
        cout<<"\033[33m {\033[0m\n"<<endl; 
           cout<<"\033[35m  y--;\033[0m\n"<<endl;  
            cout<<"\033[35m d = d + 4 * (x - y) + 10;\033[0m\n"<<endl; 
        cout<<"\033[33m }\033[0m\n"<<endl; 
        cout<<"\033[35m else\033[0m\n"<<endl;
            cout<<"\033[35m d = d + 4 * x + 6;\033[0m\n"<<endl; 
        cout<<"\033[35m drawCircle(xc, yc, x, y);\033[0m\n"<<endl; 
        cout<<"\033[35m delay(50);\033[0m\n"<<endl; 
    cout<<"\033[33m }\033[0m\n"<<endl; 
cout<<"\033[33m }\033[0m\n"<<endl; 
  
  cin.get(cbrcrcode) ;
// driver function 
cout<<"\033[35m int main()\033[0m\n"<<endl; 
cout<<"\033[33m {\033[0m\n"<<endl; 
    cout<<"\033[35m int xc = 50, yc = 50, r2 = 30;\033[0m\n"<<endl;
    cout<<"\033[35m int gd = DETECT, gm;\033[0m\n"<<endl; 
    cout<<"\033[35m initgraph(&gd, &gm, \"\");\033[0m\n"<<endl;  // initialize graph 
    cout<<"\033[35m circleBres(xc, yc, r);\033[0m\n"<<endl;    // function call 
    cout<<"\033[35m return 0;\033[0m\n"<<endl; 
cout<<"\033[33m } \033[0m\n"<<endl;

cout << endl << endl << endl << "\033[32m \npress any key to go back \033[0m\n" << endl ;
       cin.get(chosebrcircode) ;
       cin.get(chosebrcircode) ;
       fun_handle_brcir();
}