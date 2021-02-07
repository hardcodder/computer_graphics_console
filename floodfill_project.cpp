void fun_handle_ffill() ;
class flood_fill
{
    int bclr , fclr ;
    public:
    void apply(int , int) ;
    void setdata() ;
} ;
void flood_fill::setdata()
{
    cout << "\033[36m Enter the background colour = \033[0m \n" ;
    cin >> bclr ;
    cout << "\033[36m Enter the fill colour = \033[0m \n" ;
    cin >> fclr ;
}
void flood_fill::apply(int x , int y)
{
    int clr = getpixel(x , y) ;
    if(clr == bclr)
    {
        putpixel(x , y , fclr) ;
        this->apply(x , y + 1 ) ;
        this->apply(x , y - 1 ) ;
        this->apply(x + 1 , y ) ;
        this->apply(x - 1 , y ) ;
    }
}
void floodfill_demo()
{
    system("clear") ;
    int gd = DETECT , gm;
    flood_fill f1;
    f1.setdata() ;
    initgraph(&gd , & gm , NULL) ;
    circle(200 , 200 , 150) ;
    f1.apply(200 ,200) ;
    delay(2000) ;
    closegraph() ;
    fun_handle_ffill() ;
}