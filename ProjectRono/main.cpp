#include <windows.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>

bool isNight = false;

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


float _move1 = 3.0f;
float _move2 = 3.0f;
float _move3 = 3.0f;
float _move4 = 3.0f;
float _move5 = 3.0f;
float _move6 = 3.0f;
float _move7 = 3.0f;
float _move8 = 3.0f;
float _move9 = 3.0f;
float _move10 = 3.0f;
float _move11 = 3.0f;

float moveSun = -60.0f;
float moveMoon = -50.0f;

float _angle1 = 0.0f;
float _angle2 = 0.0f;

void waveUpdate(int value) //Wf_animation
{
    _move1+=3.25;
    if(_move1 > 28)
    {
        _move1=-4;
    }
	glutPostRedisplay();

    _move2+=.8f;
    if(_move2 > 4.75)
    {
        _move2=-4;
    }
	glutPostRedisplay();

    _move3+=.8f;
    if(_move3 > 4)
    {
        _move3=-4;
    }
	glutPostRedisplay();

    _move4+=.85f;
    if(_move4 > 9)
    {
        _move4=-4;
    }
	glutPostRedisplay();

    _move5+=1.2f;
    if(_move5 > 15)
    {
        _move5=-4;
    }
	glutPostRedisplay();

    _move6+=1.0f;
    if(_move6 > 20)
    {
        _move6=-4;
    }
	glutPostRedisplay();

    _move7+=1.0f;
    if(_move7 > 20)
    {
        _move7=-4;
    }
	glutPostRedisplay();

    _move8+=1.19;
    if(_move8 > 20)
    {
        _move8=-4;
    }
	glutPostRedisplay();

    _move9+=1.05;
    if(_move9 > 20)
    {
        _move9=-4;
    }
	glutPostRedisplay();

    _move10+=1.7;
    if(_move10 > 35)
    {
        _move10=-4;
    }
	glutPostRedisplay();

	_move11+=1.7;
    if(_move11 > 35)
    {
        _move11=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, waveUpdate, 0);
}

void sunUpdateRise(int value) //Sun_animation
{
        moveSun+=0.3;

    if(moveSun > 0)
    {
        moveSun = 0;
    }
	glutPostRedisplay();

	glutTimerFunc(20, sunUpdateRise, 0);
}

void moonUpdateRise(int value) //Moon_animation
{
        moveMoon+=0.3;

    if(moveMoon > 0)
    {
        moveMoon = 0;
    }
	glutPostRedisplay();

	glutTimerFunc(20, moonUpdateRise, 0);
}

