void fun_call_theory_handler();
void vectroescan()
{
cout<<"* Vector scan display directly traces out only the desired lines on CRT."<<endl;
cout<<"* If we want line between point p1 & p2 then we directly drive the beam deflection circuitry which focus beam directly from point p1 to p2."<<endl;
cout<<"* If we do not want to display line from p1 to p2 and just move then we can blank the beam as we move it."<<endl;
cout<<"* To move the beam across the CRT, the information about both magnitude and direction is required."<<endl;
cout<<"* This information is generated with the help of vector graphics generator."<<endl;
cout<<"* Architecture of vector display consists of display controller, CPU, display buffer memory and CRT."<<endl;
cout<<"* Display controller is connected as an I/O peripheral to the CPU."<<endl;
cout<<"* Display buffer stores computer produced display list or display program."<<endl;
cout<<"* The Program contains point & line plotting commands with end point co-ordinates as well as character plotting commands."<<endl;
cout<<"* Display controller interprets command and sends digital and point co-ordinates to a vector generator."<<endl;
cout<<"* Vector generator then converts the digital co-ordinate value to analog voltages for beam deflection circuits that displace an electron beam which points on the CRT’s screen."<<endl;
cout<<"* In this technique beam is deflected from end point to end point hence this techniques is also called random scan."<<endl;
cout<<"* We know as beam strikes phosphors coated screen it emits light but that light decays after few milliseconds"<<endl;
cout<<"* Therefore it is necessary to repeat through the display list to refresh the screen at least 30 times per second to avoid flicker."<<endl;
cout<<"* As display buffer is used to store display list and used to refreshing, it is also called refresh buffer."<<endl;
}
