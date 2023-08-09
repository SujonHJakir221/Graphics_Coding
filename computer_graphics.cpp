#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>

using namespace std;

int main()
{
    int gd=DETECT, gm, i, x, y;
    int c, m = 30, l = 30, black = 0;
    int  ii, maxx, cy;
    initgraph(&gd, &gm, "1000,800");
    
    int choice,t;
    cout<<"1.Flag\n2.Animated Circle\n3.Animated Car\n4.Olympic Logo";
    cout<<"Test Case:";
    cin>>t
    while(t!=0)
    {

       cout<<"Enter your choice:";
       cin>>choice;
       
        switch(choice)
        {

        case 1:

            setcolor(WHITE);
            rectangle(50,12,60,366);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(51,13,WHITE);

            setcolor(GREEN);
            rectangle(60,14,346,136);
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(61,15,GREEN);

            setcolor(RED);
            circle(185,72,45);
            setfillstyle(SOLID_FILL,RED);
            floodfill(185,72,RED);
            break;

        case 2:
            x=getmaxx()/3;
            y=getmaxx()/3;
            setbkcolor(WHITE);
            setcolor(BLUE);
            for(i=1; i<=8; i++)
            {
                setfillstyle(i,i);
                delay(20);
                circle(x, y, i*20);
                floodfill(x-2+i*20,y,BLUE);

            }
            break;

        case 3:
            setbkcolor(WHITE);
            setcolor(RED);
            maxx = getmaxx();
            cy = getmaxy()/2;
            for(ii=0; ii<maxx-140; ii++)
            {
                cleardevice();
                line(0+ii,cy-20, 0+ii, cy+15);
                line(0+ii, cy-20, 25+ii, cy-20);
                line(25+ii, cy-20, 40+ii, cy-70);
                line(40+ii, cy-70, 100+ii, cy-70);
                line(100+ii, cy-70, 115+ii, cy-20);
                line(115+ii, cy-20, 140+ii, cy-20);
                line(0+ii, cy+15, 18+ii, cy+15);
                circle(28+ii, cy+15, 10);
                line(38+ii, cy+15, 102+ii, cy+15);
                circle(112+ii, cy+15,10);
                line(122+ii, cy+15,140+ii,cy+15);
                line(140+ii, cy+15, 140+ii, cy-20);
                rectangle(50+ii, cy-62, 90+ii, cy-30);
                setfillstyle(1,BLUE);
                floodfill(5+ii, cy-15, RED);
                setfillstyle(1, LIGHTBLUE);
                floodfill(52+i, cy-60, RED);
                delay(10);
            }

            break;

        case 4:
            // Create Background color as Grey
            setfillstyle(SOLID_FILL, DARKGRAY);
            floodfill(50, 50, 15);

            // Create two circles in each
            // another & color Blue
            setfillstyle(SOLID_FILL, BLUE);
            circle(300, 300, 100);
            circle(300, 300, 90);
            floodfill(202, 300, 15);

            // Create two circles in each
            // another & color Yellow
            setfillstyle(SOLID_FILL, YELLOW);
            circle(400, 400, 100);
            circle(400, 400, 90);
            floodfill(322, 350, 15);
            floodfill(302, 400, 15);

            // Create two circles in each
            // another & color Black
            setfillstyle(SOLID_FILL, BLACK);
            circle(520, 300, 100);
            circle(520, 300, 90);
            floodfill(442, 350, 15);
            floodfill(422, 300, 15);

            // Create two circles in each
            // another & color Green
            setfillstyle(SOLID_FILL, GREEN);
            circle(620, 400, 100);
            circle(620, 400, 90);
            floodfill(522, 400, 15);
            floodfill(542, 350, 15);

            // Create two circles in each
            // another & color Red
            setfillstyle(SOLID_FILL, RED);
            circle(740, 300, 100);
            circle(740, 300, 90);
            floodfill(642, 300, 15);
            floodfill(662, 350, 15);
            break;

        default:
            cout<<"Invalid input.Try Again";
        }
        t=t-1;

    }

    getch();
    closegraph();
}