void waves() //Wf_animation
{
    glPushMatrix();
    glTranslatef(-_move2,-_move2,0); //2nd set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(-5,148+25);
    glVertex2f(-6.5,143+25);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2f(3.75,148+25);
    glVertex2d(2.75,143+25);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(1,-_move3,0); //3rd set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(-1,175-14);
    glVertex2d(1,172-14);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(4,175-14);
    glVertex2d(6,172-14);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(-_move4,-_move4,0); //4th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2f(-0.15,148+2.75);
    glVertex2f(-2.5,143+2.75);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2f(7,148+2.75);
    glVertex2f(5.45,143+2.75);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(1,-_move5,0); //5th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(-1,175-45);
    glVertex2d(1,162-45);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(4,175-45);
    glVertex2d(7,161-45);
    glEnd();

    glPopMatrix();
    glPushMatrix();

    glTranslatef(-_move6,-_move6,0); //6th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(-5,148-50);
    glVertex2d(-15,130-50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(5,148-50);
    glVertex2d(-2,130-50);
    glEnd();

    glPopMatrix();
    glPushMatrix();

    glTranslatef(_move7,-_move7,0); //7th set of waves
    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(-30,108-50);
    glVertex2d(-15,80-50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(0,105-50);
    glVertex2d(17,75-50);
    glEnd();

    glPopMatrix();
    glPushMatrix();

    glTranslatef(-_move8,-_move8,0); //8th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(0,25-40);
    glVertex2d(-13,-8-40);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(32,32-40);
    glVertex2f(22.3,-1-40);
    glEnd();

    glPopMatrix();
    glPushMatrix();

    glTranslatef(_move9,-_move9,0); //9th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(-27,-35-50);
    glVertex2d(-17,-70-50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(5,-45-50);
    glVertex2d(16,-80-50);
    glEnd();

    glPopMatrix();
    glPushMatrix();

    glTranslatef(-_move10,-_move10,0); //10th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(-11,-110-60);
    glVertex2d(-35,-140-60);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(12,-110-80);
    glVertex2f(-2.7,-140-80);
    glEnd();
    glPopMatrix();

    glPushMatrix();

    glTranslatef(_move11,-_move11,0); //9th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(-7,-35-110);
    glVertex2d(4,-70-110);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(21,-45-110);
    glVertex2d(33,-80-110);
    glEnd();

    glPopMatrix();
}

void waterfall()  //wf
{
    glLineWidth(1);
    glPushMatrix();
    glScalef(0.9,0.9,0);
    glTranslatef(0,20,0);

    glBegin(GL_POLYGON); //mountain left
    glColor3ub(10, 200, 10);
    glVertex2d(-40,90+90);
    glVertex2d(-11,190+55);
    glVertex2d(0,180+55);
    glVertex2d(0,90+90);
    glEnd();

    glBegin(GL_POLYGON); //mountain right
    glColor3ub(10, 200, 10);
    glVertex2d(0,180+55);
    glVertex2d(10,180+50);
    glVertex2d(11,190+55);
    glVertex2d(40,90+90);
    glVertex2d(0,90+90);
    glEnd();

    glBegin(GL_POLYGON); //waterfall
    glColor3ub(10, 10, 255);
    glVertex2d(-9,190-12);
    glVertex2d(-9,190+53);
    glVertex2d(0,180+58);
    glVertex2d(9,190+53);
    glVertex2d(9,190-12);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.80,0.55,0);
    glTranslatef(0.95,150,0);

    glBegin(GL_POLYGON); //waterfall to river 1
    glColor3ub(50, 10, 200);
    glVertex2d(-14,165);
    glVertex2d(-9,190-12);
    glVertex2d(9,190-12);
    glVertex2d(6,184-18);
    glEnd();

    glBegin(GL_POLYGON); //waterfall to river 2
    glColor3ub(50, 10, 200);
    glVertex2d(-4,184-30);
    glVertex2d(-14,165);
    glVertex2d(6,184-18);
    glVertex2d(15,184-30);
    glEnd();

    glBegin(GL_POLYGON); //waterfall to river 3
    glColor3ub(50, 10, 200);
    glVertex2d(-18,165-30);
    glVertex2d(-4,184-30);
    glVertex2d(15,184-30);
    glVertex2d(7,184-48);
    glEnd();

    glBegin(GL_POLYGON); //waterfall to river 4
    glColor3ub(50, 10, 200);
    glVertex2d(-5,160-50);
    glVertex2d(-18,165-30);
   glVertex2d(7,184-48);
    glVertex2d(20,160-50);
    glEnd();

    glBegin(GL_POLYGON); //waterfall to river 5
    glColor3ub(50, 10, 200);
    glVertex2d(-45,120-50);
    glVertex2d(-5,160-50);
    glVertex2d(20,160-50);
    glVertex2d(7,120-50);
    glEnd();

    glBegin(GL_POLYGON); //waterfall to river 6
    glColor3ub(50, 10, 200);
    glVertex2d(-10,40-30);
    glVertex2d(-45,120-50);
    glVertex2d(7,120-50);
    glVertex2d(45,45-30);
    glEnd();

    glBegin(GL_POLYGON); //waterfall to river 7
    glColor3ub(50, 10, 200);
    glVertex2d(-40,-30-30);
    glVertex2d(-10,40-30);
    glVertex2d(45,45-30);
    glVertex2d(22,-40-30);
    glEnd();

    glBegin(GL_POLYGON); //waterfall to river 8
    glColor3ub(50, 10, 200);
    glVertex2d(-20,-100-50);
    glVertex2d(-40,-30-30);
    glVertex2d(22,-40-30);
    glVertex2d(40,-90-50);
    glEnd();

    glBegin(GL_POLYGON); //waterfall to river 9
    glColor3ub(50, 10, 200);
    glVertex2d(-120,-180-50);
    glVertex2d(-20,-100-50);
    glVertex2d(40,-90-50);
    glVertex2d(80,-180-50);
    glEnd();
    glPopMatrix();

    //glBegin(GL_POLYGON); //bottom river
    //glColor3ub(10, 10, 255);
    //glVertex2d(-200,-200-50);
    //glVertex2d(-200,-170-50);
    //glVertex2d(200,-170-50);
    //glVertex2d(200,-200-50);
    //glEnd();

    glPushMatrix();
    glTranslatef(1,-_move1,0); //1st set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(-6,230);
    glVertex2d(-6,215);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2d(-1,222);
    glVertex2d(-1,207);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0255, 0);
    glVertex2f(3.75,228);
    glVertex2f(3.75,213);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.80,0.55,0);
    glTranslatef(0.95,150,0);
    waves();
    glPopMatrix();
}

