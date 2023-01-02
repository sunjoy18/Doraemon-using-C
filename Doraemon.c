#include<conio.h>
#include<graphics.h>

int main()
{
	 int gd=DETECT,gm;
	 initgraph(&gd,&gm,(char*)"");
	
	 //bell
	 setfillstyle(SOLID_FILL, RED);
	 rectangle(250,245,369,255);
	 floodfill (255,250, WHITE);
	 line(268,258,369,255);
	 
	 // ring
	 setfillstyle(SOLID_FILL, YELLOW);
	 circle(305,260,10);
	 floodfill (305,260, WHITE);
	 
	 //face  
	  //inner ellipse	 
	 ellipse(270,175,90,220,33,80);
	 ellipse(350,175,320,90,33,80);
	  //outer ellipse  
	 ellipse(310,155,310,230,80,120);
	 line(270,95,350,95);
	 setfillstyle(SOLID_FILL,WHITE);
	 floodfill(312,155,WHITE);
	 
	 setfillstyle(SOLID_FILL,BLUE); 	 
	 floodfill(250,100,WHITE);
	 
	  //eyes 
	 setcolor(BLACK);
	 setfillstyle(SOLID_FILL,WHITE);
	 ellipse(290,100,0,360,19,30);
	 ellipse(330,100,0,360,19,30);  
	 floodfill(305,100,BLACK);
	 floodfill(345,100,BLACK);	 
	 	 
	 setfillstyle(SOLID_FILL, BLACK);
	 ellipse (295,110,0,360,5,10);
	 ellipse (325,110,0,360,5,10);
	 floodfill (295, 110, BLACK);
	 floodfill(325,110, BLACK); 
	 
	 //nose
	 setfillstyle(SOLID_FILL, RED);
	 circle(309,135,9);
	 floodfill (309,135, BLACK);
	 line(309,145,309,200); 
	
	 // lip  
	 arc(309,153,200,340,50);
	 line(295,149,260,135);
	 line (295,157,260,157);
	 line(295,164,260,174);
	 line (324,149,360, 135);
	 line (324,157,360,157);
	 line (324,164,360,174);
	 
	 	
	 //stomach
	 setcolor(WHITE);	
	 setfillstyle(SOLID_FILL,WHITE);
	 ellipse(310,289,133,45,50,50);
	 floodfill(310,285,WHITE);
	
	 //pocket
	 setcolor(BLACK);
	 setfillstyle(SOLID_FILL,WHITE);
	 arc(310,290,180,360,30);
	 line(280,290,340,290);
	 floodfill(310,300,BLACK);	 
	 
	 //body
	 setcolor(WHITE);
	 line(240,280,240,380);
	 line(384,280,384,380);
	 line(245,385,379,385);
	 arc(245,380,180,270,5);
	 arc(379,380,270,370,5);
	 line(305,410,305,370); //vertical
	 line(300,370,310,370); //horizontal
	
	 //FOOT
	 setfillstyle(SOLID_FILL,WHITE);
	 line(240,410,384,410);  
	 ellipse(245,398,90,270,9,14); //left
	 floodfill(270,400,WHITE);
	 ellipse(379,398,270,90,9,14); //right
	 floodfill(350,400,WHITE);
	 
	 //arms
	  //left
	 setfillstyle(SOLID_FILL,WHITE);
	 circle(225,300,15);
	 floodfill(225,300,WHITE);
	 ellipse(305,305,125,170,95,75);
	  //right
	 circle(399,300,15);
	 ellipse(305,305,10,55,105,75);
	 floodfill(399,300,WHITE);
	
	 //Body color
	 setfillstyle(SOLID_FILL,BLUE);
     floodfill(270,350,WHITE);
	 
	 getch();
	 closegraph();
}
