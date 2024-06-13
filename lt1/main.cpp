
#include <windows.h>
#include <GL/glut.h>

void display()
{
            glClearColor(1, 1, 1, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
            glPointSize(30);
            glLineWidth(3);

            glBegin(GL_LINES); //for making the axis
            glColor3f(0, 0, 0);
            glVertex2f(0., 0.);
            glVertex2f(100, 0);
            glVertex2f(0, 0);
            glVertex2f(0, 100);
            glVertex2f(0, 0);
            glVertex2f(-100, 0);
            glVertex2f(0, 0);
            glVertex2f(0, -100);
            glEnd();

            glBegin(GL_POLYGON); //for the purple sideways triangle
            glColor3f(0.502f,0,0.502f);
            glVertex2i(-85, -45);
            glVertex2i(-20, -75);
            glVertex2i(-20, -15);
            glEnd();

            glBegin(GL_POLYGON); //for the red rectangle
            glColor3f(1,0,0);
            glVertex2i(-85, 75);
            glVertex2i(-20, 75);
            glVertex2i(-20, 25);
            glVertex2i(-85,25);
            glEnd();

            glBegin(GL_POLYGON); //for the yellow upwards triangle
            glColor3f(1, 1, 0);
            glVertex2f(50, -15);
            glVertex2f(80, -75);
            glVertex2f(20, -75);
            glEnd();

            glBegin(GL_POLYGON); //for the triangle part of green right arrow
            glColor3f(0.0f, 0.619f, 0.102f);
            glVertex2f(15, 60);
            glVertex2f(65, 60);
            glVertex2f(65, 40);
            glVertex2f(15, 40);
            glEnd();

            glBegin(GL_POLYGON); //for the rectangle part of green right arrow
            glColor3f(0.0f, 0.619f, 0.102f);
            glVertex2f(65, 70);
            glVertex2f(80, 50);
            glVertex2f(65, 30);
            glEnd();

            glFlush();
}

int main(int argc, char** argv)
{
            glutInit(&argc, argv);
            glutInitWindowSize(720, 720);
            glutInitWindowPosition(620, 150);
            glutCreateWindow("lab task 1 [22-47226-1]");
            glutDisplayFunc(display);
            gluOrtho2D(-100,100,-100,100);
            glutMainLoop();
            return 0;
}
