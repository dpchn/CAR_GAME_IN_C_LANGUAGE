#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main(void)
{
   int driver= DETECT, gmode,x1=10,y1=-200,x2=200,y2=200;
   char ch;
   initgraph(&driver,&gmode, "C:\\TC\\BGI");
   while(1)
   {
  // clrscr();
// cleardevice();
  rectangle(0,0,639,479);


   ch=getch();
   if(ch==27)
   break;
     else if(ch==65)
     {
     sound(500);
     delay(10);
     nosound();
       x1=x1+10;
       car1(x1);
       if(x1>440)
       {
       x1=x1+200;
	if(y1==-200)
	 {
	  y1=y1+200;
	  car2(y1);
	 }
	 else
	  {
	   y1=y1+10;
	   car2(y1);
	   if(y1>300)
	   {
	    y1=y1+200;
	    if(x2==200)
	    {
	    x2=x2-200;
	    car3(x2);
	    }
	    else
	    {
	     x2=x2-10;
	     car3(x2);
	     if(x2<-460)
	     {
	      x2=x2-200;
	      car3(x2);
	      if(y2==200)
	      {
	      y2=y2-200;
	      car4(y2);
	      }
	      else
	      {
	       y2-=10;
	       car4(y2);
	       if(y2==-300)
	       y2+=10;
	       car4(y2);
	      }

	     }
	    }
	   }
	  }
       }
     }
     else if(ch==66)
	  {
	   x1=x1-10;
	   y1=y1-10;
   }      }
}

car1(int x1)
{
  cleardevice();

  line(x1+60,10,x1+140,10);
  line(x1+140,10,x1+160,30);
  line(x1+160,30,x1+190,40);
  line(x1+190,40,x1+190,65);
  line(x1+190,65,x1+145,65);
  line(x1+145,65,x1+138,52);
  line(x1+138,52,x1+123,52);
  line(x1+123,52,x1+115,65);                     //wheel
  circle(x1+130,65,10);
  line(x1+115,65,x1+85,65);
  line(x1+85,65,x1+78,52);
  line(x1+78,52,x1+63,52);
  line(x1+63,52,x1+55,65);
  circle(x1+70,65,10);                 //wheel
  line(x1+55,65,x1+30,65);
  rectangle(x1+20,50,x1+30,65); //silencer
  line(x1+30,65,x1+30,30);
  line(x1+30,30,x1+60,10);
    setcolor(3);
}

car2(int y1)
{
cleardevice();
  line(570,y1+45,570,y1+125);     //1
  line(570,y1+125,590,y1+145);    //2
  line(590,y1+145,600,y1+175);    //3
  line(600,y1+175,625,y1+175);    //4
  line(625,y1+175,625,y1+130);    //5
  circle(625,y1+115,10);        //wheel
  line(625,y1+130,612,y1+125);   //6
  line(612,y1+125,612,y1+110);   //7
  line(612,y1+110,625,y1+100);    //8
  line(625,y1+100,625,y1+70);     //9
  circle(625,y1+55,10);    //wheel
  line(625,y1+70,612,y1+65);   //10
  line(612,y1+65,612,y1+50);   //11
  line(612,y1+50,625,y1+40);   //12
  line(625,y1+40,625,y1+15);   //13
  line(625,y1+15,590,y1+15);   //14
  rectangle(610,y1+5,625,y1+15); //silencer
  line(590,y1+15,570,y1+45);       //15
}

car3(int x2)
{
cleardevice();
   line(594+x2,410,514+x2,410);  //1
   line(514+x2,410,494+x2,430);   //2
   line(494+x2,430,464+x2,440);//3
   line(464+x2,440,464+x2,465); //4
   line(464+x2,465,509+x2,465); //5
   line(509+x2,465,517+x2,452); //6
   line(517+x2,452,532+x2,452); //7
   line(532+x2,452,540+x2,465);//8
   line(540+x2,465,570+x2,465); //9
   line(570+x2,465,578+x2,452); //10
   line(578+x2,452,593+x2,452); //11
   line(593+x2,452,601+x2,465);  //12
   line(601+x2,465,626+x2,465); //13
   line(626+x2,465,626+x2,435);  //14
   line(626+x2,435,594+x2,410);   //15
   circle(524+x2,465,10); //w1
   circle(585+x2,465,10); //w2
   rectangle(626+x2,450,636+x2,465);
}

car4(int y2)
{
cleardevice();
    line(69,435+y2,69,350+y2);//1
   line(69,350+y2,49,320+y2);//2
   line(49,320+y2,39,290+y2);//3
   line(39,290+y2,14,290+y2);//4
   line(14,290+y2,14,335+y2);//5
   line(14,335+y2,27,340+y2);//6
   line(27,340+y2,27,355+y2);//7
   line(27,355+y2,14,365+y2);//8
   line(14,365+y2,14,395+y2);//9
   line(14,395+y2,27,400+y2);//10
   line(27,400+y2,27,415+y2);//11
   line(27,415+y2,14,425+y2);//12
   line(14,425+y2,14,450+y2);//13
   line(14,450+y2,49,450+y2);//14
   line(49,450+y2,69,435+y2);//15
   circle(14,350+y2,10);//w1
   circle(14,410+y2,10); //w2
   rectangle(14,450+y2,29,460+y2);
}