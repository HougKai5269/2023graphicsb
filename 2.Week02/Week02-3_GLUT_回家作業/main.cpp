//#include <bits/stdc++.h>�禡�w�O�@�ӥ]�t��G90%�禡���@�Ө�ܮw(��n�o�N�O�䤤10%)������
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

    glutSwapBuffers();  ///�洫��ܥX��
}
int main(int argc,char *argv[]) ///�o��main()�A���̪��{���X�i�H�{��Ū���p�¤��e
{
    glutInit(&argc, argv); ///�ҥ�GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///GLUT��ܼҦ�
    glutCreateWindow("Week02-3_GLUT_�^�a�@�~"); ///�n�إߤ@�ӵ���,�o�O�L���W��
    glutDisplayFunc(display); ///�n��ܪ���� display()
    glutMainLoop();  ///�D�j��d�b�᭱
}
