///#include <bits/stdc++.h>�禡�w�O�@�ӥ]�t��G90%�禡���@�Ө�ܮw(��n�o�N�O�䤤10%)������
#include <GL/glut.h> ///(For Windows)
///#include <GLUT/glut.h>(For Mac OS)
void display()
{
    glColor3f(1,1,0); ///R(Red)G(Green)B(Blue)�T����g�禡
    glutSolidTeapot( 0.5 ); ///�e�X��ߪ��j(0.5)����

    glColor3f(0,1,0); ///R(Red)G(Green)B(Blue)�T����g�禡
    glutSolidTeapot( 0.3 ); ///�e�X��ߪ��p(0.3)����

    glutSwapBuffers();  ///�洫��ܥX��
}
int main(int argc,char *argv[]) ///�o��main()�A���̪��{���X�i�H�{��Ū���p�¤��e
{
    glutInit(&argc, argv); ///�ҥ�GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///GLUT��ܼҦ�
    glutCreateWindow("Week02-2_GLUT_���I����"); ///�n�إߤ@�ӵ���,�o�O�L���W��
    glutDisplayFunc(display); ///�n��ܪ���� display()
    glutMainLoop();  ///�D�j��d�b�᭱
}
