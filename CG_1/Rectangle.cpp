//#include <GLUT/glut.h>
//#include <OpenGL/gl.h>
//#include <OpenGL/glu.h>
//#include <stdio.h>
//#include <iostream>
//
//void RenderScene(void)
//{
//    std::cout << "RenderScene" << std::endl;
//    
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0f, 0.0f, 0.0f);
//    glRectf(-0.25f, -0.25f, 0.25f, 0.25f);
//    
//    glutSwapBuffers();
//}
//
//void SetupRC(void){
//    std::cout << "SetupRC" << std::endl;
//    glClearColor(1.0f, 1.0f, 0.0f, 1.0f);
//}
//
//int main(int argc, char** argv){
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//    glutInitWindowSize(500,500);
//    glutInitWindowPosition(400,400);
//    
//    // 오타 수정됨 (Creat -> Create)
//    glutCreateWindow("simple");
//    
//    SetupRC();
//    
//    glutDisplayFunc(RenderScene);
//    glutMainLoop();
//    
//    return 0; // 프로그램의 정상 종료를 위해 return 0; 을 추가해주면 좋습니다.
//}
//
//