void house1() //House_1
{
    glLineWidth(3);
	glBegin(GL_POLYGON); //house p1
    glColor3ub(89, 46, 3);
    glVertex2i(-100,30+20);
    glVertex2i(-80,65+20);
    glVertex2i(-75,60+20);
    glVertex2i(-95,27+20);
    glEnd();

    glBegin(GL_POLYGON); //house p2
    glColor3ub(89, 46, 3);
    glVertex2i(-80,65+20);
    glVertex2i(-60,27+20);
    glVertex2i(-55,30+20);
    glVertex2i(-75,65+20);
    glEnd();

    glBegin(GL_POLYGON); //house roof
    glColor3ub(89, 46, 3);
    glVertex2i(-60,65+20);
    glVertex2i(-10,65+20);
    glVertex2i(10,27+20);
    glVertex2i(-75,65+20);
    glEnd();

    glBegin(GL_POLYGON); //house
    glColor3ub(89, 46, 3);
    glVertex2i(-75,65+20);
    glVertex2i(-60,27+20);
    glVertex2i(10,27+20);
    glVertex2i(-75,65+20);
    glEnd();

    glBegin(GL_POLYGON); //house body
    glColor3ub(242, 121, 0);
    glVertex2i(-95,27+20);
    glVertex2i(-76,58+20);
    glVertex2i(-60,27+20);
    glVertex2i(-60,-15+20);
    glVertex2i(-95,-15+20);
    glEnd();

    glBegin(GL_POLYGON); //house body
    glColor3ub(242, 121, 0);
    glVertex2i(-60,27+20);
    glVertex2i(5,27+20);
    glVertex2i(5,-15+20);
    glVertex2i(-60,-15+20);
    glEnd();

    glBegin(GL_POLYGON); //house floor
    glColor3ub(122, 63, 4);
    glVertex2i(-100,-15+20);
    glVertex2i(10,-15+20);
    glVertex2i(10,-20+20);
    glVertex2i(-100,-20+20);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON); //house p1
    glColor3ub(0,0,0);
    glVertex2i(-100,30+20);
    glVertex2i(-80,65+20);
    glVertex2i(-75,60+20);
    glVertex2i(-95,27+20);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

     glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //house p2
    glColor3ub(0,0,0);
    glVertex2i(-80,65+20);
    glVertex2i(-60,27+20);
    glVertex2i(-55,30+20);
    glVertex2i(-75,65+20);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

     glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //house roof
    glColor3ub(0,0,0);
    glVertex2i(-75,65+20);
    glVertex2i(-10,65+20);
    glVertex2i(10,27+20);
    glVertex2i(-53,27+20);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

     glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //house body
    glColor3ub(0,0,0);
    glVertex2i(-95,27+20);
    glVertex2i(-76,58+20);
    glVertex2i(-60,27+20);
    glVertex2i(-60,-15+20);
    glVertex2i(-95,-15+20);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

     glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //house body
    glColor3ub(0,0,0);
    glVertex2i(-60,27+20);
    glVertex2i(5,27+20);
    glVertex2i(5,-15+20);
    glVertex2i(-60,-15+20);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

     glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //house floor
    glColor3ub(0,0,0);
    glVertex2i(-100,-15+20);
    glVertex2i(10,-15+20);
    glVertex2i(10,-20+20);
    glVertex2i(-100,-20+20);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //house window
    glColor3ub(245, 49, 5);
    if(isNight)
        glColor3ub(224, 255, 99);
    glVertex2i(17-100,25);
    glVertex2i(29-100,25);
    glVertex2i(29-100,35);
    glVertex2i(17-100,35);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
     glBegin(GL_POLYGON); //house window border
    glColor3ub(0,0,0);
    glVertex2i(17-100,25);
    glVertex2i(29-100,25);
    glVertex2i(29-100,35);
    glVertex2i(17-100,35);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //house door
    glColor3ub(245, 49, 5);
    glVertex2i(16-50,25-20);
    glVertex2i(30-50,25-20);
    glVertex2i(30-50,45-20);
    glVertex2i(16-50,45-20);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //house door
    glColor3ub(0,0,0);
    glVertex2i(16-50,25-20);
    glVertex2i(30-50,25-20);
    glVertex2i(30-50,45-20);
    glVertex2i(16-50,45-20);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void house2() //House_2
{
        glBegin(GL_POLYGON); //house roof
    glColor3ub(89, 46, 3);
    glVertex2i(-60+30,65+20);
    glVertex2i(-10+30,65+20);
    glVertex2i(-30+30,27+20);
    glVertex2i(-45+30,65+20);
    glEnd();

    glLineWidth(3);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //house roof
    glColor3ub(0,0,00);
    glVertex2i(-60+30,65+20);
    glVertex2i(-10+30,65+20);
    glVertex2i(-30+30,27+20);
    glVertex2i(-45+30,65+20);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //house p1
    glColor3ub(89, 46, 3);
    glVertex2i(-100+100,30+20);
    glVertex2i(-80+100,65+20);
    glVertex2i(-75+100,60+20);
    glVertex2i(-95+100,27+20);
    glEnd();

    glBegin(GL_POLYGON); //house p2 roof
    glColor3ub(89, 46, 3);
    glVertex2i(-80+100,65+20);
    glVertex2i(-60+100,27+20);
    glVertex2i(-55+100,30+20);
    glVertex2i(-75+100,65+20);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //house p1
    glColor3ub(0,0,00);
    glVertex2i(-100+100,30+20);
    glVertex2i(-80+100,65+20);
    glVertex2i(-75+100,60+20);
    glVertex2i(-95+100,27+20);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //house p2 roof
    glColor3ub(0,0,00);
    glVertex2i(-80+100,65+20);
    glVertex2i(-60+100,27+20);
    glVertex2i(-55+100,30+20);
    glVertex2i(-75+100,65+20);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //house body
    glColor3ub(255,0,0);
    glVertex2i(-95+100,27+20);
    glVertex2i(-76+100,58+20);
    glVertex2i(-60+100,27+20);
    glVertex2i(-60+100,-10+20);
    glVertex2i(-95+100,-10+20);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //house body
    glColor3ub(0,0,0);
    glVertex2i(-95+100,27+20);
    glVertex2i(-76+100,58+20);
    glVertex2i(-60+100,27+20);
    glVertex2i(-60+100,-10+20);
    glVertex2i(-95+100,-10+20);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //house floor
    glColor3ub(122, 63, 4);
    glVertex2i(-100+105,-15+25);
    glVertex2i(-60+105,-15+25);
    glVertex2i(-60+105,-20+25);
    glVertex2i(-100+105,-20+25);
    glEnd();

     glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //house floor
    glColor3ub(0,0,0);
    glVertex2i(-100+105,-15+25);
    glVertex2i(-60+105,-15+25);
    glVertex2i(-60+105,-20+25);
    glVertex2i(-100+105,-20+25);
    glEnd();
     glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

     glBegin(GL_POLYGON); //house 2 window
    glColor3ub(0,100,0);
    if(isNight)
        glColor3ub(224, 255, 99);
    glVertex2i(17,30);
    glVertex2i(29,30);
    glVertex2i(29,40);
    glVertex2i(17,40);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
     glBegin(GL_POLYGON); //house 2 window
    glColor3ub(0,00,0);
    glVertex2i(17,30);
    glVertex2i(29,30);
    glVertex2i(29,40);
    glVertex2i(17,40);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void tree_1() //Tree_1
{
    glLineWidth(3);
    glBegin(GL_POLYGON);
    glColor3ub(165,99,60);
    glVertex2i(60,-80);
    glVertex2i(60,00);
    glVertex2i(80,00);
    glVertex2f(80,-80);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,00);
    glVertex2i(60,-80);
    glVertex2i(60,00);
    glVertex2i(80,00);
    glVertex2f(80,-80);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    Circle(18, 40,7,0,176,65);
    CircleBorder(18,40, 7,3);
    Circle(18, 100,7,0,176,65);
    CircleBorder(18,100, 7,3);
    Circle(30, 70,28,0,176,65);
    CircleBorder(30,70, 28,3);
    Circle(10, 63,00,0,176,65);
    CircleBorder(10,63, 00,3);
    Circle(10, 77,00,0,176,65);
    CircleBorder(10,77, 00,3);
    Circle(12, 70,5,0,176,65);
    Circle(15, 48,11,0,176,65);
    Circle(15, 91,12,0,176,65);
}

