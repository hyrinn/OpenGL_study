//
//  teapotexample.cpp
//  test
//
//  Created by 조효린 on 11/15/23.
//

#include <stdio.h>
#include<GLFW/glfw3.h>
#include<GLUT/glut.h>

void MyDisplay()
{
GLfloat valuef[4] = { 0.0,};
GLint valuei [4] = { 0, };
printf ("Before\n");
glGetFloatv(GL_CURRENT_COLOR, valuef) ;
    printf("Color %.2f %.2f %.2f\n", valuef[0], valuef[1], valuef[2]);
    glGetIntegerv(GL_POINT_SIZE, valuei);
    printf( "Point Size %d\n",valuei[0]);
    glGetIntegerv(GL_LINE_WIDTH, valuei);
    printf("Line Width %d\n",valuei[0]);

glColor3f(1.0, 0.0, 0.0);
    glLineWidth(2);
    glPointSize(2);
    printf("After\n");
    glGetFloatv(GL_CURRENT_COLOR, valuef);
    printf("Color %.2f %.2f %.2f\n", valuef[0], valuef[1], valuef[2]);
    glGetIntegerv(GL_POINT_SIZE, valuei);
    printf("Point Size %d\n", valuei[0]);
    glGetIntegerv(GL_LINE_WIDTH, valuei);
    printf("Line Width %d\n", valuei[0]);

    glutWireTeapot(0.2);
    glFlush();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(300,300);
    glutInitWindowPosition(300,300);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Teapot transform");
    glutDisplayFunc(MyDisplay);
    glutMainLoop();
    return 0;
}
