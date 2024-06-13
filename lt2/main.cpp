#include <windows.h>
#include <GL/glut.h>

void display()
{
            glClearColor(1, 1, 0, 0.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            glBegin(GL_POLYGON); //background logo
            glColor3ub(255,255,0);
            glVertex2i(-65,0);
            glVertex2i(-65,20);
            glVertex2i(-50,50);
            glVertex2i(50,50);
            glVertex2i(65,20);
            glVertex2i(65,0);
            glVertex2i(65,-20);
            glVertex2i(50,-50);
            glVertex2i(-50,-50);
            glVertex2i(-65,-20);
            glVertex2i(-65,0);
            glEnd();

            glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
            glLineWidth(6.5);
            glBegin(GL_POLYGON); //background logo
            glColor3ub(0,0,0);
            glVertex2i(-65,0);
            glVertex2i(-65,20);
            glVertex2i(-50,50);
            glVertex2i(50,50);
            glVertex2i(65,20);
            glVertex2i(65,0);
            glVertex2i(65,-20);
            glVertex2i(50,-50);
            glVertex2i(-50,-50);
            glVertex2i(-65,-20);
            glVertex2i(-65,0);
            glEnd();

            glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
            glBegin(GL_POLYGON); //bat head- right
            glColor3ub(0,0,0);
            glVertex2i(0,0);
            glVertex2i(0,12);
            glVertex2f(1.5,12);
            glVertex2i(4,23);
            glVertex2i(4,5);
            glVertex2i(6,5);
            glVertex2i(6,0);
            glEnd();

            glBegin(GL_POLYGON); //bathead-left
            glColor3ub(0,0,0);
            glVertex2i(0,0);
            glVertex2i(0,12);
            glVertex2f(-1.5,12);
            glVertex2i(-4,23);
            glVertex2i(-4,5);
            glVertex2i(-6,5);
            glVertex2i(-6,0);
            glEnd();

            glBegin(GL_POLYGON); //bat wing p1- right
            glColor3ub(0,0,0);
            glVertex2i(6,0);
            glVertex2i(6,5);
            glVertex2f(12,9);
            glVertex2i(18,15);
            glVertex2i(21,25);
            glVertex2i(21,0);
            glEnd();

            glBegin(GL_POLYGON); //bat wing p1- left
            glColor3ub(0,0,0);
            glVertex2i(-6,0);
            glVertex2i(-6,5);
            glVertex2f(-12,9);
            glVertex2i(-18,15);
            glVertex2i(-21,25);
            glVertex2i(-21,0);
            glEnd();

            glBegin(GL_POLYGON); //bat wing p2- right
            glColor3ub(0,0,0);
            glVertex2i(21,25);
            glVertex2i(23,26);
            glVertex2f(60,26);
            glVertex2i(45,8);
            glVertex2i(33,5);
            glVertex2i(21,0);
            glEnd();

            glBegin(GL_POLYGON); //bat wing p2- left
            glColor3ub(0,0,0);
            glVertex2i(-21,25);
            glVertex2i(-23,26);
            glVertex2f(-60,26);
            glVertex2i(-45,8);
            glVertex2i(-33,5);
            glVertex2i(-21,0);
            glEnd();

            glBegin(GL_POLYGON); //bat tail - right
            glColor3ub(0,0,0);
            glVertex2i(0,0);
            glVertex2i(0,-45);
            glVertex2f(4,-22);
            glVertex2i(7,-16);
            glVertex2i(9,-14);
            glVertex2i(11,-12);
            glVertex2i(13,-10);
            glVertex2i(15,-6);
            glVertex2i(15,0);
            glEnd();

           glBegin(GL_POLYGON); //bat tail - left
            glColor3ub(0,0,0);
            glVertex2i(0,0);
            glVertex2i(0,-45);
            glVertex2f(-4,-22);
            glVertex2i(-7,-16);
            glVertex2i(-9,-14);
            glVertex2i(-11,-12);
            glVertex2i(-13,-10);
            glVertex2i(-15,-6);
            glVertex2i(-15,0);
            glEnd();

            glBegin(GL_POLYGON); //bat tail remainder- right
            glColor3ub(0,0,0);
            glVertex2i(15,-6);
            glVertex2i(21,0);
            glVertex2i(15,0);
            glEnd();

            glBegin(GL_POLYGON); //bat tail remainder- left
            glColor3ub(0,0,0);
            glVertex2i(-15,-6);
            glVertex2i(-21,0);
            glVertex2i(-15,0);
            glEnd();

            glFlush();
}

int main(int argc, char** argv)
{
            glutInit(&argc, argv);
            glutInitWindowSize(1000, 600);
            glutCreateWindow("lab task 2 [22-47226-1] - Batman");
            glutDisplayFunc(display);
            gluOrtho2D(-70,70,-70,70);
            glutMainLoop();
            return 0;
}
