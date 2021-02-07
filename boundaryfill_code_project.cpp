void fun_handle_bfill() ;
void bfill_code()
{
	char bfillcode ;
	system("clear");
	char bfill ;
	cout<<"\033[1;35m #include<iostream.h> \033[0m"<<endl;
cout<<"\033[1;35m #include<graphics.h> \033[0m"<<endl;
cout<<"\033[1;35m #include<dos.h> \033[0m"<<endl;
 
cout<<"\033[1;35m \nvoid boundaryfill(int x,int y,int f_color,int b_color) \033[0m"<<endl;
cout<<"\033[36m { \033[0m"<<endl;
	cout<<"\033[1;35m  if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color) \033[0m"<<endl;
	cout<<"\033[36m { \033[0m"<<endl;
		cout<<"\033[1;35m  putpixel(x,y,f_color);"<<endl;
		cout<<"\033[34m boundaryfill(x+1,y,f_color,b_color); \033[0m"<<endl;  
		cout<<"\033[34m boundaryfill(x,y+1,f_color,b_color); \033[0m"<<endl;  
		cout<<"\033[34m boundaryfill(x-1,y,f_color,b_color); \033[0m"<<endl;  
		cout<<"\033[34m boundaryfill(x,y-1,f_color,b_color); \033[0m"<<endl;  
	cout<<"\033[36m } \033[0m"<<endl;
cout<<"\033[36m } \033[0m"<<endl;
//getpixel(x,y) gives the color of specified pixel 
 cin.get(bfill) ;
 cin.get(bfill) ;
cout<<"\033[1;35m \nint main() \033[0m"<<endl;
cout<<"\033[36m { \033[0m"<<endl;
	cout<<"\033[36m int gm,gd=DETECT,radius; \033[0m"<<endl;
	cout<<"\033[36m int x,y; \033[0m"<<endl;
	
	cout<<"\033[36m cout<<\"Enter x and y positions for circle\"; \033[0m"<<endl;
	cout<<"\033[36m cin>>x>>y; \033[0m"<<endl;
	cout<<"\033[36m cout<<\"Enter radius of circle\"; \033[0m"<<endl;
	cout<<"\033[36m cin>>radius; \033[0m"<<endl;
	
	cout<<"\ninitgraph(&gd,&gm,\"\"); \033[0m"<<endl;
	cout<<"\033[1;35m circle(x,y,radius); \033[0m"<<endl;
	cout<<"\033[1;35m boundaryfill(x,y,4,15); \033[0m"<<endl;
	cout<<"\033[36m  delay(5000); \033[0m"<<endl;
	cout<<"\033[36m  closegraph(); \033[0m"<<endl;
	
	cout<<"\033[36m  return 0; \033[0m"<<endl;
cout<<"\033[36m } \033[0m"<<endl;
	cout << endl << endl << endl << "\033[35m  press any key to go back  \033[0m" << endl ;
	cin.get(bfillcode) ;
    cin.get(bfillcode) ;
    fun_handle_bfill() ;
}