//#include <bits/stdc++.h>函式庫是一個包含近乎90%函式的一個函示庫(剛好這就是其中10%)母湯用
#include <GL/glut.h> ///(For Windows)
///#include <GLUT/glut.h>(For Mac OS)
void display()
{
    glColor3f(14/255.0,123/255.0,208/255.0);
    glBegin(GL_POLYGON);
    glVertex2f((60-100)/100.0,-(65-100)/100.0);
    glVertex2f((48-100)/100.0,-(87-100)/100.0);
    glVertex2f((71-100)/100.0,-(87-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f((89-100)/100.0,-(65-100)/100.0);
    glVertex2f((78-100)/100.0,-(87-100)/100.0);
    glVertex2f((101-100)/100.0,-(87-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f((119-100)/100.0,-(65-100)/100.0);
    glVertex2f((106-100)/100.0,-(87-100)/100.0);
    glVertex2f((130-100)/100.0,-(87-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f((147-100)/100.0,-(65-100)/100.0);
    glVertex2f((136-100)/100.0,-(87-100)/100.0);
    glVertex2f((159-100)/100.0,-(87-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f((62-100)/100.0,-(61-100)/100.0);
    glVertex2f((74-100)/100.0,-(85-100)/100.0);
    glVertex2f((86-100)/100.0,-(61-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f((91-100)/100.0,-(61-100)/100.0);
    glVertex2f((104-100)/100.0,-(85-100)/100.0);
    glVertex2f((118-100)/100.0,-(61-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f((122-100)/100.0,-(61-100)/100.0);
    glVertex2f((133-100)/100.0,-(85-100)/100.0);
    glVertex2f((143-100)/100.0,-(61-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f((49-100)/100.0,-(92-100)/100.0);
    glVertex2f((76-100)/100.0,-(92-100)/100.0);
    glVertex2f((101-100)/100.0,-(140-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f((78-100)/100.0,-(92-100)/100.0);
    glVertex2f((129-100)/100.0,-(92-100)/100.0);
    glVertex2f((104-100)/100.0,-(140-100)/100.0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f((133-100)/100.0,-(92-100)/100.0);
    glVertex2f((158-100)/100.0,-(92-100)/100.0);
    glVertex2f((106-100)/100.0,-(140-100)/100.0);
    glEnd();

    glutSwapBuffers();  ///交換顯示出來
}
int main(int argc,char *argv[]) ///這個main()括號裡的程式碼可以程式讀取小黑內容
{
    glutInit(&argc, argv); ///啟用GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///GLUT顯示模式
    glutCreateWindow("Week02-3_GLUT_回家作業"); ///要建立一個視窗,這是他的名稱
    glutDisplayFunc(display); ///要顯示的函示 display()
    glutMainLoop();  ///主迴圈卡在後面
}
