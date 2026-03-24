//#include <GLUT/glut.h>
//#include <OpenGL/gl.h>
//#include <OpenGL/glu.h>
//#include <stdio.h>
//#include <iostream>
//void RenderScene(void)
//{
//    std::cout << "RenderScene" << std::endl;
//
//    glClear(GL_COLOR_BUFFER_BIT); //실제 화면 지우기 위해서 glClear 함수 사용
//
//    glFlush();
//}
//
//void SetupRC(void) {
//
//    std::cout << "SetupRC" << std::endl;
//    glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // RGB 순서대로임 (빨강, 초록, 파랑)
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(640, 480);
//    glutInitWindowPosition(100, 100);
//    glutCreateWindow("simple"); //창 이름 의미
//
//    SetupRC(); // 정해진 함수 이름은 아님
//    glutDisplayFunc(RenderScene); //glutDisplayFunc(func) -> func함수를 호출하는 콜백함수, 창의 이동/크기 변경 될 때마다 호출됨
//
//    glutMainLoop();
//
//}