void tree_2() //Tree_2
{
    glLineWidth(3);
    glBegin(GL_POLYGON);
    glColor3ub(165,99,60);
    glVertex2i(60+60,-80);
    glVertex2i(60+60,00);
    glVertex2i(80+60,00);
    glVertex2f(80+60,-80);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,00);
    glVertex2i(60+60,-80);
    glVertex2i(60+60,00);
    glVertex2i(80+60,00);
    glVertex2f(80+60,-80);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    Circle(18, 40+60,7,0,176,65);
    CircleBorder(18,40+60, 7,3);
    Circle(18, 100+60,7,0,176,65);
    CircleBorder(18,100+60, 7,3);
    Circle(30, 70+60,28,0,176,65);
    CircleBorder(30,70+60, 28,3);
    Circle(10, 63+60,00,0,176,65);
    CircleBorder(10,63+60, 00,3);
    Circle(10, 77+60,00,0,176,65);
    CircleBorder(10,77+60, 00,3);
    Circle(12, 70+60,5,0,176,65);
    Circle(15, 48+60,11,0,176,65);
    Circle(15, 91+60,12,0,176,65);
}

void windmill_1() //Windmill_1
{
    glBegin(GL_POLYGON); //tower
    glColor3ub(184, 82, 18);
    glVertex2d(-20,-60);
    glVertex2d(-20,50);
    glVertex2d(20,50);
    glVertex2d(20,-60);
    glEnd();

    glLineWidth(2);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower border
    glColor3ub(0, 0, 0);
    glVertex2d(-20,-60);
    glVertex2d(-20,50);
    glVertex2d(20,50);
    glVertex2d(20,-60);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //tower head
    glColor3ub(140, 38, 4);
    glVertex2d(-30,50);
    glVertex2d(0,80);
    glVertex2d(30,50);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower head border
    glColor3ub(0, 0, 0);
    glVertex2d(-30,50);
    glVertex2d(0,80);
    glVertex2d(30,50);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //tower door
    glColor3ub(0, 40, 30);
    glVertex2d(-10,-60);
    glVertex2d(-10,-30);
    glVertex2d(10,-30);
    glVertex2d(10,-60);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower door border
    glColor3ub(0, 0, 0);
    glVertex2d(-10,-60);
    glVertex2d(-10,-30);
    glVertex2d(10,-30);
    glVertex2d(10,-60);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //tower window
    glColor3ub(158, 172, 176);
    if(isNight)
        glColor3ub(224, 255, 99);
    glVertex2d(-5,-60+50);
    glVertex2d(-5,-50+50);
    glVertex2d(5,-50+50);
    glVertex2d(5,-60+50);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower window 1 border
    glColor3ub(0, 0, 0);
    glVertex2d(-5,-60+50);
    glVertex2d(-5,-50+50);
    glVertex2d(5,-50+50);
    glVertex2d(5,-60+50);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //tower window
    glColor3ub(158, 172, 176);
    if(isNight)
        glColor3ub(224, 255, 99);
    glVertex2d(-5,-60+70);
    glVertex2d(-5,-50+70);
    glVertex2d(5,-50+70);
    glVertex2d(5,-60+70);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower window 2 border
    glColor3ub(0, 0, 0);
    glVertex2d(-5,-60+70);
    glVertex2d(-5,-50+70);
    glVertex2d(5,-50+70);
    glVertex2d(5,-60+70);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //tower window
    glColor3ub(158, 172, 176);
    if(isNight)
        glColor3ub(224, 255, 99);
    glVertex2d(-5,-60+90);
    glVertex2d(-5,-50+90);
    glVertex2d(5,-50+90);
    glVertex2d(5,-60+90);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower window 3 border
    glColor3ub(0, 0, 0);
    glVertex2d(-5,-60+90);
    glVertex2d(-5,-50+90);
    glVertex2d(5,-50+90);
    glVertex2d(5,-60+90);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,63,0.0f);
	glRotatef(_angle1, 0.0f, 0.0f,-1.0f);
    glTranslatef(-0,-63,0.0f);

    glBegin(GL_POLYGON); //horizontal line
    glColor3ub(10, 0, 0);
    glVertex2d(-80,0+60);
    glVertex2d(80,0+60);
    glVertex2d(80,6+60);
    glVertex2d(-80,6+60);
    glEnd();

    glBegin(GL_POLYGON); //red sails
    glColor3ub(200, 0, 0);
    glVertex2d(-80,6+60);
    glVertex2d(-80,26+70);
    //glVertex2d(-20,26+60);
    glVertex2d(-5,6+60);
    glEnd();

    glBegin(GL_POLYGON); //blue sails
    glColor3ub(0, 0, 200);
    glVertex2d(80,0+60);
    glVertex2d(80,-20+50);
    //glVertex2d(20,-20+60);
    glVertex2d(5,0+60);
    glEnd();

    glBegin(GL_POLYGON); //vertical line
    glColor3ub(10, 0, 0);
    glVertex2d(0-3,-80+60);
    glVertex2d(0-3,80+60);
    glVertex2d(6-3,80+60);
    glVertex2d(6-3,-80+60);
    glEnd();

    glBegin(GL_POLYGON); //yellow sails
    glColor3ub(251, 255, 0);
    glVertex2d(6-3,80+60);
    glVertex2d(36-3,80+60);
    //glVertex2d(26-3,20+60);
    glVertex2d(6-3,5+60);
    glEnd();

    glBegin(GL_POLYGON); //green sails
    glColor3ub(0, 200, 0);
    glVertex2d(0-3,-80+60);
    glVertex2d(-30-3,-80+60);
    //glVertex2d(-20-3,-20+60);
    glVertex2d(0-3,60);
    glEnd();

    Circle(5,0,63,118, 13, 252);
    CircleBorder(5,0,63,2);
    glPopMatrix();
}

