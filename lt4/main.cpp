#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <string.h>

void Circle(float radius, float xc, float yc, float r, float g, float b)
{
	glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
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
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
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

void car(float x, float y, int r1, int g1, int b1, int r2, int g2, int b2)
{
    glBegin(GL_POLYGON);
    glColor3ub(r1,g1,b1); //body
    glVertex2f(10+x,0+y);
    glVertex2f(10+x,9+9+y);
    glVertex2f(11+x,12+9+y);
    glVertex2f(12.5+x,13+9+y);
    glVertex2f(14.5+x,13+9+y);
    glVertex2f(16+x,12+9+y);
    glVertex2f(17+x,9+9+y);
    glVertex2f(17+x,0+y);
    glVertex2f(16+x,-2+y);
    glVertex2f(11+x,-2+y);
    glVertex2f(10+x,0+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(r2,g2,b2); //windshield
    glVertex2f(11+x,6.5+5-0.5+y);
    glVertex2f(16+x, 6.5+5-0.5+y);
    glVertex2f(16.5+x, 8.5+5+1-0.5+y);
    glVertex2f(14.5+x, 10+5+1-0.5+y);
    glVertex2f(12.5+x, 10+5+1-0.5+y);
    glVertex2f(10.5+x, 8.5+5+1-0.5+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(r2,g2,b2); //driver window right
    glVertex2f(16.25+x,6.5+5-0.5+y);
    glVertex2f(16.5+x, 6.5+5-0.5+y);
    glVertex2f(16.75+x, 8.5+5+1-0.5+y);
    glVertex2f(16.75+x, 6+2-0.5+y);
    glVertex2f(16.25+x, 6+2-0.5+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(r2,g2,b2); //passenger window right
    glVertex2f(16.25+x, 5.5+2-0.5+y);
    glVertex2f(16.75+x, 5.5+2-0.5+y);
    glVertex2f(16.75+x,1-0.5+y);
    glVertex2f(16.25+x, 3+y);
    glVertex2f(16.25+x, 7-0.5+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(r2,g2,b2); //driver window left
    glVertex2f(10.75+x,6.5+5-0.5+y);
    glVertex2f(10.5+x, 6.5+5-0.5+y);
    glVertex2f(10.25+x, 8.5+5+1-0.5+y);
    glVertex2f(10.25+x, 6+2-0.5+y);
    glVertex2f(10.75+x, 6+2-0.5+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(r2,g2,b2); //passenger window left
    glVertex2f(10.75+x, 5.5+2-0.5+y);
    glVertex2f(10.25+x, 5.5+2-0.5+y);
    glVertex2f(10.25+x,1-0.5+y);
    glVertex2f(10.75+x, 3+y);
    glVertex2f(10.75+x, 7-0.5+y);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(r2,g2,b2); //backshield
    glVertex2f(11.25+x, 3+y);
    glVertex2f(15.75+x, 3+y);
    glVertex2f(16.50+x,0+y);
    glVertex2f(10.5+x, 0+y);
    glEnd();

    glLineWidth(1.5);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0); //body
    glVertex2f(10+x,0+y);
    glVertex2f(10+x,9+9+y);
    glVertex2f(11+x,12+9+y);
    glVertex2f(12.5+x,13+9+y);
    glVertex2f(14.5+x,13+9+y);
    glVertex2f(16+x,12+9+y);
    glVertex2f(17+x,9+9+y);
    glVertex2f(17+x,0+y);
    glVertex2f(16+x,-2+y);
    glVertex2f(11+x,-2+y);
    glVertex2f(10+x,0+y);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0); //windshield
    glVertex2f(11+x,6.5+5-0.5+y);
    glVertex2f(16+x, 6.5+5-0.5+y);
    glVertex2f(16.5+x, 8.5+5+1-0.5+y);
    glVertex2f(14.5+x, 10+5+1-0.5+y);
    glVertex2f(12.5+x, 10+5+1-0.5+y);
    glVertex2f(10.5+x, 8.5+5+1-0.5+y);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0); //driver window right
    glVertex2f(16.25+x,6.5+5-0.5+y);
    glVertex2f(16.5+x, 6.5+5-0.5+y);
    glVertex2f(16.75+x, 8.5+5+1-0.5+y);
    glVertex2f(16.75+x, 6+2-0.5+y);
    glVertex2f(16.25+x, 6+2-0.5+y);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0); //passenger window right
    glVertex2f(16.25+x, 5.5+2-0.5+y);
    glVertex2f(16.75+x, 5.5+2-0.5+y);
    glVertex2f(16.75+x,1-0.5+y);
    glVertex2f(16.25+x, 3+y);
    glVertex2f(16.25+x, 7-0.5+y);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glVertex2f(10.75+x,6.5+5-0.5+y);
    glVertex2f(10.5+x, 6.5+5-0.5+y);
    glVertex2f(10.25+x, 8.5+5+1-0.5+y);
    glVertex2f(10.25+x, 6+2-0.5+y);
    glVertex2f(10.75+x, 6+2-0.5+y);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0); //passenger window left
    glVertex2f(10.75+x, 5.5+2-0.5+y);
    glVertex2f(10.25+x, 5.5+2-0.5+y);
    glVertex2f(10.25+x,1-0.5+y);
    glVertex2f(10.75+x, 3+y);
    glVertex2f(10.75+x, 7-0.5+y);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0); //backshield
    glVertex2f(11.25+x, 3+y);
    glVertex2f(15.75+x, 3+y);
    glVertex2f(16.50+x,0+y);
    glVertex2f(10.5+x, 0+y);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void callCar(float x, float y, int r1, int g1, int b1, int r2, int g2, int b2, char dir)
{
    if (dir == 'u')
    {
            car(x,y,r1,g1,b1,r2,g2,b2);
    }

    else if (dir == 'd')
    {
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glPushMatrix();
        glRotatef(180, 0.0, 0.0, 1.0);
        car(x,y,r1,g1,b1,r2,g2,b2);
        glPopMatrix();
        glutSwapBuffers();
    }

    else if (dir == 'r')
    {
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glPushMatrix();
        glRotatef(270, 0.0, 0.0, 1.0);
        car(x,y,r1,g1,b1,r2,g2,b2);
        glPopMatrix();
        glutSwapBuffers();
    }
    else if (dir == 'l')
    {
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glPushMatrix();
        glRotatef(90, 0.0, 0.0, 1.0);
        car(x,y,r1,g1,b1,r2,g2,b2);
        glPopMatrix();
        glutSwapBuffers();
    }
    else
    {

    }
}

void callCarAngle(float x, float y, int r1, int g1, int b1, int r2, int g2, int b2, float angle)
{
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glPushMatrix();
        glRotatef(angle, 0.0, 0.0, 1.0);
        car(x,y,r1,g1,b1,r2,g2,b2);
        glPopMatrix();
        glutSwapBuffers();
}

void dividerLineV(float x, float y)
{
    glBegin(GL_LINES);
    glColor3ub(255, 191, 0);
    glVertex2f(55+x,65+y);
    glVertex2f(55+x,50+y);
    glEnd();
}

void dividerLineH(float x, float y)
{
    glBegin(GL_LINES);
    glColor3ub(255, 191, 0);
    glVertex2f(30+x,25+y);
    glVertex2f(40+x,25+y);
    glEnd();
}

void roadMap()
{
    glBegin(GL_POLYGON);
   glColor3ub(103, 113, 130); //crossroads horizontal
    glVertex2f(0,50);
    glVertex2f(140,50);
    glVertex2f(140,-50);
    glVertex2f(0,-50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(103, 113, 130); //crossroads vertical
    glVertex2f(40,100);
    glVertex2f(100,100);
    glVertex2f(100,-100);
    glVertex2f(40,-100);
    glEnd();

    glLineWidth(4);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 00); //crossroads border
    glVertex2f(0,50);
    glVertex2f(40,50);
    glVertex2f(40,100);
    glVertex2f(100,100);
    glVertex2f(100,50);
    glVertex2f(140,50);
    glVertex2f(140,-50);
    glVertex2f(100,-50);
    glVertex2f(100,-100);
    glVertex2f(40,-100);
    glVertex2f(40,-50);
    glVertex2f(0,-50);
    glVertex2f(0,50);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

     glBegin(GL_POLYGON);
    glColor3ub(46, 47, 48); //crossroads divider vertical 1
    glVertex2f(69,100);
    glVertex2f(71,100);
    glVertex2f(71,50);
    glVertex2f(69,50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(46, 47, 48); //crossroads divider vertical 2
    glVertex2f(69,-100);
    glVertex2f(71,-100);
    glVertex2f(71,-50);
    glVertex2f(69,-50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(46, 47, 48); //crossroads divider horizo 1
    glVertex2f(0,1);
    glVertex2f(40,1);
    glVertex2f(40,-1);
    glVertex2f(0,-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(46, 47, 48); //crossroads divider horizo 2
    glVertex2f(100,1);
    glVertex2f(140,1);
    glVertex2f(140,-1);
    glVertex2f(100,-1);
    glEnd();

    Circle(1,70, 0, 46,47,48);
    dividerLineV(0,0);
    dividerLineV(0,25);
    dividerLineV(30,0);
    dividerLineV(30,25);

    dividerLineV(0,-115);
    dividerLineV(0,-140);
    dividerLineV(30,-115);
    dividerLineV(30,-140);

    dividerLineH(0,0);
    dividerLineH(-17,0);
    dividerLineH(-34,0);
    dividerLineH(0,-50);
    dividerLineH(-17,-50);
    dividerLineH(-34,-50);

    dividerLineH(0+104,0);
    dividerLineH(-17+104,0);
    dividerLineH(-34+104,0);
    dividerLineH(0+104,-50);
    dividerLineH(-17+104,-50);
    dividerLineH(-34+104,-50);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(48,65-15);
    glVertex2f(48,53-15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(46,50);
    glVertex2f(48,52);
    glVertex2f(50,50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(40,37);
    glVertex2f(70,37);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(70,39);
    glVertex2f(72,37);
    glVertex2f(70,35);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(40+30,37-75);
    glVertex2f(70+30,37-75);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(70,-40);
    glVertex2f(68,-38);
    glVertex2f(70,-36);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(48+45,65-104);
    glVertex2f(48+45,53-104);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(91,-51);
    glVertex2f(93,-53);
    glVertex2f(95,-51);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(48,65-65);
    glVertex2f(48,15-65);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(46,50-50);
    glVertex2f(48,52-50);
    glVertex2f(50,50-50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(40+0,37-75);
    glVertex2f(48+0,37-75);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(70-30,-40);
    glVertex2f(68-30,-38);
    glVertex2f(70-30,-36);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(43+50,37);
    glVertex2f(50+50,37);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(70+30,39);
    glVertex2f(72+30,37);
    glVertex2f(70+30,35);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(48+45,60-10);
    glVertex2f(48+45,8-10);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 255);
    glVertex2f(91,-51+50);
    glVertex2f(93,-53+50);
    glVertex2f(95,-51+50);
    glEnd();
}

void trafficSignal()
{
    Circle(2,37,53,4,44,189);
    Circle(2,37+66,53,4,44,189);
    Circle(2,37+66,53-106,4,44,189);
    Circle(2,37,53-106,4,44,189);

    CircleBorder(2,37,53,4);
    CircleBorder(2,37+66,53,4);
    CircleBorder(2,37+66,53-106,4);
    CircleBorder(2,37,53-106,4);

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(37,53);
    glVertex2f(37,48);
    glEnd();

    Circle(1.5,37-0.75,53-8,255,0,0);
    Circle(1.5,37-0.75,53-17,78,79,82);
    Circle(1.5,37-0.75,53-12.5,78,79,82);
    CircleBorder(1.5,37-0.75,53-8,4);
    CircleBorder(1.5,37-0.75,53-17,4);
    CircleBorder(1.5,37-0.75,53-12.5,4);
    glLineWidth(20);
    glBegin(GL_LINES);
    glColor3ub(1, 12, 125);
    glVertex2f(37,48);
    glVertex2f(37,33);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(37+66,53-106);
    glVertex2f(37+66,53-91);
    glEnd();

    Circle(1.5,37-1+67.75,53-8-81,78,79,82); //green
    Circle(1.5,37-1+67.75,53-17-81,255,0,0); //red
    Circle(1.5,37-1+67.75,53-12.5-81,78,79,82); //yellow
    CircleBorder(1.5,37-1+67.75,53-8-81,4);
    CircleBorder(1.5,37-1+67.75,53-17-81,4);
    CircleBorder(1.5,37-1+67.75,53-12.5-81,4);

    glLineWidth(20);
    glBegin(GL_LINES);
    glColor3ub(1, 12, 125);
    glVertex2f(37+66,53-106+5);
    glVertex2f(37+66,53-91+5);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(37,53-106);
    glVertex2f(37+10,53-106);
    glEnd();

    Circle(1.5,37+13.75,53-106-2,0,204,58); //green
    Circle(1.5,37+6.25,53-106-2,78,79,82); //red
    Circle(1.5,37+10,53-106-2,246,255,0); //yellow
    CircleBorder(1.5,37+13.75,53-106-2,4);
    CircleBorder(1.5,37+6.25,53-106-2,4);
    CircleBorder(1.5,37+10,53-106-2,4);

    glLineWidth(20);
    glBegin(GL_LINES);
    glColor3ub(1, 12, 125);
    glVertex2f(37+4,53-106);
    glVertex2f(37+16,53-106);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(37+56,53);
    glVertex2f(37+66,53);
    glEnd();

    Circle(1.5,37+13.75+38.5,53+2,0,204,58); //green
    Circle(1.5,37+13.75+46.2,53+2,78,79,82); //red
    Circle(1.5,37+13.75+42.25,53+2,78,79,82); //yellow
    CircleBorder(1.5,37+13.75+38.5,53+2,4);
    CircleBorder(1.5,37+13.75+46.2,53+2,4);
    CircleBorder(1.5,37+13.75+42.25,53+2,4);

    glLineWidth(20);
    glBegin(GL_LINES);
    glColor3ub(1, 12, 125);
    glVertex2f(37+50,53);
    glVertex2f(37+62,53);
    glEnd();
}

void Cars()
{
    callCar(30,-75, 255,0,0,0,0,255,'r');
    callCar(30,-105, 0, 71, 186,100,0,0,'r');
    callCar(30+19,-75, 190, 204, 0,0,0,255,'r');
    callCar(30+19,-105, 10, 193, 207,100,0,0,'r');

    callCar(30+19,-105, 255, 193, 207,18, 158, 133,'l');
    callCar(30,-105+30, 10, 255, 207,0,0,200,'l');
    callCar(30+19,-105+30, 10, 193, 207,100,0,0,'l');
    callCar(30,-105, 115, 0, 255,77, 237, 14,'l');

    callCar(30+4,-105+10, 115, 0, 255,77, 237, 14,'u');
    callCarAngle(30-11,-105+70, 242, 61, 48,0, 2, 255,30);
    callCar(30,-105+170, 28, 240, 0,0, 0, 255,'l');
    callCar(30+19,-105+20, 0, 74, 11,255, 0, 14,'u');
    callCar(30+19,-105+70, 158, 97, 11,0, 0, 255,'u');
    callCar(30+19,-105+110, 67, 1, 82,0, 0, 255,'u');
    callCar(30+5,-105+140, 120, 133, 7,0, 0, 255,'u');
    callCar(30+19,-105+170, 201, 4, 27,0, 0, 255,'u');

    callCar(30+19,-105+160, 201, 4, 27,0, 0, 255,'d');
    callCar(30+19,-105+110, 170, 6, 199,0, 0, 255,'d');
    callCar(30+19,-105+50, 54, 46, 46,0, 0, 255,'d');
    callCar(30+4,-105+150, 4, 148, 114,0, 0, 255,'d');
    callCar(30+4,-105+90,0, 3, 191,255, 0, 0,'d');
    callCar(30+4,-105,153, 154, 199,255, 0, 0,'d');
    callCarAngle(22,-44,0, 0, 0,255, 0, 0,200);
    callCar(30,-75+140, 255,0,0,0,0,255,'r');
}

void display()
{
    glClearColor(0.0f, 0.459f, 0.2f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    roadMap();
    Cars();
    trafficSignal();

    glFlush();
}

int main(int argc, char** argv)
{
            glutInit(&argc, argv);
            glutInitWindowSize(1300, 1300);
            glutCreateWindow("lab task 4 [22-47226-1]");
            glutDisplayFunc(display);
            gluOrtho2D(0,140,-100,100);
            glutMainLoop();
            return 0;
}
