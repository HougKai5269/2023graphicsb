///#include <bits/stdc++.h>函式庫是一個包含近乎90%函式的一個函示庫(剛好這就是其中10%)母湯用
#include <GL/glut.h> ///(For Windows)
///#include <GLUT/glut.h>(For Mac OS)
float X=0,Y=0,Z=0; ///使用全域變數
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清除背景
    glPushMatrix();///備份矩陣
        glTranslatef(X,Y,Z);  ///照著當下的X,Y,Z軸來移動位置
        glutSolidTeapot( 0.3 ); ///畫出實心的茶壺
    glPopMatrix();///還原矩陣

    glutSwapBuffers();  ///交換顯示出來
}
void mouse(int button,int sate,int x,int y)
{
    X=+(x-150)/150.0;
    Y=-(y-150)/150.0;
}
int main(int argc,char *argv[]) ///這個main()括號裡的程式碼可以程式讀取小黑內容
{
    glutInit(&argc, argv); ///啟用GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///GLUT顯示模式
    glutCreateWindow("Week03-2_GLUT_使用滑鼠滾動Translate"); ///要建立一個視窗,這是他的名稱
    glutMouseFunc(mouse); ///啟用滑鼠的函示
    glutDisplayFunc(display); ///要顯示的函示 display()
    glutMainLoop();  ///主迴圈卡在後面
}
