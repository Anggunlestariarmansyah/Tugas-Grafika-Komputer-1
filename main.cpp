//titik colorfull

#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void titik()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);

    glPointSize(8.0);
    glBegin(GL_POINTS);

    glColor3f(1.0, 1.0, 1.0);       //white
    glVertex3f(0.4, 0.1, 0.0);
    glColor3f(0.0, 1.0, 1.0);       //cyan
    glVertex3f(0.5, 0.2, 0.0);
    glColor3f(1.0, 1.0, 0.0);       //yellow
    glVertex3f(0.4, 0.3, 0.0);
    glColor3f(0.0, 1.0, 1.0);       //cyan
    glVertex3f(0.5, 0.4, 0.0);
    glColor3f(0.0, 1.0, 0.0);       //green
    glVertex3f(0.4, 0.5, 0.0);
    glColor3f(0.0, 1.0, 1.0);       //cyan
    glVertex3f(0.5, 0.6, 0.0);
    glColor3f(1.0, 0.0, 0.0);       //red
    glVertex3f(0.4, 0.7, 0.0);
    glColor3f(0.0, 1.0, 1.0);       //cyan
    glVertex3f(0.5, 0.8, 0.0);

    glEnd();
    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Point");
    Initialize();
    glutDisplayFunc(titik);
    glutMainLoop();
    return 0;
}
