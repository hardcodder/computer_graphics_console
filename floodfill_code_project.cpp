void fun_handle_ffill() ; 
void ffill_code()
{
	char ffillcode ;
	char cfill ;
	system("clear") ;
	cout<<"\033[1;35m #include<iostream.h>\033[0m"<<endl;
cout<<"\033[1;35m #include<graphics.h>\033[0m"<<endl;
cout<<"\033[1;35m #include<dos.h>\033[0m"<<endl;
 
cout<<"\033[1;35m \nvoid floodFill(int x,int y,int oldcolor,int newcolor)\033[0m"<<endl;
cout<<"\033[36m {\033[0m"<<endl;
	cout<<"\033[1;35m if(getpixel(x,y) == oldcolor)\033[0m"<<endl;
	cout<<"\033[36m {\033[0m"<<endl;
		cout<<"\033[1;35m putpixel(x,y,newcolor);\033[0m"<<endl;
		cout<<"\033[34m floodFill(x+1,y,oldcolor,newcolor);\033[0m"<<endl;
		cout<<"\033[34m floodFill(x,y+1,oldcolor,newcolor);\033[0m"<<endl;
		cout<<"\033[34m floodFill(x-1,y,oldcolor,newcolor);\033[0m"<<endl;
		cout<<"\033[34m floodFill(x,y-1,oldcolor,newcolor);\033[0m"<<endl; 
	cout<<"\033[36m }\033[0m"<<endl;
cout<<"\033[36m }\033[0m "<<endl;
//getpixel(x,y) gives the color of specified pixel 
 cin.get(cfill) ;
cin.get(cfill) ;
cout<<"\033[1;35m \nint main()\033[0m "<<endl;
cout<<"\033[36m {\033[0m "<<endl;
	cout<<"\033[36m int gm,gd=DETECT,radius;\033[0m "<<endl;
	cout<<"\033[36m int x,y;\033[0m "<<endl;
	
	cout<<"\033[36m cout<<\"Enter x and y positions for circle\";\033[0m "<<endl;
	cout<<"\033[36m cin>>x>>y;\033[0m "<<endl;
	cout<<"\033[36m cout<<\"Enter radius of circle\";\033[0m "<<endl;
	cout<<"\033[36m cin>>radius;\033[0m "<<endl;
	
	cout<<"\033[36m \ninitgraph(&gd,&gm,\"\");\033[0m "<<endl;
	cout<<"\033[1;35m circle(x,y,radius);\033[0m "<<endl;
	cout<<"\033[1;35m floodFill(x,y,0,15);\033[0m "<<endl;
	cout<<"\033[36m delay(5000);\033[0m "<<endl;
	cout<<"\033[36m closegraph();\033[0m "<<endl;
	
	cout<<"\033[36m return 0;\033[0m "<<endl;
cout<<"\033[36m }\033[0m "<<endl;
	cout << endl << endl << endl << "\033[35m press any key to go back \033[0m " << endl ;
       cin.get(ffillcode) ;
       cin.get(ffillcode) ;
       fun_handle_ffill() ;
}