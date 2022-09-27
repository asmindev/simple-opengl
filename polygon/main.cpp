#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();

int main(int argc, char** argv){
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(500,100);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Soal - Polygon");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glutDisplayFunc(display);
    gluOrtho2D(-15.0, 15.0, -15.0, 15.0);

    glutMainLoop();
}

void draw()
{
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);

    glVertex2f(-2.0, -2.0);
    glVertex2f( 2.0, -2.0);
    glVertex2f( 3.0,  1.0);
    glVertex2f( 0.0,  3.0);
    glVertex2f(-3.0,  1.0);

    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINE_STRIP);

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-2.0, -2.0);

    glColor3f(1.0, 0.5, 0.0);
    glVertex2f( 2.0, -2.0);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f( 3.0,  1.0);

    glColor3f(0.0, 1.0, 0.0);
    glVertex2f( 0.0,  3.0);

    glColor3f(0.0, 0.3, 1.0);
    glVertex2f(-3.0,  1.0);

    glColor3f(0.0, 0.7, 1.0);
    glVertex2f(-2.0,  -2.0);

    glEnd();
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    draw();
    glFlush();
}


