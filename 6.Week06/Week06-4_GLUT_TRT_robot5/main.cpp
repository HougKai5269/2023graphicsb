///全部範例程式碼刪除換上Week05-1_GLUT_旋轉
///#include <bits/stdc++.h>函式庫是一個包含近乎90%函式的一個函示庫(剛好這就是其中10%)母湯用
#include <GL/glut.h> ///(For Windows)
///#include <GLUT/glut.h>(For Mac OS)
float angle = 0;
void myCube()
{
    glPushMatrix();///備份矩陣
        glScalef(1,0.3,0.3);
        glutSolidCube(0.5);
    glPopMatrix();///還原矩陣
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSolidSphere(0.01,30,30);

    glPushMatrix();///備份矩陣
        glTranslatef(0.25,0,0);  ///掛到右上角去
        glRotatef(angle,0,0,1);   ///轉動他
        glTranslatef(0.25,0,0);   ///向右移動0.25,讓關節在正中心
        myCube();
        glPushMatrix();///備份矩陣
            glTranslatef(0.25,0,0);  ///掛到右上角去
            glRotatef(angle,0,0,1);   ///轉動他
            glTranslatef(0.25,0,0);   ///向右移動0.25,讓關節在正中心
            myCube();
        glPopMatrix();///還原矩陣
    glPopMatrix();///還原矩陣

    glPushMatrix();///備份矩陣
        glTranslatef(-0.25,0,0);  ///掛到右上角去
        glRotatef(-angle,0,0,1);   ///轉動他
        glTranslatef(-0.25,0,0);   ///向右移動0.25,讓關節在正中心
        myCube();
        glPushMatrix();///備份矩陣
            glTranslatef(-0.25,0,0);  ///掛到右上角去
            glRotatef(-angle,0,0,1);   ///轉動他
            glTranslatef(-0.25,0,0);   ///向右移動0.25,讓關節在正中心
            myCube();
        glPopMatrix();///還原矩陣
    glPopMatrix();///還原矩陣

    glutSwapBuffers();  ///交換顯示出來
    ///angle++;
}
void motion(int x,int y)
{
    angle=x;
}
int main(int argc,char *argv[]) ///這個main()括號裡的程式碼可以程式讀取小黑內容
{
    glutInit(&argc, argv); ///啟用GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///GLUT顯示模式
    glutCreateWindow("Week04-3_GLUT_旋轉跟移動"); ///要建立一個視窗,這是他的名稱
    glutMotionFunc(motion);
    glutDisplayFunc(display); ///要顯示的函示 display()
    glutIdleFunc(display);
    glutMainLoop();  ///主迴圈卡在後面
}
