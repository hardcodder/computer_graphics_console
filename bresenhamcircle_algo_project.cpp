void fun_handle_brcir() ;
void call_bresenham_algo()
{
    char chosebrciralgo;
    char cbrcr ;
    cout<<"\033[34m \n\n\n\nIt is not easy to display a continuous smooth arc on the computer screen as our computer screen is made of pixels organized in matrix form. So, to draw a circle on a computer screen we should always choose the nearest pixels from a printed pixel so as they could form an arc.\033[0m\n"<<endl;
    cout<<"\033[35m  There are two algorithm to do this:\033[0m\n"<<endl;

cout<<"\033[35m \n1)Mid-Point circle drawing algorithm\033[0m\n"<<endl;
cout<<"\033[35m 2)Bresenham’s circle drawing algorithm\033[0m\n"<<endl;
cout<<"\033[34m \n So, for whole 360 degree of circle we will divide it in 8-parts each octant of 45 degree.\033[0m\n";
cout<<"\033[34m  In order to that we will use Bresenham’s Circle Algorithm for calculation of the locations of the pixels in the first octant of 45 degrees.\033[0m\n";
cout<<"\033[34m  It assumes that the circle is centered on the origin.\033[0m\n";
cout<<"\033[34m  So for every pixel (x, y) it calculates, we draw a pixel in each of the 8 octants of the circle \033[0m\n"<<endl;
cin.get(cbrcr) ;
cin.get(cbrcr) ;
cout<<"\033[35m \n\nNow, we will see how to calculate the next pixel location from a previously known pixel location (x, y).\033[0m\n";
cout<<"\033[34m  In Bresenham’s algorithm at any point (x, y) we have two option either to choose the next pixel in the east i.e. (x+1, y) or in the south east i.e. (x+1, y-1).\033[0m\n"<<endl;
cout<<"\033[34m \nAnd this can be decided by using the decision parameter d as:\033[0m\n"<<endl;

cout<<"\033[35m *)If d > 0, then (x+1, y-1) is to be chosen as the next pixel as it will be closer to the arc.\033[0m\n"<<endl;
cout<<"\033[35m *)else (x+1, y) is to be chosen as next pixel.\033[0m\n"<<endl;
cout<<"\033[34m \nNow to draw the circle for a given radius ‘r’ and centre (xc, yc) We will start from (0, r) and move in first quadrant till x=y (i.e. 45 degree). We should start from listed initial condition:\033[0m\n"<<endl;
cin.get(cbrcr) ;
cout<<"\033[33m \nd = 3 - (2 * r)\033[0m\n"<<endl;
cout<<"\033[33m x = 0\033[0m\n"<<endl;
cout<<"\033[33m y = r\033[0m\n"<<endl;
cout<<"\033[34m \nNow for each pixel, we will do the following operations:\033[0m\n"<<endl;

cout<<"\033[35m \n1)Set initial values of (xc, yc) and (x, y)\033[0m\n"<<endl;
cout<<"\033[35m 2)Set decision parameter d to d = 3 – (2 * r).\033[0m\n"<<endl;
cout<<"\033[35m 3)call drawCircle(int xc, int yc, int x, int y) function.\033[0m\n"<<endl;
cout<<"\033[35m 4)Repeat steps 5 to 8 until x < = y\033[0m\n"<<endl;
cout<<"\033[35m 5)Increment value of x.\033[0m\n"<<endl;
cout<<"\033[35m 6)If d < 0, set d = d + (4*x) + 6\033[0m\n"<<endl;
cin.get(cbrcr) ;
cout<<"\033[35m 7)Else, set d = d + 4 * (x – y) + 10 and decrement y by 1.\033[0m\n"<<endl;
cout<<"\033[35m 8)call drawCircle(int xc, int yc, int x, int y) function\033[0m\n"<<endl;
cout<<"\033[33m \ndrawCircle() function:\033[0m\n"<<endl;
cout<<"\033[33m \ndrawCircle(int xc, int yc, int x, int y)\033[0m\n"<<endl;
cout<<"\033[33m {\033[0m\n"<<endl; 
    cout<<"\033[33m putpixel(xc+x, yc+y, RED);\033[0m\n"<<endl; 
    cout<<"\033[33m putpixel(xc-x, yc+y, RED);\033[0m\n"<<endl; 
    cout<<"\033[33m putpixel(xc+x, yc-y, RED);\033[0m\n"<<endl; 
    cout<<"\033[33m putpixel(xc-x, yc-y, RED);\033[0m\n"<<endl; 
    cin.get(cbrcr) ;
    cout<<"\033[33m putpixel(xc+y, yc+x, RED);\033[0m\n"<<endl; 
    cout<<"\033[33m putpixel(xc-y, yc+x, RED);\033[0m\n"<<endl; 
    cout<<"\033[33m putpixel(xc+y, yc-x, RED);\033[0m\n"<<endl; 
    cout<<"\033[33m putpixel(xc-y, yc-x, RED);\033[0m\n"<<endl; 
cout<< "\033[33m }\033[0m\n "<<endl;
	
    cout << endl << endl << endl << "\033[35m press any key to go back\033[0m\n " << endl ;
       cin.get(chosebrciralgo) ;
       cin.get(chosebrciralgo) ;
       fun_handle_brcir();
}