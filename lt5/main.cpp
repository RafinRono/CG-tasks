
#include <windows.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>

float _move1 = 10.0f;
float _angle1 = 0.0f;

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

void update(int value) {

    _angle1+=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay();

	glutTimerFunc(10, update, 0);
}

void tower()
{
    glBegin(GL_POLYGON); //tower
    glColor3ub(184, 82, 18);
    glVertex2d(-20,-60);
    glVertex2d(-20,50);
    glVertex2d(20,50);
    glVertex2d(20,-60);
    glEnd();

    glLineWidth(3);

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

}

void blades()
{
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

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.7f, 0.7f, 0.65f, 1.0f);

    tower();
    blades();

    glutSwapBuffers();
    glFlush();
}

int main(int argc, char** argv)
{
            glutInit(&argc, argv);
            glutInitWindowSize(1000, 1000);
            glutCreateWindow("lab task 5 [22-47226-1]");
            glutDisplayFunc(display);
            gluOrtho2D(-150,150,-150,150);
            glutTimerFunc(20, update, 0);
            glutMainLoop();
            return 0;
}





