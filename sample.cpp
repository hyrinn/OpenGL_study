//
//  sample.cpp
//  test
//
//  Created by 조효린 on 11/15/23.
//

#include<GLFW/glfw3.h>
#include<GL/glut.h>

void MyDisplay(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glutWireTeapot(0.5);
    glFlush();
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Example");
    glutSetWindowTitle("Teapot example");
    glutDisplayFunc(MyDisplay);
    glutMainLoop();
    return 0;

}
