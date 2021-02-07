void fun_handle_brline() ;
class bresenhem_line
{
    int x1 , y1 , x2 , y2 , dx , dy , p;
    int xshift , yshift ;
    float x , y ;
    public:
    void getdata() ;
    void apply() ;
    void demo() ;
};
void bresenhem_line ::getdata() 
{
    cout << "\033[36m Enter x1 and y1 = \033[0m\n" ;
    cin >> x1 >> y1 ;
    cout << "\033[36m Enter x2 and y2 = \033[0m\n" ;
    cin >> x2 >> y2 ;
    dx = x2 - x1 ;
    dy = y2 - y1 ;
}
void bresenhem_line ::apply()
{
    xshift = getmaxx()/2 ;
    yshift = getmaxy()/2 ;
    p = 2*dx - dy ;
    x = x1 , y = y1 ;
    line( xshift , 0, xshift , yshift*2 ) ;
    line(0 ,yshift , xshift*2 , yshift) ;

    while(x < x2)
    {
        putpixel(x + xshift , yshift - y , WHITE ) ;
        delay(50) ;
        if(p >= 0)
        {
            x++ ;
            y++ ;
            p = p + 2*dy - 2*dx ;
        }
        else
        {
            x++ ;
            p = p + 2*dy ;
        }   
    }
}

void brline_demo() 
{
    system("clear") ;
    int gd = DETECT , gm ;
    bresenhem_line bl ;
    bl.getdata() ;
    initgraph(&gd , &gm , NULL) ; 
    bl.apply() ;
    delay(2000) ;
    closegraph() ;
    fun_handle_brline() ;
}