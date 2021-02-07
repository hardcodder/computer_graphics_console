void fun_call_theory_handler();
void vectroescan()
{
char chosevs ;
char cvs;
system("clear") ;
cout<<"\033[32m * Vector scan display directly traces out only the desired lines on CRT.\033[0m\n"<<endl;
cout<<"\033[32m * If we want line between point p1 & p2 then we directly drive the beam deflection\n  circuitry which focus beam directly from point p1 to p2. \033[0m\n"<<endl;
cout<<"\033[32m * If we do not want to display line from p1 to p2 and just move then we can blank\n  the beam as we move it. \033[0m\n"<<endl;
cout<<"\033[32m * To move the beam across the CRT, the information about both magnitude and direction is required.\033[0m\n "<<endl;
cout<<"\033[32m * This information is generated with the help of vector graphics generator.\033[0m\n "<<endl;
cout<<"\033[32m * Architecture of vector display consists of:-/n  1. display controller\n  2. CPU\n  3. display buffer memory\n  4. CRT. \033[0m\n"<<endl;
cin.get(cvs) ;
cin.get(cvs) ;
cout<<"\033[32m * Display controller is connected as an I/O peripheral to the CPU. \033[0m\n"<<endl;
cout<<"\033[32m * Display buffer stores computer produced display list or display program. \033[0m\n"<<endl;
cout<<"\033[32m * The Program contains point & line plotting commands with end point co-ordinates\n  as well as character plotting commands. \033[0m\n"<<endl;
cout<<"\033[32m * Display controller interprets command and sends digital and point co-ordinates\n  to a vector generator. \033[0m\n"<<endl;
cout<<"\033[32m * Vector generator then converts the digital co-ordinate value to analog voltages\n  for beam deflection circuits that displace an electron beam which points on the CRT’s screen. \033[0m\n"<<endl;
cout<<"\033[32m * In this technique beam is deflected from end point to end point hence this techniques\n  is also called random scan. \033[0m\n"<<endl;
cin.get(cvs) ;
cout<<"\033[32m * We know as beam strikes phosphors coated screen it emits light but that light decays\n  after few milliseconds.\033[0m\n "<<endl;
cout<<"\033[32m * Therefore it is necessary to repeat through the display list to refresh the screen at\n  least 30 times per second to avoid flicker. \033[0m\n"<<endl;
cout<<"\033[32m * As display buffer is used to store display list and used to refreshing, it is also called\n  refresh buffer. \033[0m\n"<<endl;
cout << endl << endl << " \033[95mPress any key to go back \033[0m\n" << endl ;
cin.get(chosevs) ;
cin.get(chosevs) ;
fun_call_theory_handler() ;
}
