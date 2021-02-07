void fun_handle_dda() ;
void call_dda_code() 
{
	char choseddacode ;
	char cddacode ;
	system("clear") ;
	cout<<"\033[35m #include<iostream>\033[0m\n"<<endl<<"\033[35m #include<graphics.h>\033[0m\n"<<endl; 
	cout<<"\033[32m int abs (int n)\033[0m\n"<<endl<<"\033[32m {\033[0m\n"<<"\033[32m return ( (n>0) ? n : ( n * (-1)));\033[0m\n"<<"\033[32m }\033[0m\n"<<endl;
	cout<<"\033[33m //DDA Function for line generation\033[0m\n"<<endl;
	cout<<"\033[32m void DDA(int X0, int Y0, int X1, int Y1)\033[0m\n"<<endl;
	cout<<"\033[33m // calculate dx & dy \033[0m\n"<<endl;
	cout<<"\033[32m int dx = X1 - X0;\033[0m\n "<<endl<<"\033[32m int dy = Y1 - Y0;\033[0m\n "<<endl;
	cin.get(cddacode) ;
	cin.get(cddacode) ;
	cout<<"\033[33m // calculate steps required for generating pixels \033[0m\n"<<endl;
	cout<<"\033[32m int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);\033[0m\n "<<endl;
	cout<<"\033[33m // calculate increment in x & y for each steps\033[0m\n "<<endl;
	cout<<"\033[32m float Xinc = dx / (float) steps;\033[0m\n"<<endl<<"\033[32m float Yinc = dy / (float) steps; \033[0m\n"<<endl;
	cout<<"\033[33m // Put pixel for each step\033[0m\n "<<endl<<"\033[32m float Y = Y0; \033[0m\n"<<endl;
	cout<<"\033[32m for (int i = 0; i <= steps; i++) \033[0m\n"<<endl<<"\033[32m {\033[0m\n";
	cout<<"\033[32m putpixel (X,Y,RED); // put pixel at (X,Y) \033[0m\n"<<endl;
	cout<<"\033[32m X += Xinc;\033[0m\n"<<endl<<"\033[32m Y += Yinc;\033[0m\n"<<endl;
	cin.get(cddacode) ;
	cout<<"\033[32m delay(100);\033[0m\n"<<endl<<"\033[32m }\033[0m\n";
	cout<<"\033[33m // Driver program\033[0m\n "<<endl<<"\033[32m int main()\033[0m\n"<<endl<<"\033[32m {\033[0m\n"<<"\033[32m int gd = DETECT, gm;\033[0m\n"<<endl;
    cout<<"\033[32m initgraph (&gd, &gm, "");\033[0m\n"<<endl<<"\033[32m int X0 = 2, Y0 = 2, X1 = 14, Y1 = 16; \033[0m\n"<<endl;
    cout<<"\033[32mDDA(2, 2, 14, 16);\033[0m\n"<<endl<<"\033[32m return 0;\033[0m\n"<<endl<<"\033[32m }\033[0m\n" ;// C++ program for implementing 
	cout << endl << endl << endl << "\033[1;4;20;46m press any key to go back\033[0m\n " << endl ;
	cin.get(choseddacode) ;
    cin.get(choseddacode) ;
    fun_handle_dda() ;
}