#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
glClearColor(0, 0, 0, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(30);

glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2i(0,80);
glVertex2i(60,30);
glVertex2i(-60,30);
glEnd();

glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2i(0,-20);
glVertex2i(25,-40);
glVertex2i(-25,-40);
glEnd();

glBegin(GL_POINTS);
glColor3f(0,0,1);
glVertex2i(75,-70);
glVertex2i(-75,-70);
glEnd();


glFlush(); // Render now
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutInitWindowSize(720, 720); // Set the window's initial width & height
glutCreateWindow("pretty colors"); // Create a window with the given title
glutDisplayFunc(display); // Register display callback handler for window re-paint
gluOrtho2D(-100,100,-100,100);
glutMainLoop(); // Enter the event-processing loop
return 0;
}
