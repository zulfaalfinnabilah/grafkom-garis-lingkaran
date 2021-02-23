#include <GL/glut.h>
#include<math.h>
int i=0; int j=0;
void lingkaran(int xp, int yp, int r, int n){
    float a,x,y;
    glColor4ub(i,j,0,200);
    glBegin(GL_POLYGON);
        a=6.28/n;
        for (int i=0; i<n; i++){
            x = xp+r * cos(i*a);
            y = yp+r * sin(i*a);
            glVertex2d(x,y);
        }
    glEnd();
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); //untuk membuat opacity
    glColor3ub(255,0,0);
    glBegin(GL_LINES);
        glVertex2d(-500,0);
        glVertex2d(500,0);
        glVertex2d(0,400);
        glVertex2d(0,-400);
    glEnd();

    lingkaran(0,0,100,25);
    i+=20;
    j+=1;
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");

    gluOrtho2D(-500,500,-400,400);


    glutDisplayFunc(display);
    glutIdleFunc(display);

    glClearColor(1,1,1,1);
    glutMainLoop();
}
