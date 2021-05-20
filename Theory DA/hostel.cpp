/* Command to compile the file 
g++ -o hostel hostel.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
*/

// The max x-axis width is 1535px
// The max y-axis width is 800px

// //todo Window-dimensions
// rectangle(5,5,35,15);      // Rectangle 1 X-axis diff = 30, Y-axis diff = 10
// rectangle(5,15,35,50);     // Rectangle 2 X-axis diff = 30, Y-axis diff = 35      
// line(20,15,20,50);         // Line X-axis diff = 0, Y-axis diff = 35
// rectangle(2,50,38,55);     // Rectangle 2 X-axis diff = 36, Y-axis diff = 5


#include<graphics.h>
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm,"C:\\MinGW\\lib\\libbgi.a");
    
    
    //todo General Stuff
    line(0,650,1535,650);  //Ground Style
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);  //Text Style
    setfillstyle(CLOSE_DOT_FILL, DARKGRAY);  //Sets the syle of the texture
    outtextxy(670,50,"VIT-VELLORE");
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3.5);
    outtextxy(605,100,"FRESHER'S HOSTEL BLOCKS");



    //todo Text Style for the block names
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);

    //todo N-Block
    rectangle(150,150,390,650);
    line(150,190,390,190);
    outtextxy(215,157,"N-BLOCK");
    line(100,170,150,150);
    line(100,170,100,650);
    line(100,210,150,190);
    floodfill(101,172,WHITE);
    floodfill(101,500,WHITE);
    rectangle(230,550,310,650);


    //? Windows
    
    //Window 1-1
    rectangle(190,240,220,250);
    rectangle(190,250,220,285);
    line(205,250,205,285);
    rectangle(187,285,223,290);

    //Window 1-2
    rectangle(310,240,340,250);
    rectangle(310,250,340,285);
    line(325,250,325,285);
    rectangle(307,285,343,290);
    
    //Window 2-1
    rectangle(190,340,220,350);
    rectangle(190,350,220,385);
    line(205,350,205,385);
    rectangle(187,385,223,390);
    
    //Window 2-2
    rectangle(310,340,340,350);
    rectangle(310,350,340,385);
    line(325,350,325,385);
    rectangle(307,385,343,390);

    //Window 3-1
    rectangle(190,440,220,450);
    rectangle(190,450,220,485);
    line(205,450,205,485);
    rectangle(187,485,223,490);
    
    //Window 3-2
    rectangle(310,440,340,450);
    rectangle(310,450,340,485);
    line(325,450,325,485);
    rectangle(307,485,343,490);



    //todo P-Block
    rectangle(390,350,1130,650);
    line(390,390,1130,390);
    outtextxy(720,357,"P-BLOCK");
    rectangle(600,550,920,650);
    
    //? Windows
    
    //Window 1-1
    rectangle(440,455,470,465);
    rectangle(440,455,470,500);
    line(455,465,455,500);
    rectangle(437,500,473,505);
    
    //Window 1-2
    rectangle(560,455,590,465);
    rectangle(560,455,590,500);
    line(575,465,575,500);
    rectangle(557,500,593,505);

    //Window 1-3
    rectangle(680,455,710,465);
    rectangle(680,455,710,500);
    line(695,465,695,500);
    rectangle(677,500,713,505);

    //Window 1-4
    rectangle(800,455,830,465);
    rectangle(800,455,830,500);
    line(815,465,815,500);
    rectangle(797,500,833,505);

    //Window 1-5
    rectangle(920,455,950,465);
    rectangle(920,455,950,500);
    line(935,465,935,500);
    rectangle(917,500,953,505);

    //Window 1-6
    rectangle(1040,455,1070,465);
    rectangle(1040,455,1070,500);
    line(1055,465,1055,500);
    rectangle(1037,500,1073,505);

    


    //todo M-Block
    rectangle(1130,150,1370,650);
    line(1130,190,1370,190);
    outtextxy(1195,157,"M-BLOCK");
    line(1080,170,1130,150);
    line(1080,170,1080,350);
    line(1080,210,1130,190);
    rectangle(1210,550,1290,650);
    setfillstyle(CLOSE_DOT_FILL, DARKGRAY);
    floodfill(1081,172,WHITE);
    floodfill(1081,322,WHITE); 

    //? Windows
    
    //Window 1-1
    rectangle(1180,240,1210,250);
    rectangle(1180,250,1210,285);
    line(1195,250,1195,285);
    rectangle(1177,285,1213,290);

    //Window 1-2
    rectangle(1300,240,1330,250);
    rectangle(1300,250,1330,285);
    line(1315,250,1315,285);
    rectangle(1297,285,1333,290);

    //Window 2-1
    rectangle(1180,340,1210,350);
    rectangle(1180,350,1210,385);
    line(1195,350,1195,385);
    rectangle(1177,385,1213,390);
    
    //Window 2-2
    rectangle(1300,340,1330,350);
    rectangle(1300,350,1330,385);
    line(1315,350,1315,385);
    rectangle(1297,385,1333,390);

    //Window 3-1
    rectangle(1180,440,1210,450);
    rectangle(1180,450,1210,485);
    line(1195,450,1195,485);
    rectangle(1177,485,1213,490);
    
    //Window 3-2
    rectangle(1300,440,1330,450);
    rectangle(1300,450,1330,485);
    line(1315,450,1315,485);
    rectangle(1297,485,1333,490);


    //footer text
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
    outtextxy(700,675,"MADE BY-:");
    outtextxy(692,710,"SHAARANG");
    outtextxy(694,740,"19BCT0215");



    getch();
    closegraph();
    return 0;
}