void windmill_2() //Windmill_2
{
    glBegin(GL_POLYGON); //tower
    glColor3ub(255, 189, 8);
    glVertex2d(-20,-60);
    glVertex2d(-20,50);
    glVertex2d(20,50);
    glVertex2d(20,-60);
    glEnd();

    glLineWidth(2);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower border
    glColor3ub(0, 0, 0);
    glVertex2d(-20,-60);
    glVertex2d(-20,50);
    glVertex2d(20,50);
    glVertex2d(20,-60);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //tower head
    glColor3ub(5, 163, 242);
    glVertex2d(-30,50);
    glVertex2d(0,80);
    glVertex2d(30,50);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower head border
    glColor3ub(0, 0, 0);
    glVertex2d(-30,50);
    glVertex2d(0,80);
    glVertex2d(30,50);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //tower door
    glColor3ub(0, 40, 30);
    glVertex2d(-10,-60);
    glVertex2d(-10,-30);
    glVertex2d(10,-30);
    glVertex2d(10,-60);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower door border
    glColor3ub(0, 0, 0);
    glVertex2d(-10,-60);
    glVertex2d(-10,-30);
    glVertex2d(10,-30);
    glVertex2d(10,-60);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //tower window
    glColor3ub(158, 172, 176);
    if(isNight)
        glColor3ub(224, 255, 99);
    glVertex2d(-5,-60+50);
    glVertex2d(-5,-50+50);
    glVertex2d(5,-50+50);
    glVertex2d(5,-60+50);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower window 1 border
    glColor3ub(0, 0, 0);
    glVertex2d(-5,-60+50);
    glVertex2d(-5,-50+50);
    glVertex2d(5,-50+50);
    glVertex2d(5,-60+50);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //tower window
    glColor3ub(158, 172, 176);
    if(isNight)
        glColor3ub(224, 255, 99);
    glVertex2d(-5,-60+70);
    glVertex2d(-5,-50+70);
    glVertex2d(5,-50+70);
    glVertex2d(5,-60+70);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower window 2 border
    glColor3ub(0, 0, 0);
    glVertex2d(-5,-60+70);
    glVertex2d(-5,-50+70);
    glVertex2d(5,-50+70);
    glVertex2d(5,-60+70);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_POLYGON); //tower window
    glColor3ub(158, 172, 176);
    if(isNight)
        glColor3ub(224, 255, 99);
    glVertex2d(-5,-60+90);
    glVertex2d(-5,-50+90);
    glVertex2d(5,-50+90);
    glVertex2d(5,-60+90);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON); //tower window 3 border
    glColor3ub(0, 0, 0);
    glVertex2d(-5,-60+90);
    glVertex2d(-5,-50+90);
    glVertex2d(5,-50+90);
    glVertex2d(5,-60+90);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,63,0.0f);
	glRotatef(_angle2, 0.0f, 0.0f,-1.0f);
    glTranslatef(-0,-63,0.0f);

    glBegin(GL_POLYGON); //horizontal line
    glColor3ub(10, 0, 0);
    glVertex2d(-80,0+60);
    glVertex2d(80,0+60);
    glVertex2d(80,6+60);
    glVertex2d(-80,6+60);
    glEnd();

    glBegin(GL_POLYGON); //red sails
    glColor3ub(200, 0, 0);
    glVertex2d(-80,6+60);
    glVertex2d(-80,26+70);
    //glVertex2d(-20,26+60);
    glVertex2d(-5,6+60);
    glEnd();

    glBegin(GL_POLYGON); //blue sails
    glColor3ub(0, 0, 200);
    glVertex2d(80,0+60);
    glVertex2d(80,-20+50);
    //glVertex2d(20,-20+60);
    glVertex2d(5,0+60);
    glEnd();

    glBegin(GL_POLYGON); //vertical line
    glColor3ub(10, 0, 0);
    glVertex2d(0-3,-80+60);
    glVertex2d(0-3,80+60);
    glVertex2d(6-3,80+60);
    glVertex2d(6-3,-80+60);
    glEnd();

    glBegin(GL_POLYGON); //yellow sails
    glColor3ub(251, 255, 0);
    glVertex2d(6-3,80+60);
    glVertex2d(36-3,80+60);
    //glVertex2d(26-3,20+60);
    glVertex2d(6-3,5+60);
    glEnd();

    glBegin(GL_POLYGON); //green sails
    glColor3ub(0, 200, 0);
    glVertex2d(0-3,-80+60);
    glVertex2d(-30-3,-80+60);
    //glVertex2d(-20-3,-20+60);
    glVertex2d(0-3,60);
    glEnd();

    Circle(5,0,63,118, 13, 252);
    CircleBorder(5,0,63,2);
    glPopMatrix();
}

