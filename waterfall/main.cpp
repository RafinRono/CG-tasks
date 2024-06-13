#include <windows.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>

float moveWaterfall = 3.0f;
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

void update1(int value) {

    _move1+=3.25;
    if(_move1 > 28)
    {
        _move1=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update1, 0);
}

void update2(int value) {

    _move2+=.8f;
    if(_move2 > 4.75)
    {
        _move2=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update2, 0);
}

void update3(int value) {

    _move3+=.8f;
    if(_move3 > 4)
    {
        _move3=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update3, 0);
}

void update4(int value) {

    _move4+=.85f;
    if(_move4 > 9)
    {
        _move4=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update4, 0);
}

void update5(int value) {

    _move5+=1.2f;
    if(_move5 > 15)
    {
        _move5=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update5, 0);
}

void update6(int value) {

    _move6+=1.0f;
    if(_move6 > 20)
    {
        _move6=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update6, 0);
}

void update7(int value) {

    _move7+=1.0f;
    if(_move7 > 20)
    {
        _move7=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update7, 0);
}

void update8(int value) {

    _move8+=1.19;
    if(_move8 > 20)
    {
        _move8=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update8, 0);
}

void update9(int value) {

    _move9+=1.05;
    if(_move9 > 20)
    {
        _move9=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update9, 0);
}

void update10(int value) {

    _move10+=1.15f;
    if(_move10 > 35)
    {
        _move10=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update10, 0);
}


void mountain()
{
    glBegin(GL_POLYGON); //mountain left
    glColor3ub(10, 200, 10);
    glVertex2d(-50,90+90);
    glVertex2d(-10,190+50);
    glVertex2d(0,180+50);
    glVertex2d(0,90+90);
    glEnd();

    glBegin(GL_POLYGON); //mountain right
    glColor3ub(10, 200, 10);
    glVertex2d(0,180+50);
    glVertex2d(10,180+50);
    glVertex2d(10,190+50);
    glVertex2d(50,90+90);
    glVertex2d(0,90+90);
    glEnd();

    glBegin(GL_POLYGON); //waterfall
    glColor3ub(10, 10, 255);
    glVertex2d(-9,190-12);
    glVertex2d(-9,190+49);
    glVertex2d(0,180+53);
    glVertex2d(9,190+49);
    glVertex2d(9,190-12);
    glEnd();

    glBegin(GL_POLYGON); //river
    glColor3ub(10, 10, 255);
    glVertex2d(-200,-200-50);
    glVertex2d(-200,-170-50);
    glVertex2d(200,-170-50);
    glVertex2d(200,-200-50);
    glEnd();

    glBegin(GL_POLYGON); //waterfall 1
    glColor3ub(50, 10, 200);
    glVertex2d(-14,165);
    glVertex2d(-9,190-12);
    glVertex2d(9,190-12);
    glVertex2d(6,184-18);
    glEnd();

    glBegin(GL_POLYGON); //waterfall 2
    glColor3ub(50, 10, 200);
    glVertex2d(-4,184-30);
    glVertex2d(-14,165);
    glVertex2d(6,184-18);
    glVertex2d(15,184-30);
    glEnd();

    glBegin(GL_POLYGON); //waterfall 3
    glColor3ub(50, 10, 200);
    glVertex2d(-18,165-30);
    glVertex2d(-4,184-30);
    glVertex2d(15,184-30);
    glVertex2d(7,184-48);
    glEnd();

    glBegin(GL_POLYGON); //waterfall 4
    glColor3ub(50, 10, 200);
    glVertex2d(-5,160-50);
    glVertex2d(-18,165-30);
   glVertex2d(7,184-48);
    glVertex2d(20,160-50);
    glEnd();

    glBegin(GL_POLYGON); //waterfall 5
    glColor3ub(50, 10, 200);
    glVertex2d(-45,120-50);
    glVertex2d(-5,160-50);
    glVertex2d(20,160-50);
    glVertex2d(7,120-50);
    glEnd();

    glBegin(GL_POLYGON); //waterfall 6
    glColor3ub(50, 10, 200);
    glVertex2d(0,40-50);
    glVertex2d(-45,120-50);
    glVertex2d(7,120-50);
    glVertex2d(55,45-50);
    glEnd();

    glBegin(GL_POLYGON); //waterfall 7
    glColor3ub(50, 10, 200);
    glVertex2d(-40,-30-50);
    glVertex2d(0,40-50);
    glVertex2d(55,45-50);
    glVertex2d(30,-40-50);
    glEnd();

    glBegin(GL_POLYGON); //waterfall 8
    glColor3ub(50, 10, 200);
    glVertex2d(-20,-100-50);
    glVertex2d(-40,-30-50);
    glVertex2d(30,-40-50);
    glVertex2d(50,-90-50);
    glEnd();

    glBegin(GL_POLYGON); //waterfall 9
    glColor3ub(50, 10, 200);
    glVertex2d(-120,-180-50);
    glVertex2d(-20,-100-50);
    glVertex2d(50,-90-50);
    glVertex2d(20,-180-50);
    glEnd();
}

