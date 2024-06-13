
#include <windows.h>
#include<GL/gl.h>
#include <GL/glut.h>

float _move1 = 0.0f;
float speed1 = 0.0f;

void update1(int value) {

    _move1+=speed1;
    if(_move1 > 300)
    {
        _move1=-300;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update1, 0);
}

float _move2 = 0.0f;
float speed2 = 0.0f;

void update2(int value) {

    _move2-=speed2;
    if(_move2 < -300)
    {
        _move2=+300;
    }
	glutPostRedisplay();

	glutTimerFunc(20, update2, 0);
}

void red()
{
    glPushMatrix();
    glTranslatef(_move1,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2d(-100,80);
    glVertex2d(100,80);
    glVertex2d(100,0);
    glVertex2d(-100,0);
    glEnd();

    glLineWidth(5);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(-100,80);
    glVertex2d(100,80);
    glVertex2d(100,0);
    glVertex2d(-100,0);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glPopMatrix();

    glutPostRedisplay();
}

void blue()
{
    glPushMatrix();
    glTranslatef(_move2,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 255);
    glVertex2d(-100,0);
    glVertex2d(100,0);
    glVertex2d(100,-80);
    glVertex2d(-100,-80);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(-100,0);
    glVertex2d(100,0);
    glVertex2d(100,-80);
    glVertex2d(-100,-80);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glPopMatrix();

    glutPostRedisplay();
}

void green()
{
    glPushMatrix();
    glTranslatef(_move2,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0);
    glVertex2d(-150,80);
    glVertex2d(-75,80);
    glVertex2d(-75,-80);
    glVertex2d(-150,-80);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(-150,80);
    glVertex2d(-75,80);
    glVertex2d(-75,-80);
    glVertex2d(-150,-80);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glPopMatrix();

    glutPostRedisplay();
}

void yellow()
{
    glPushMatrix();
    glTranslatef(_move1,0,0);

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2d(75,80);
    glVertex2d(150,80);
    glVertex2d(150,-80);
    glVertex2d(75,-80);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(75,80);
    glVertex2d(150,80);
    glVertex2d(150,-80);
    glVertex2d(75,-80);
    glEnd();
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glPopMatrix();

    glutPostRedisplay();
}

void startDisplay()
{
    glClearColor(0.7f, 0.7f, 0.65f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);

    red();
    blue();
    green();
    yellow();

    glutSwapBuffers();
    glFlush();
}

void handleMouse(int button, int state, int x, int y)
{
        if (button == GLUT_LEFT_BUTTON)
        {
            speed2 += 0.5f;
        }
        if (button == GLUT_RIGHT_BUTTON)
        {
            speed1 += 0.5f;
        }
        glutPostRedisplay();
}

int main(int argc, char** argv)
{
            glutInit(&argc, argv);
            glutInitWindowSize(800, 800);
            glutCreateWindow("lab task 6 [22-47226-1]");
            glutDisplayFunc(startDisplay);
            gluOrtho2D(-200,200,-200,200);

            glutTimerFunc(20, update1, 0);
            glutTimerFunc(20, update2, 0);

            glutMouseFunc(handleMouse);

            glutMainLoop();
            return 0;
}