void rotate_1(int value)  //rotates left windmill //Windmill_1_animation
{
    _angle1+=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay();

	glutTimerFunc(10, rotate_1, 0);
}

void rotate_2(int value)  //rotates right windmill //Windmill_2_animation
{
    _angle2+=3.0f;
    if(_angle2 > 360.0)
    {
        _angle2-=360;
    }
	glutPostRedisplay();

	glutTimerFunc(10, rotate_2, 0);
}

void mountainRange() //MountainRange
{
    glBegin(GL_TRIANGLES); //mountain1
    glColor3ub(29, 143, 0);
    glVertex2d(-290,177);
    glVertex2d(-250,220);
    glVertex2d(-210,177);
    glEnd();

    glBegin(GL_TRIANGLES); //mountain2
    glColor3ub(29, 143, 0);
    glVertex2d(-250,177);
    glVertex2d(-210,240);
    glVertex2d(-170,177);
    glEnd();

    glBegin(GL_TRIANGLES); //mountain3
    glColor3ub(29, 143, 0);
    glVertex2d(-200,177);
    glVertex2d(-160,230);
    glVertex2d(-120,177);
    glEnd();

    glBegin(GL_TRIANGLES); //mountain4
    glColor3ub(29, 143, 0);
    glVertex2d(-140-20,177);
    glVertex2d(-100-20,240);
    glVertex2d(-60-20,177);
    glEnd();

    glBegin(GL_TRIANGLES); //mountain5
    glColor3ub(29, 143, 0);
    glVertex2d(-90-10,177);
    glVertex2d(-60-10,220);
    glVertex2d(-30-10,177);
    glEnd();

    glBegin(GL_TRIANGLES); //mountain6
    glColor3ub(29, 143, 0);
    glVertex2d(-40-10,177);
    glVertex2d(-10-10,210);
    glVertex2d(20-10,177);
    glEnd();

    glBegin(GL_TRIANGLES); //mountain7
    glColor3ub(29, 143, 0);
    glVertex2d(10,177);
    glVertex2d(40,220);
    glVertex2d(70,177);
    glEnd();

    glBegin(GL_TRIANGLES); //mountain8
    glColor3ub(29, 143, 0);
    glVertex2d(70,177);
    glVertex2d(100,225);
    glVertex2d(130,177);
    glEnd();

    glBegin(GL_TRIANGLES); //mountain9
    glColor3ub(29, 143, 0);
    glVertex2d(110,177);
    glVertex2d(150,230);
    glVertex2d(190,177);
    glEnd();

    glBegin(GL_TRIANGLES); //mountain10
    glColor3ub(29, 143, 0);
    glVertex2d(175,177);
    glVertex2d(205,210);
    glVertex2d(235,177);
    glEnd();

    glBegin(GL_TRIANGLES); //mountain11
    glColor3ub(29, 143, 0);
    glVertex2d(225,177);
    glVertex2d(255,220);
    glVertex2d(275,177);
    glEnd();
}

