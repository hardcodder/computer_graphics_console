void fun_handle_dda() ;
class dda
{
    int x1 , y1 , x2 , y2 , dx , dy , length ;
    float x , y ;
    int xshift , yshift ;
    public:
    void getdata() ;
    void apply() ;
    void demo() ;
} ;
void dda::getdata() 
{
    cout << " \033[31m Enter x1 and y1 = \033[0m\n" ;
    cin >> x1 >> y1 ;
    cout << " \033[31m Enter x2 and y2 = \033[0m\n" ;
    cin >> x2 >> y2 ;
}
void dda::apply()
{
    xshift = getmaxx()/2 ;
    yshift = getmaxy()/2 ;
    dx = x2 - x1 ;
    dy = y2 - y1 ;
    x = x1 , y = y1 ;
    length = abs(dx) > abs(dy) ? abs(dx) : abs(dy) ;
    line( xshift , 0, xshift , yshift*2 ) ;
    line(0 ,yshift , xshift*2 , yshift) ;
    while(x < x2)
    {
        putpixel(x + xshift,yshift - y , WHITE) ;
        x += dx*1.0/length ;
        y += dy*1.0/length ;
        delay(40) ;
    }
}
void call_dda_demonstrate()
{
   system("clear") ;
   int gd = DETECT,gm;
   dda d ;
   d.getdata(); 
   initgraph(&gd,&gm,NULL);
   d.apply() ;
   delay(5000);
   closegraph();   
   fun_handle_dda() ;
}