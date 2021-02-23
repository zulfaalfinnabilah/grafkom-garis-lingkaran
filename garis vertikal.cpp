#include <GL/glut.h>
#include <math.h>

void display(void)
{
glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
glClear (GL_COLOR_BUFFER_BIT);
glPushMatrix ();
glColor3f(1,1,1);
glBegin(GL_LINES);
glVertex3f(0.10,10.0,13.13);
glVertex3f(0,0,0.0);
glEnd ();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("GARIS");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