void display()
{
    //glClearColor(0.7f, 0.7f, 0.65f, 1.0f);
    //glClearColor(0.53f, 0.809f, 0.92f, 1.0f);
    //glClear(GL_COLOR_BUFFER_BIT);

    //glPushMatrix();
    //glTranslatef(0,moveSun,0);
    //Circle(15, 0, 220, 255, 251, 5 );
    //glPopMatrix();

    mountainRange();

    glLineWidth(3);
    glBegin(GL_LINES); //mountain range foot
    glColor3ub(0, 0, 0);
    glVertex2f(-250,177);
    glVertex2f(250,177);
    glEnd();

    glBegin(GL_POLYGON); //grass
    glColor3ub(17, 138, 67);
    glVertex2f(-250,177);
    glVertex2f(250,177);
    glVertex2f(250,-250);
    glVertex2f(-250,-250);
    glEnd();

    glPushMatrix();
    glTranslatef(70,15,0); //moving the mountain with waterfall
    glScalef(0.9,0.9,0);
    waterfall();
    //waves();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(210,30,0); //moving the village
    glScalef(0.75,0.75,0);

    glPushMatrix();
    glTranslatef(-155,90,0);
    glScalef(0.9,1,0);
    tree_1();  //left tree
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-90,90,0);
    glScalef(0.8,1,0);
    tree_2();  //right tree
    glPopMatrix();

    house2();
    house1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(215,175,0); //moving the right windmill
    glScalef(0.4,0.4,0);
    windmill_2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(145,175,0); //moving the left windmill
    glScalef(0.4,0.4,0);
    windmill_1();
    glPopMatrix();

    //axis();
    //glutSwapBuffers();
    glFlush();
}

