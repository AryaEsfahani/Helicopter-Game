#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfx.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <mmsystem.h>
#include <ctime>
#include<cstdlib>


// by Dr Arasteh
// by Aria Esfahani  aria.esfahani.ee.sharif@gmail.com


using namespace std;
void texture (SDL_Renderer *m_renderer,int  xp,int  yp,string  addressOfImage,int width,int height);
void window_color(SDL_Renderer *Renderer, int R, int G, int B);
void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian );
void ellipse(SDL_Renderer *Renderer, int x, int y, int Radius1, int Radius2, int R, int G, int B, int fill_boolian);
void my_line(SDL_Renderer *Renderer, int x_1, int y_1, int L,double theta,int widht, int R, int G, int B );
void random_rect();
void  obs();
void steam();
SDL_Window *m_window;
SDL_Renderer *m_renderer;
int  x0=0,x1=130,x2=260,x3=390,x4=520,x5=650,x6=780,x7=910,x8=1040,x9=1170,x10=1300,dx=1,dx1=10,xi=1300,xj=800,xk=50,xp=650,hi=360,hp=360,hk=360,hj=360,yi=200,yk=300,yp=150,yj=150;
int H0=80,H1=25,H2=45,H3=10,H4=20,H5=80,H6=60,H7=50,H8=70,H9=10,H10=40;
 int x1o=100;
  int xh=50,yh=350,dy=40;
  int xs=xh;
  int ys=yh;
 bool c1=false;
