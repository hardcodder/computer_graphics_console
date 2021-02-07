void fun_handle_brline() ;
void brline_code()
{
    system("clear") ;
	char brlinecode ;
	char cbrl ;
	cout<<"\033[36m#include<iostream>\033[0m\n"<<endl;
cout<<"\033[36m#include<graphics.h>\033[0m\n"<<endl;
 
cout<<"\033[36mvoid drawline(int x0, int y0, int x1, int y1)\033[0m\n"<<endl;
cout<<"\033[32m{\033[0m\n"<<endl;
    cout<<"\033[32mint dx, dy, p, x, y;\033[0m\n"<<endl;
 
	cout<<"\033[32mdx=x1-x0;\033[0m\n"<<endl;
	cout<<"\033[32mdy=y1-y0;\033[0m\n"<<endl;
 
	cout<<"\033[32mx=x0;\033[0m\n"<<endl;
	cout<<"\033[32my=y0;\033[0m\n"<<endl;
 
	cout<<"\033[32mp=2*dy-dx;\033[0m\n"<<endl;
	cin.get(cbrl) ;
	cin.get(cbrl) ;
	cout<<"\033[36mwhile(x<x1)\033[0m\n"<<endl;
	cout<<"\033[32m{\033[0m\n"<<endl;
		cout<<"\033[36mif(p>=0)\033[0m\n"<<endl;
		cout<<"\033[32m{\033[0m\n"<<endl;
			cout<<"\033[36mputpixel(x,y,7);\033[0m\n"<<endl;
			cout<<"\033[32my=y+1;\033[0m\n"<<endl;
			cout<<"\033[32mp=p+2*dy-2*dx;\033[0m\n"<<endl;
		cout<<"\033[32m}\033[0m\n"<<endl;
		cout<<"\033[32m else\033[0m\n"<<endl;
		cout<<"\033[32m{\033[0m\n"<<endl;
		cout<<"\033[36mputpixel(x,y,7);\033[0m\n"<<endl;
		cin.get(cbrl) ;
			cout<<"\033[32mp=p+2*dy;\033[0m\n"<<endl;
		cout<<"\033[32m}\033[0m\n"<<endl;
		cout<<"\033[32mx=x+1;\033[0m\n"<<endl;
	cout<<"\033[32m}\033[0m\n"<<endl;
cout<<"\033[32m}\033[0m\n"<<endl;
 
cout<<"\033[36mint main()\033[0m\n"<<endl;
cout<<"\033[32m{\033[0m\n"<<endl;
	cout<<"\033[32m int gdriver=DETECT, gmode, error, x0, y0, x1, y1;\033[0m\n"<<endl;
	cout<<"\033[32m initgraph(&gdriver, &gmode, \"\");\033[0m\n"<<endl;
 
	cout<<"\033[32m cout<<\"Enter co-ordinates of first point: \";\033[0m\n"<<endl;
	cin.get(cbrl) ;
	cout<<"\033[32m cin>>x0>>y0;\033[0m\n"<<endl;
 
	cout<<"\033[32m cout<<\"Enter co-ordinates of second point: \";\033[0m\n"<<endl;
	cout<<"\033[32m cin>>x1>>y1;\033[0m\n"<<endl;
	cout<<"\033[36m drawline(x0, y0, x1, y1);\033[0m\n"<<endl;
 
	cout<<"\033[32m return 0;\033[0m\n"<<endl;
cout<<"\033[32m }\033[0m\n"<<endl;
	cout << endl << endl << endl << "\033[33m press any key to go back \033[0m\n" << endl ;
	cin.get(brlinecode) ;
    cin.get(brlinecode) ;
    fun_handle_brline() ;
}