void updateWaterfall(int value) {

    moveWaterfall+=3.25;
    if(moveWaterfall > 28)
    {
        moveWaterfall=-4;
    }
	glutPostRedisplay();

	glutTimerFunc(20, updateWaterfall, 0);
}

void damWaterfall()
{
    glBegin(GL_POLYGON); //waterfall
    glColor3ub(10, 10, 255);
    glVertex2d(-9,190-12);
    glVertex2d(-9,190+49);
    glVertex2d(0,180+56);
    glVertex2d(9,190+49);
    glVertex2d(9,190-12);

    glEnd();

    glPushMatrix();
    glTranslatef(1,-_move1,0); //1st set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 200, 200);
    glVertex2d(-7,230);
    glVertex2d(-7,215);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 200, 200);
    glVertex2d(-2,222);
    glVertex2d(-2,207);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 200, 200);
    glVertex2f(3.75,228);
    glVertex2f(3.75,213);
    glEnd();

    glPopMatrix();
}

void display()
{
    glClearColor(0.7f, 0.7f, 0.65f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    mountain();

     glPushMatrix();
    glTranslatef(1,-_move1,0); //1st set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 200, 200);
    glVertex2d(-7,230);
    glVertex2d(-7,215);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 200, 200);
    glVertex2d(-2,222);
    glVertex2d(-2,207);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 200, 200);
    glVertex2f(3.75,228);
    glVertex2f(3.75,213);
    glEnd();

    glPopMatrix();
    glPushMatrix();

    glTranslatef(-_move2,-_move2,0); //2nd set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(-5,148+25);
    glVertex2f(-6.5,143+25);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(3.75,148+25);
    glVertex2d(2.75,143+25);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(1,-_move3,0); //3rd set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(-1,175-14);
    glVertex2d(1,172-14);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(4,175-14);
    glVertex2d(6,172-14);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(-_move4,-_move4,0); //4th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-0.15,148+2.75);
    glVertex2f(-2.5,143+2.75);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(7,148+2.75);
    glVertex2f(5.45,143+2.75);
    glEnd();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(1,-_move5,0); //5th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(-1,175-45);
    glVertex2d(1,162-45);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(4,175-45);
    glVertex2d(7,161-45);
    glEnd();

    glPopMatrix();
    glPushMatrix();

    glTranslatef(-_move6,-_move6,0); //6th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(-5,148-50);
    glVertex2d(-15,130-50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(5,148-50);
    glVertex2d(-2,130-50);
    glEnd();

    glPopMatrix();
    glPushMatrix();

    glTranslatef(_move7,-_move7,0); //7th set of waves
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(-30,108-50);
    glVertex2d(-15,80-50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(0,105-50);
    glVertex2d(17,75-50);
    glEnd();

    glPopMatrix();
    glPushMatrix();

    glTranslatef(-_move8,-_move8,0); //8th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(10,25-50);
    glVertex2d(-5,-8-50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(42,32-50);
    glVertex2f(32.3,-1-50);
    glEnd();

    glPopMatrix();
    glPushMatrix();

    glTranslatef(_move9,-_move9,0); //9th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(-27,-35-50);
    glVertex2d(-15,-70-50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(5,-45-50);
    glVertex2d(18,-80-50);
    glEnd();

    glPopMatrix();
    glPushMatrix();

    glTranslatef(-_move10,-_move10,0); //10th set of waves

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(-10,-110-50);
    glVertex2d(-35,-140-50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2d(32,-110-50);
    glVertex2f(22.3,-140-50);
    glEnd();

    glPopMatrix();

    //glPushMatrix();
    //glTranslatef(-100,0,0);
    //damWaterfall();
    //glPopMatrix();

    glutSwapBuffers();
    glFlush();
}

int main(int argc, char** argv)
{
            glutInit(&argc, argv);
            glutInitWindowSize(1000, 1000);
            glutCreateWindow("Waterfall");
            glutDisplayFunc(display);
            gluOrtho2D(-250,250,-250,250);

            glutTimerFunc(20, update1, 0);
            glutTimerFunc(20, update2, 0);
            glutTimerFunc(20, update3, 0);
            glutTimerFunc(20, update4, 0);
            glutTimerFunc(20, update5, 0);
            glutTimerFunc(20, update6, 0);
            glutTimerFunc(20, update7, 0);
            glutTimerFunc(20, update8, 0);
            glutTimerFunc(20, update9, 0);
            glutTimerFunc(20, update10, 0);
            glutTimerFunc(20, updateWaterfall, 0);

            glutMainLoop();
            return 0;
}





