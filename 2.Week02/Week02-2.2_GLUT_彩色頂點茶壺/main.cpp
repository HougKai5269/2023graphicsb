///#include <bits/stdc++.h>�禡�w�O�@�ӥ]�t��G90%�禡���@�Ө�ܮw(��n�o�N�O�䤤10%)������
#include <GL/glut.h> ///(For Windows)
///#include <GLUT/glut.h>(For Mac OS)
void display()
{
    ///glColor3f(0,1,0); ///R(Red)G(Green)B(Blue)�T����g�禡(�w���ܤU��)
    glBegin(GL_POLYGON);
        glColor3f(1,0,0);  glVertex2f(0,1);  ///�W��
        glColor3f(0,1,0);  glVertex2f(-1,-1); ///���U��
        glColor3f(0,0,1);  glVertex2f(+1,-1); ///�k�U��
    glEnd();

    glColor3f(1,1,0); ///R(Red)G(Green)B(Blue)�T����g�禡
    glutSolidTeapot( 0.3 ); ///�e�X��ߪ��p(0.3)����

    glutSwapBuffers();  ///�洫��ܥX��
}
int main(int argc,char *argv[]) ///�o��main()�A���̪��{���X�i�H�{��Ū���p�¤��e
{
    glutInit(&argc, argv); ///�ҥ�GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///GLUT��ܼҦ�
    glutCreateWindow("Week02-2.2_GLUT_�ĳ��I����"); ///�n�إߤ@�ӵ���,�o�O�L���W��
    glutDisplayFunc(display); ///�n��ܪ���� display()
    glutMainLoop();  ///�D�j��d�b�᭱
}
