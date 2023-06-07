///#include <bits/stdc++.h>函式庫是一個包含近乎90%函式的一個函示庫(剛好這就是其中10%)母湯用
#include <GL/glut.h> ///(For Windows)
///#include <GLUT/glut.h>(For Mac OS)
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,0,0); ///紅色茶壺
    glPushMatrix();///備份矩陣
        glRotatef(angle,0,0,1);  ///"先"旋轉angle度茶壺
        glTranslatef(0.8,0,0);  ///"後"移到右邊的
        glutSolidTeapot( 0.3 ); ///畫出實心的茶壺
    glPopMatrix();///還原矩陣

    glColor3f(0,1,0); ///綠色茶壺
    glPushMatrix();///備份矩陣
        glTranslatef(0.8,0,0);  ///"先"移到右邊的
        glRotatef(angle*1.5,0,0,1);  ///"後"旋轉angle度茶壺
        glutSolidTeapot( 0.3 ); ///畫出實心的茶壺
    glPopMatrix();///還原矩陣

    glutSwapBuffers();  ///交換顯示出來
    angle++;
}
int main(int argc,char *argv[]) ///這個main()括號裡的程式碼可以程式讀取小黑內容
{
    glutInit(&argc, argv); ///啟用GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///GLUT顯示模式
    glutCreateWindow("Week04-3_GLUT_旋轉跟移動"); ///要建立一個視窗,這是他的名稱
    glutDisplayFunc(display); ///要顯示的函示 display()
    glutIdleFunc(display);
    glutMainLoop();  ///主迴圈卡在後面
}