void moon() //Moon
{
    Circle(10, 0, 220, 200, 200, 200);
}

void displayNight()
{
    isNight = true;
    glClearColor(0.0f, 0.0f, 0.f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPointSize(2);
    glBegin(GL_POINTS);

    glColor3ub(255, 255, 255);
    glVertex2d(170,230);
    glVertex2d(180,246);
    glVertex2d(200,210);
    glVertex2d(220,220);
    glVertex2d(150,240);
    glVertex2d(120,210);
    glVertex2d(80,230);
    glVertex2d(70,240);
    glVertex2d(50,230);
    glVertex2d(30,210);
    glVertex2d(0,200);
    glVertex2d(-20,230);
    glVertex2d(-40,220);
    glVertex2d(-70,240);
    glVertex2d(-90,230);
    glVertex2d(-130,240);
    glVertex2d(-165,230);
    glVertex2d(-175,220);
    glVertex2d(-190,240);
    glVertex2d(-220,230);
    glVertex2d(-240,220);
    glEnd();

    glPushMatrix();
    glTranslatef(0,moveMoon,0);
    moon();
    glPopMatrix();

    display();
    glutPostRedisplay();
    //glFlush();
}

void sun() //Sun
{
    Circle(15, 0, 220, 255, 251, 5 );
}

void displayDay()
{
    isNight = false;
    //glClearColor(0.7f, 0.7f, 0.65f, 1.0f);
    glClearColor(0.53f, 0.809f, 0.92f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(0,moveSun,0);
    sun();
    glPopMatrix();

    display();
    glutPostRedisplay();
    //glFlush();
}

void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
	{
case 'D':
    moveSun = -60;
    glutDisplayFunc(displayDay);
    displayDay();
    break;
case 'N':
    moveMoon = -50;
    glutDisplayFunc(displayNight);
    displayNight();
    break;
glutPostRedisplay();
	}
}

int main(int argc, char** argv)
{
            glutInit(&argc, argv);
            glutInitWindowSize(1100, 825);
            glutCreateWindow("Final Project");
            glutDisplayFunc(displayDay);
            gluOrtho2D(-250,250,-250,250);

            glutKeyboardFunc(handleKeypress);

            glutTimerFunc(20, waveUpdate, 0);
            glutTimerFunc(20, sunUpdateRise, 0);
             glutTimerFunc(20, moonUpdateRise, 0);
            glutTimerFunc(20, rotate_1, 0);
            glutTimerFunc(20, rotate_2, 0);

            glutMainLoop();
            return 0;
}

