///#include <bits/stdc++.h>函式庫是一個包含近乎90%函式的一個函示庫(剛好這就是其中10%)母湯用
#include <GL/glut.h> ///(For Windows)
///#include <GLUT/glut.h>(For Mac OS)
void display()
{
    glColor3f(1,1,0); ///R(Red)G(Green)B(Blue)三原色填寫函式
    glutSolidTeapot( 0.5 ); ///畫出實心的大(0.5)茶壺

    glColor3f(0,1,0); ///R(Red)G(Green)B(Blue)三原色填寫函式
    glutSolidTeapot( 0.3 ); ///畫出實心的小(0.3)茶壺

    glutSwapBuffers();  ///交換顯示出來
}
int main(int argc,char *argv[]) ///這個main()括號裡的程式碼可以程式讀取小黑內容
{
    glutInit(&argc, argv); ///啟用GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///GLUT顯示模式
    glutCreateWindow("Week02-1.2_GLUT_進階茶壺"); ///要建立一個視窗,這是他的名稱
    glutDisplayFunc(display); ///要顯示的函示 display()
    glutMainLoop();  ///主迴圈卡在後面
}
