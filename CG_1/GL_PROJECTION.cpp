#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <stdio.h>
#include <iostream>

void RenderScene(void){
   std::cout << "RenderScene" <<std::endl;
   
   glClear(GL_COLOR_BUFFER_BIT);
   
   glViewport(0,0,500,500);
   
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   
   glOrtho(-1,1,-1,1,1,-1);
   
   glColor3f(1.0f, 0.0f, 0.0f);
   glRectf(-0.25f, 0.25f, 0.25f, -0.25f);
   
   glutSwapBuffers();
}

void SetupRC(void){
   std::cout << "SetupRC" << std::endl;
   glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
}

int main(int argc, char** argv){
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(640,480);
   glutInitWindowPosition(500,500);
   glutCreateWindow("simple");
   
   SetupRC();
   glutDisplayFunc(RenderScene);
   
   glutMainLoop();
}
