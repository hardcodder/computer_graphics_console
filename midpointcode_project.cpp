void fun_handle_midpoint();
void midpoint_code()
{
    char chosempcode;
    char cmid ;
    system("clear") ;
cout<<"\033[32m #include<iostream>\033[0m\n"<<endl<<"\033[32m using namespace std;\033[0m\n"<<endl;
cout<<"\033[32m // Implementing Mid-Point Circle Drawing Algorithm \033[0m\n"<<endl;
cout<<"\033[32m void midPointCircleDraw(int x_centre, int y_centre, int r)\033[0m\n "<<endl<<"\033[32m {\033[0m\n"<<endl;
cout<<"\033[32m int x = r, y = 0;\033[0m\n"<<endl;
cout<<"\033[32m // Printing the initial point on the axes\033[0m\n"<<endl<<"\033[33m // after translation \033[0m\n"<<endl;
cout<<"\033[32m cout << ( << x + x_centre << ,  << y + y_centre << ) ; \033[0m\n"<<endl;
cout<<"\033[32m // When radius is zero only a single\033[0m\n"<<endl<<"\033[33m // point will be printed \033[0m\n"<<endl;
cin.get(cmid);
cin.get(cmid);
cout<<"\033[32m if (r > 0)\033[0m\n "<<"\033[32m{\033[0m\n"<<endl;
cout<<"\033[32m cout << ( << x + x_centre << ,  << -y + y_centre << ) ; \033[0m\n"<<endl;
cout<<"\033[32m cout << ( << y + x_centre << ,  << x + y_centre << ) ; \033[0m\n"<<endl;
cout<<"\033[32m cout << ( << -y + x_centre << ,  << x + y_centre << ); \033[0m\n"<<endl<<"\033[32m }\033[0m\n";
cout<<"\033[32m // Initialising the value of P"<<endl<<"int P = 1 - r; \033[0m\n"<<endl;
cout<<"\033[32m while (x > y)\033[0m\n "<<"\033[32m {\033[0m\n";
cout<<"\033[32m y++;\033[0m\n "<<endl;
cin.get(cmid);
cout<<"\033[33m // Mid-point is inside or on the perimeter\033[0m\n"<<"\033[32m if (P <= 0)"<<endl<<"\033[32m P = P + 2*y + 1; \033[0m\n"<<endl;
cout<<"\033[33m // Mid-point is outside the perimeter \033[0m\n"<<endl<<"\033[32m else"<<"\033[32m\033[32m {"<<"\033[32m x--; \033[0m\n"<<endl;
cout<<"\033[32m P = P + 2*y - 2*x + 1; \033[0m\n"<<endl<<"\033[32m }\033[0m\n"<<"\033[33m // All the perimeter points have already been printed\033[0m\n "<<endl;
cout<<"\033[32m if (x < y)\033[32m\n"<<" break;\033[0m\n "<<endl;
cout<<"\033[33m // Printing the generated point and its reflection\033[0m\n "<<endl<<"\033[33m // in the other octants after translation \033[0m\n"<<endl;
cin.get(cmid);
cout<<"\033[32m cout << ( << x + x_centre << ,  << y + y_centre << ) ;\033[0m\n "<<endl;
cout<<"\033[32m cout << ( << -x + x_centre << ,  << y + y_centre << ) ; \033[0m\n"<<endl;
cout<<"\033[32m cout << (<< x + x_centre << ,  << -y + y_centre << ) ;\033[0m\n "<<endl;
cout<<"\033[32m cout << ( << -x + x_centre << ,  << -y + y_centre << );\033[0m\n "<<endl;
cout<<"\033[33m // If the generated point is on the line x = y then \033[0m\n"<<endl;
cout<<"\033[33m // the perimeter points have already been printed\033[0m\n"<<endl;
cout<<"\033[32m if (x != y) \033[0m\n"<<endl;
cout<<"\033[32m {"<<endl<<"cout << ( << y + x_centre << ,  << x + y_centre << ) ; \033[0m\n"<<endl;
cout<<"\033[32m cout << ( << -y + x_centre << ,  << x + y_centre << ) ; \033[0m\n"<<endl;
cout<<"\033[32m cout << ( << y + x_centre << ,  << -x + y_centre << ) ;\033[0m\n"<<endl;
cout<<"\033[32m cout << ( << -y + x_centre << ,  << -x + y_centre << ); \033[0m\n"<<endl;
cin.get(cmid);
cout<<"\033[32m }\033[0m\n"<<endl<<"\033[32m }\033[0m\n"<<endl<<"\033[32m }\033[0m\n"<<endl;
cout<<"\033[33m // Driver code\033[0m\n "<<endl<<"\033[32m int main()\033[0m\n "<<endl<<"\033[32m {\033[0m\n"<<endl;
cout<<"\033[33m // To draw a circle of radius 3 centred at (0, 0)\033[0m\n"<<endl;
cout<<"\033[32m midPointCircleDraw(0, 0, 3); \033[0m\n"<<endl;
cout<<"\033[32m return 0;\033[0m\n"<<endl<<"\033[32m }\033[0m\n";

cout << endl << "\033[35mpress any key to go back \033[0m\n" << endl ;
	cin.get(chosempcode) ;
    cin.get(chosempcode) ;
    fun_handle_midpoint() ;
}

	 
			
		
		
		
		
		
		
		
		
		
		
		
	