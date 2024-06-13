
#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void axis()
{
    //glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	//glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(6);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(0,100,0); // Red

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(200.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, 200.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(-200.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, -200.0f);

	glEnd();
}


void Circle(float radius, float xc, float yc, float r, float g, float b)
{
	glLineWidth(7.5);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc );
        }

	glEnd();
}

void CircleBorder(float radius, float xc, float yc, float width)
{
	glLineWidth(width);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc );
        }

	glEnd();
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void windows(float x, float y, float r, float g, float b)
{
    glBegin(GL_POLYGON);
    glColor3ub(r,g,b);
    glVertex2i(x+10,y-4);
    glVertex2i(x+10+35,y-4);
    glVertex2f(x+10+35,y-28);
    glVertex2i(x+10,y-28);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(x+10,y-4);
    glVertex2i(x+10+35,y-4);
    glVertex2f(x+10+35,y-28);
    glVertex2i(x+10,y-28);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON);
    glColor3ub(r,g,b);
    glVertex2i(x+10+35+10,y-4);
    glVertex2f(x+10+35+10+35,y-4);
    glVertex2i(x+10+35+10+35,y-28);
    glVertex2i(x+10+35+10,y-28);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(x+10+35+10,y-4);
    glVertex2f(x+10+35+10+35,y-4);
    glVertex2i(x+10+35+10+35,y-28);
    glVertex2i(x+10+35+10,y-28);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void buildingWithGrass(float x)
{
    glLineWidth(4.5);

	glBegin(GL_POLYGON); //grass
    glColor3ub(0,255,0);
    glVertex2i(-200,-150);
    glVertex2i(-200,-70);
    glVertex2f(200,-70);
    glVertex2i(200,-150);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //grass
    glColor3ub(0,0,0);
    glVertex2i(-200,-150);
    glVertex2i(-200,-70);
    glVertex2f(200,-70);
    glVertex2i(200,-150);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //sky
    glColor3ub(135, 206, 235);
    glVertex2i(-200,-70);
    glVertex2i(-200,150);
    glVertex2f(200,150);
    glVertex2i(200,-70);
    glEnd();

    glBegin(GL_POLYGON); //road
    glColor3ub(194, 116, 14);
    glVertex2i(-200,-100);
    glVertex2i(-200,-125);
    glVertex2f(200,-125);
    glVertex2i(200,-100);
    glEnd();

    glBegin(GL_POLYGON); //road
    glColor3ub(194, 116, 14);
    glVertex2i(-75+x,-100);
    glVertex2i(-75+x,-80);
    glVertex2f(-45+x,-80);
    glVertex2i(-45+x,-100);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //road border
    glColor3ub(0,0,0);
    glVertex2i(-200,-100);
    glVertex2i(-75+x,-100);
    glVertex2i(-75+x,-80);
    glVertex2i(-45+x,-80);
    glVertex2i(-45+x,-100);
    glVertex2i(200,-100);
    glVertex2i(200,-125);
    glVertex2f(-200,-125);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(-110+x,-80);
    glVertex2i(-110+x,80);
    glVertex2f(-10+x,80);
    glVertex2i(-10+x,-80);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(-110+x,-80);
    glVertex2i(-110+x,80);
    glVertex2f(-10+x,80);
    glVertex2i(-10+x,-80);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(-10+x,80);
    glVertex2i(0+x,70);
    glVertex2f(0+x,-80);
    glVertex2i(-10+x,-80);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(-10+x,80);
    glVertex2i(0+x,70);
    glVertex2f(0+x,-80);
    glVertex2i(-10+x,-80);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(-110+x,80);
    glVertex2i(-113+x,80);
    glVertex2f(-113+x,85);
    glVertex2f(-7+x,85);
    glVertex2i(-7+x,80);
    glVertex2f(-10+x,80);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(-110+x,80);
    glVertex2i(-113+x,80);
    glVertex2f(-113+x,85);
    glVertex2f(-7+x,85);
    glVertex2i(-7+x,80);
    glVertex2f(-10+x,80);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(-10+x,80);
    glVertex2i(-7+x,80);
    glVertex2f(0+x,73);
    glVertex2f(0+x,70);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(-10+x,80);
    glVertex2i(-7+x,80);
    glVertex2f(0+x,73);
    glVertex2f(0+x,70);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //door
    glColor3ub(194, 214, 11);
    glVertex2i(-70+x,-80);
    glVertex2i(-70+x,-55);
    glVertex2f(-50+x,-55);
    glVertex2f(-50+x,-80);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(-70+x,-80);
    glVertex2i(-70+x,-55);
    glVertex2f(-50+x,-55);
    glVertex2f(-50+x,-80);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    windows(-110+x,-16, 00,20,200);
    windows(-110+x,16, 00,20,200);
    windows(-110+x,48, 0,20,200);
    windows(-110+x,80, 0,20,200);
}

void lampPost(float x)
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,100);
    glVertex2i(170+x,-80);
    glVertex2i(170+x,-70);
    glVertex2f(180+x,-70);
    glVertex2f(180+x,-80);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,100);
    glVertex2i(174+x,-70);
    glVertex2i(174+x,-20);
    glVertex2f(176+x,-20);
    glVertex2f(176+x,-70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,100);
    glVertex2i(165+x,-25);
    glVertex2i(165+x,-27);
    glVertex2f(185+x,-27);
    glVertex2f(185+x,-25);
    glEnd();

    Circle(6, 175+x,-15,255,255,0);
    CircleBorder(6, 175+x,-15,5);
    Circle(4, 165+x,-23,255,255,0);
    CircleBorder(4, 165+x,-23,4);
    Circle(4, 185+x,-23,255,255,0);
    CircleBorder(4, 185+x,-23,4);

    glBegin(GL_POLYGON);
    glColor3ub(0,0,100);
    glVertex2i(172+x,-25);
    glVertex2i(172+x,-35);
    glVertex2f(178+x,-35);
    glVertex2f(178+x,-25);
    glEnd();
}