int main( int argc, char * argv[] )
{
   SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
 // Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,2,2048);
  // Mix_Music *backgroundSound = Mix_LoadMUS("sound.mp3");
   //Mix_Chunk *jumpEffect=Mix_LoadWAV(".wav");
 // bool played=PlaySound(("helicopter.mp3"),NULL,SND_SYNC);
  //mciSendString("open\"sound.mp3\"mp3",NULL,0,NULL);
 // mciSendString("play mp3",NULL,0,NULL);

    int W = 700;//ertefa safhe
    int L = 1300;//tool safhe

    bool clicked=false;
char color,background;
cout<<"please choose color of haelicopter : r is red and b is blue"<<endl;
cout<<"and choose background : f is forest and c is city"<<endl;
cin>>color>>background;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      // be ina kari nadashte bashid
    Uint32 SDL_flags = SDL_INIT_VIDEO | SDL_INIT_TIMER ;
    Uint32 WND_flags = SDL_WINDOW_SHOWN;//| SDL_WINDOW_FULLSCREEN_DESKTOP;//SDL_WINDOW_BORDERLESS ;
//    SDL_Window *m_window;
//    SDL_Renderer *m_renderer;
    SDL_Init( SDL_flags );
    SDL_CreateWindowAndRenderer( L, W, WND_flags, &m_window, &m_renderer );
    //Pass the focus to the drawing window
    SDL_RaiseWindow(m_window);
    //Get screen res olution
    SDL_DisplayMode DM;
    SDL_GetCurrentDisplayMode(0, &DM);
    // be ina kari nadashte bashid



//Mix_PlayMusic(backgroundSound,-1);
//Mix_FreeMusic(backgroundSound);










//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    window_color(m_renderer,0,0,0);

    const char * text ="IN THE NAME OF GOD";

// 1 for lazy.ttf , 2 for arial.ttf , 3 for B Roya.ttf
int font =2;
int x_position=400;
int y_position=300;
int R=255;
int G =2;
int B=3;
int A=0.5;
SDL_Color text_color = { 250, 250, 250};
     textColor(m_renderer,x_position,y_position,text,font ,40,text_color);
     text="WELCOME TO SHARIF EE DEPARTMENT!!";
     font =1;
     x_position=300;
     y_position=500;
     textColor(m_renderer,x_position,y_position,text,font ,40,text_color);
     SDL_RenderPresent(m_renderer);




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



SDL_Event *e=new SDL_Event();
while(e->type!=SDL_KEYDOWN)
    SDL_PollEvent(e);
    window_color(m_renderer,255,255,255);
  text_color = { 0, 0, 0};
    text="you can play forever unless click ESCAPE ";
       x_position=0;
     y_position=300;
       font =2;
     textColor(m_renderer,x_position,y_position,text,font ,69,text_color);
        SDL_RenderPresent(m_renderer);
        window_color(m_renderer,255,255,255);
e->type=0;


while(e->type!=SDL_KEYDOWN)
    SDL_PollEvent(e);
 texture(m_renderer,200,0,"introduction.jpeg",900,700);
        SDL_RenderPresent(m_renderer);
e->type=0;
while(e->type!=SDL_KEYDOWN)
    SDL_PollEvent(e);
     if(e->type==SDL_KEYDOWN)
     {
            switch(e->key.keysym.sym)
            {
                  case  SDLK_RETURN:
           texture(m_renderer,0,0,"nature.jpg",1300,700);
           texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
           SDL_RenderPresent(m_renderer);
           clicked=true;
           e->type=0;

            }
     }


   if(clicked)
    xh+=150;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


random_rect();
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if((color=='r')&&(background=='f'))
{
while(e->type!=SDL_KEYDOWN&&clicked)
{
  SDL_PollEvent(e);

  if(e->type==SDL_KEYDOWN)
  {
      switch(e->key.keysym.sym)
      {
               case SDLK_w:
            texture(m_renderer,0,0,"nature.jpg",1300,700);
            yh-=dy;
  if(yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)
{
      texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
            texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
            steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
                steam();
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }

            obs();
            random_rect();
           texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
               steam();
          texture(m_renderer,xh-30,yh+25,"steam.png",20,20);

              SDL_RenderPresent(m_renderer);
                           e->type=0;


                          break;
               case SDLK_s:
           texture(m_renderer,0,0,"nature.jpg",1300,700);
           obs();
           random_rect();
           yh+=dy;
           if(yh==700-H0||yh==700-H1||yh==700-H2||yh==700-H3||yh==700-H4||yh==700-H5||yh==700-H6||yh==700-H7||yh==700-H8||yh==700-H9||yh==700-H10)
{
      texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
             texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
           texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
               steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
              SDL_RenderPresent(m_renderer);
                e->type=0;
                          break;
                case SDLK_ESCAPE:
                 return 0;


      }

                      SDL_Delay(25);
                      SDL_RenderClear(m_renderer);
                          e->type=0;


  }
  else if(e->type == SDL_MOUSEMOTION)
  {
        SDL_ShowCursor(SDL_DISABLE);
         xh=e->motion.x;
            yh=e->motion.y;
            if((yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)||(yh==700-H0||yh==700-H1||yh==700-H2||yh==700-H3||yh==700-H4||yh==700-H5||yh==700-H6||yh==700-H7||yh==700-H8||yh==700-H9||yh==700-H10))

{
      texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
             texture(m_renderer,0,0,"nature.jpg",1300,700);
           obs();
           random_rect();
           texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
               steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
              SDL_RenderPresent(m_renderer);
                e->type=0;
  }
  else
  {
      if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {

          texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
       texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
            SDL_RenderClear(m_renderer);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
      else if(yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)
{
      texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}

            texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
                steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(25);
            SDL_RenderClear(m_renderer);

  }
}

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
else if((color=='b')&&(background=='c'))
{
while(e->type!=SDL_KEYDOWN&&clicked)
{
  SDL_PollEvent(e);

  if(e->type==SDL_KEYDOWN)
  {
      switch(e->key.keysym.sym)
      {
               case SDLK_w:
            texture(m_renderer,0,0,"city.jpg",1300,700);
            yh-=dy;
            if(yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)
{
      texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
            obs();
            random_rect();
           texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
               steam();
           texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
              SDL_RenderPresent(m_renderer);
                           e->type=0;
                          break;
               case SDLK_s:
           texture(m_renderer,0,0,"city.jpg",1300,700);
           obs();
           random_rect();
           yh+=dy;
           if(yh==700-H0||yh==700-H1||yh==700-H2||yh==700-H3||yh==700-H4||yh==700-H5||yh==700-H6||yh==700-H7||yh==700-H8||yh==700-H9||yh==700-H10)
{
      texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
           texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
               steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
              SDL_RenderPresent(m_renderer);
                e->type=0;
                          break;
                case SDLK_ESCAPE:
                 return 0;


      }

                      SDL_Delay(25);
                      SDL_RenderClear(m_renderer);
                          e->type=0;

  }
  else if(e->type == SDL_MOUSEMOTION)
  {
        SDL_ShowCursor(SDL_DISABLE);
         xh=e->motion.x;
            yh=e->motion.y;
            if((yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)||(yh==700-H0||yh==700-H1||yh==700-H2||yh==700-H3||yh==700-H4||yh==700-H5||yh==700-H6||yh==700-H7||yh==700-H8||yh==700-H9||yh==700-H10))
{
      texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
             texture(m_renderer,0,0,"city.jpg",1300,700);
           obs();
           random_rect();
           texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
               steam();
           texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
              SDL_RenderPresent(m_renderer);
                e->type=0;
  }
  else
  {
       if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
      else if(yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)
{
      texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}

            texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
                steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(25);
            SDL_RenderClear(m_renderer);
  }
}

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
else if((color=='r')&&(background=='c'))
{
while(e->type!=SDL_KEYDOWN&&clicked)
{
  SDL_PollEvent(e);

  if(e->type==SDL_KEYDOWN)
  {
      switch(e->key.keysym.sym)
      {
               case SDLK_w:
            texture(m_renderer,0,0,"city.jpg",1300,700);
            yh-=dy;
            if(yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)
{
      texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
            obs();
            random_rect();
           texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
               steam();
           texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
              SDL_RenderPresent(m_renderer);
                           e->type=0;
                          break;
               case SDLK_s:
           texture(m_renderer,0,0,"city.jpg",1300,700);
           obs();
           random_rect();
           yh+=dy;
           if(yh==700-H0||yh==700-H1||yh==700-H2||yh==700-H3||yh==700-H4||yh==700-H5||yh==700-H6||yh==700-H7||yh==700-H8||yh==700-H9||yh==700-H10)
{
      texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
           texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
           texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
               steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
              SDL_RenderPresent(m_renderer);
                e->type=0;
                          break;
                case SDLK_ESCAPE:
                 return 0;


      }

                      SDL_Delay(25);
                      SDL_RenderClear(m_renderer);
                          e->type=0;

  }
  else if(e->type == SDL_MOUSEMOTION)
  {
        SDL_ShowCursor(SDL_DISABLE);
         xh=e->motion.x;
            yh=e->motion.y;
            if((yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)||(yh==700-H0||yh==700-H1||yh==700-H2||yh==700-H3||yh==700-H4||yh==700-H5||yh==700-H6||yh==700-H7||yh==700-H8||yh==700-H9||yh==700-H10))
{
      texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
           texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
             texture(m_renderer,0,0,"city.jpg",1300,700);
           obs();
           random_rect();
           texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
               steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
              SDL_RenderPresent(m_renderer);
                e->type=0;
  }
  else
  {
       if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
              steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
      else if(yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)
{
      texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
              steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}

            texture(m_renderer,0,0,"city.jpg",1300,700);
            obs();
            random_rect();
            texture(m_renderer,xh,yh,"red_helicopter.png",75,75);
            steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(25);
            SDL_RenderClear(m_renderer);
  }
}

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
else if((color=='b')&&(background=='f'))
{
while(e->type!=SDL_KEYDOWN&&clicked)
{
  SDL_PollEvent(e);

  if(e->type==SDL_KEYDOWN)
  {
      switch(e->key.keysym.sym)
      {
               case SDLK_w:
            texture(m_renderer,0,0,"nature.jpg",1300,700);
            yh-=dy;
            if(yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)
{
      texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
           texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
            obs();
            random_rect();
           texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
               steam();
          texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
              SDL_RenderPresent(m_renderer);
                           e->type=0;
                          break;
               case SDLK_s:
           texture(m_renderer,0,0,"nature.jpg",1300,700);
           obs();
           random_rect();
           yh+=dy;
           if(yh==700-H0||yh==700-H1||yh==700-H2||yh==700-H3||yh==700-H4||yh==700-H5||yh==700-H6||yh==700-H7||yh==700-H8||yh==700-H9||yh==700-H10)
{
      texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
           texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
               steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
              SDL_RenderPresent(m_renderer);
                e->type=0;
                          break;
                case SDLK_ESCAPE:
                 return 0;


      }

                      SDL_Delay(25);
                      SDL_RenderClear(m_renderer);
                          e->type=0;

  }
  else if(e->type == SDL_MOUSEMOTION)
  {
        SDL_ShowCursor(SDL_DISABLE);
         xh=e->motion.x;
            yh=e->motion.y;
            if((yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)||(yh==700-H0||yh==700-H1||yh==700-H2||yh==700-H3||yh==700-H4||yh==700-H5||yh==700-H6||yh==700-H7||yh==700-H8||yh==700-H9||yh==700-H10))
{
      texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
           texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}
else  if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
             texture(m_renderer,0,0,"nature.jpg",1300,700);
           obs();
           random_rect();
           texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
               steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
              SDL_RenderPresent(m_renderer);
                e->type=0;
  }
  else
  {
       if((((xh+75>xi)&&(xh+75<xi+50))&&(yi<=yh)&&(yh<=yi+hi))||(((xh+75>xk)&&(xh+75<xk+50))&&(yk<=yh)&&(yh<=yk+hk))||(((xh+75>xp)&&(xh+75<xp+50))&&(yp<=yh)&&(yh<=yp+hp))||(((xh+75>xj)&&(xh+75<xj+50))&&(yj<=yh)&&(yh<=yj+hj)))
      {
            texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
          window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(250);
    SDL_RenderClear(m_renderer);
      }
      else if(yh==H0||yh==H1||yh==H2||yh==H3||yh==H4||yh==H5||yh==H6||yh==H7||yh==H8||yh==H9||yh==H10)
{
      texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            ellipse(m_renderer,xh+36,yh+36,80,80,255,0,0,0);
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
              texture(m_renderer,xh+36,yh+5,"fire.png",20,20);
                  steam();
           texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(2500);
    window_color(m_renderer,0,0,0);
     text_color = { 255, 0, 0};
    text="GAME   OVER";
     font =1;
     x_position=260;
     y_position=300;
     textColor(m_renderer,x_position,y_position,text,font ,150,text_color);
    SDL_RenderPresent(m_renderer);
    SDL_Delay(2500);
    SDL_RenderClear(m_renderer);
}

            texture(m_renderer,0,0,"nature.jpg",1300,700);
            obs();
            random_rect();
            texture(m_renderer,xh,yh,"blue_helicopter.png",75,75);
                steam();
            texture(m_renderer,xh-30,yh+25,"steam.png",20,20);
            SDL_RenderPresent(m_renderer);
            SDL_Delay(25);
            SDL_RenderClear(m_renderer);
  }
}

}










/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  e->type=0;
while(e->type!=SDL_KEYDOWN)
  SDL_PollEvent(e);




/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //Finalize and free resources
    SDL_DestroyWindow( m_window );
    SDL_DestroyRenderer( m_renderer );
	IMG_Quit();
	SDL_Quit();
    return 0;




}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void my_line(SDL_Renderer *Renderer, int x_1, int y_1, int L, double theta,int widht, int R, int G, int B )

{

    int x_2 = x_1 + L*cos(theta);

    int y_2 = y_1 - L*sin(theta);







    thickLineRGBA(Renderer,x_1,y_1,x_2,y_2,widht,R,G,B,255);

  //  SDL_RenderPresent(Renderer);



}



void rect(SDL_Renderer *Renderer, int x,int y,int w,int h,int R, int G, int B, int fill_boolian )

{

    SDL_Rect rectangle ;

    rectangle.x = x;

    rectangle.y = y;

    rectangle.w = w;

    rectangle.h = h;





    SDL_SetRenderDrawColor(Renderer, R, G, B, 255);

    if (fill_boolian==1)

        SDL_RenderFillRect(Renderer, &rectangle);

    SDL_RenderDrawRect(Renderer, &rectangle);

   // SDL_RenderPresent(Renderer);



}



void ellipse(SDL_Renderer *Renderer, int x, int y, int Radius1, int Radius2, int R, int G, int B, int fill_boolian)

{

    if(fill_boolian==1)
        filledEllipseRGBA(Renderer,x,y,Radius1,Radius2,R,G,B,255);

    if(fill_boolian==0)

        ellipseRGBA(Renderer,x,y,Radius1,Radius2,R,G,B,255);

   // SDL_RenderPresent(Renderer);

}



void window_color(SDL_Renderer *Renderer, int R, int G, int B)

{

    SDL_SetRenderDrawColor( Renderer, R, G, B, 255 );

    SDL_RenderClear( Renderer );



    // Show the window

  //SDL_RenderPresent( Renderer );



}
void texture (SDL_Renderer *m_renderer , int  xp , int  yp , string  addressOfImage , int width , int height)
{
    int n=addressOfImage.length();
    char char_array[n+1];



    strcpy(char_array,addressOfImage.c_str());
    SDL_Texture *myTexture;
    myTexture=IMG_LoadTexture(m_renderer,char_array);
    int wl,hl;
    SDL_QueryTexture(myTexture,NULL,NULL,&wl,&hl);
    SDL_Rect texrl;
    texrl.x=xp;
    texrl.y=yp;
    texrl.w=width;
    texrl.h=height;
    SDL_RenderCopy(m_renderer,myTexture,NULL,&texrl);
    SDL_DestroyTexture(myTexture);
}






void random_rect()
{
    bool c=true;
    int dx=-10;
    while(true&&c)
    {
x0+=dx;
x1+=dx;
x2+=dx;
x3+=dx;
x4+=dx;
x5+=dx;
x6+=dx;
x7+=dx;
x8+=dx;
x9+=dx;
x10+=dx;
        rect(m_renderer,x0,0,130,H0,200,80,155,1);
        rect(m_renderer,x1,0,130,H1,200,80,155,1);
        rect(m_renderer,x2,0,130,H2,200,80,155,1);
        rect(m_renderer,x3,0,130,H3,200,80,155,1);
        rect(m_renderer,x4,0,130,H4,200,80,155,1);
        rect(m_renderer,x5,0,130,H5,200,80,155,1);
         rect(m_renderer,x6,0,130,H6,200,80,155,1);
         rect(m_renderer,x7,0,130,H7,200,80,155,1);
         rect(m_renderer,x8,0,130,H8,200,80,155,1);
          rect(m_renderer,x9,0,130,H9,200,80,155,1);
         rect(m_renderer,x10,0,130,H10,200,80,155,1);
////// ////////     / /////////// / ////////////////////////////////////////////////////////
         rect(m_renderer,x0,700-H0,130,H0,200,80,155,1);
         rect(m_renderer,x1,700-H1,130,H1,200,80,155,1);
         rect(m_renderer,x2,700-H2,130,H2,200,80,155,1);
         rect(m_renderer,x3,700-H3,130,H3,200,80,155,1);
         rect(m_renderer,x4,700-H4,130,H4,200,80,155,1);
         rect(m_renderer,x5,700-H5,130,H5,200,80,155,1);
         rect(m_renderer,x6,700-H6,130,H6,200,80,155,1);
         rect(m_renderer,x7,700-H7,130,H7,200,80,155,1);
         rect(m_renderer,x8,700-H8,130,H8,200,80,155,1);
         rect(m_renderer,x9,700-H9,130,H9,200,80,155,1);
         rect(m_renderer,x10,700-H10,130,H10,200,80,155,1);
         if(x0<-130)
         {
             x0=1300;
         }
           if(x1<-130)
         {
             x1=1300;
         }
           if(x2<-130)
         {
             x2=1300;
         }
           if(x3<-130)
         {
             x3=1300;
         }
           if(x4<-130)
         {
             x4=1300;
         }
           if(x5<-130)
         {
             x5=1300;
         }
           if(x6<-130)
         {
             x6=1300;
         }
           if(x7<-130)
         {
             x7=1300;
         }
           if(x8<-130)
         {
             x8=1300;
         }
           if(x9<-130)
         {
             x9=1300;
         }
           if(x10<-130)
         {
             x10=1300;
         }

        c=false;

    }
}


void obs()
{
srand(time(0));
    bool c=true;
    int dx1=-10;
    while(true&&c)
    {
        xi+=dx1;
        xk+=dx1;
        xp+=dx1;
        xj+=dx1;
        rect(m_renderer,xi,yi,50,hi,0,0,0,1);
         rect(m_renderer,xk,yk,50,hk,0,0,0,1);
          rect(m_renderer,xp,yp,50,hp,0,0,0,1);
          rect(m_renderer,xj,yj,50,hj,0,0,0,1);



        c=false;

    }
    if(xi<-50)
    {
         xi=1350;
    hi=rand()%380;
    }
     if(xj<-50)
    {
         xj=1350;
    }
     if(xp<-50)
    {
         xp=1300;
          hp=rand()%380;
    }
     if(xk<-50)
    {
         xk=1300;
        hk=rand()%380;
    }


}
void steam ()
{
    bool c=true;
     int dx1=-30;
  ys=yh;
    while(true&&c)
     {
         xs+=dx1;
              texture(m_renderer,xs-30,ys+25,"steam.png",20,20);
          c=false;
       SDL_RenderPresent(m_renderer);
     }
     if(xs<-20)
     {
         xs=xh;
   }

}
//void a()
//{
//    bool c=true;
//    for(t=0;t<=100&&c,t++)
//    {
//        dx1+=1;
//        c=false;
//    }
//}