void tree(float x)
{
    glLineWidth(5);
    glBegin(GL_POLYGON);
    glColor3ub(165,99,60);
    glVertex2i(60+x,-80);
    glVertex2i(60+x,00);
    glVertex2i(80+x,00);
    glVertex2f(80+x,-80);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,00);
    glVertex2i(60+x,-80);
    glVertex2i(60+x,00);
    glVertex2i(80+x,00);
    glVertex2f(80+x,-80);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    Circle(18, 40+x,7,0,176,65);
    CircleBorder(18,40+x, 7,7);
    Circle(18, 100+x,7,0,176,65);
    CircleBorder(18,100+x, 7,7);
    Circle(30, 70+x,28,0,176,65);
    CircleBorder(30,70+x, 28,7);
    Circle(10, 63+x,00,0,176,65);
    CircleBorder(10,63+x, 00,7);
    Circle(10, 77+x,00,0,176,65);
    CircleBorder(10,77+x, 00,7);
    Circle(12, 70+x,5,0,176,65);
    Circle(15, 48+x,11,0,176,65);
    Circle(15, 91+x,12,0,176,65);
}

void bench(float x)
{
    glBegin(GL_POLYGON);
    glColor3ub(194, 84, 6);
    glVertex2i(113+x,-45);
    glVertex2i(118+x,-45);
    glVertex2i(118+x,-78);
    glVertex2f(113+x,-78);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(194, 84, 6);
    glVertex2i(135+x,-45);
    glVertex2i(140+x,-45);
    glVertex2i(140+x,-78);
    glVertex2f(135+x,-78);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(194, 84, 6);
    glVertex2i(100+x,-72);
    glVertex2i(106+x,-62);
    glVertex2i(147+x,-62);
    glVertex2f(153+x,-72);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(94, 43, 7);
    glVertex2i(100+x,-72);
    glVertex2i(153+x,-72);
    glVertex2i(153+x,-75);
    glVertex2i(100+x,-75);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(194, 84, 6);
    glVertex2i(105+x,-75);
    glVertex2i(110+x,-75);
    glVertex2i(110+x,-82);
    glVertex2f(105+x,-82);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(194, 84, 6);
    glVertex2i(143+x,-75);
    glVertex2i(148+x,-75);
    glVertex2i(148+x,-82);
    glVertex2f(143+x,-82);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(194, 84, 6);
    glVertex2i(113+x,-75);
    glVertex2i(118+x,-75);
    glVertex2i(118+x,-78);
    glVertex2f(113+x,-78);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(194, 84, 6);
    glVertex2i(135+x,-75);
    glVertex2i(140+x,-75);
    glVertex2i(140+x,-78);
    glVertex2f(135+x,-78);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(194, 84, 6);
    glVertex2i(106+x,-60);
    glVertex2i(106+x,-47);
    glVertex2i(147+x,-47);
    glVertex2i(147+x,-60);
    glEnd();

    glLineWidth(3.5);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(118+x,-60);
    glVertex2f(113+x,-60);
    glVertex2i(113+x,-62);
    glVertex2i(118+x,-62);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(135+x,-60);
    glVertex2i(140+x,-60);
    glVertex2i(140+x,-62);
    glVertex2f(135+x,-62);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(118+x,-45);
    glVertex2f(113+x,-45);
    glVertex2i(113+x,-47);
    glVertex2i(118+x,-47);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

     glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(135+x,-45);
    glVertex2i(140+x,-45);
    glVertex2i(140+x,-47);
    glVertex2f(135+x,-47);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(100+x,-72);
    glVertex2i(106+x,-62);
    glVertex2i(147+x,-62);
    glVertex2f(153+x,-72);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(100+x,-72);
    glVertex2i(153+x,-72);
    glVertex2i(153+x,-75);
    glVertex2i(100+x,-75);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(105+x,-75);
    glVertex2i(110+x,-75);
    glVertex2i(110+x,-82);
    glVertex2f(105+x,-82);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(143+x,-75);
    glVertex2i(148+x,-75);
    glVertex2i(148+x,-82);
    glVertex2f(143+x,-82);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(113+x,-75);
    glVertex2i(118+x,-75);
    glVertex2i(118+x,-78);
    glVertex2f(113+x,-78);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(135+x,-75);
    glVertex2i(140+x,-75);
    glVertex2i(140+x,-78);
    glVertex2f(135+x,-78);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(106+x,-60);
    glVertex2i(106+x,-47);
    glVertex2i(147+x,-47);
    glVertex2i(147+x,-60);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void display()
{
    buildingWithGrass(0);
    tree(-15);
    //glClear(GL_COLOR_BUFFER_BIT);
    tree(-232);
    lampPost(-30);
    bench(-25);
    axis();

    glFlush();
}

int main(int argc, char** argv)
{
            glutInit(&argc, argv);
            glutInitWindowSize(1200, 1200);
            glutCreateWindow("lab task 3 [22-47226-1]");
            glutDisplayFunc(display);
            gluOrtho2D(-200,200,-150,130);
            glutMainLoop();
            return 0;
}
