///#include <bits/stdc++.h>�禡�w�O�@�ӥ]�t��G90%�禡���@�Ө�ܮw(��n�o�N�O�䤤10%)������
#include <GL/glut.h> ///(For Windows)
///#include <GLUT/glut.h>(For Mac OS)
void display()
{
    glutSolidTeapot( 0.3 ); ///�e�X��ߪ�����
    glutSwapBuffers();  ///�洫��ܥX��
}
int main(int argc,char *argv[]) ///�o��main()�A���̪��{���X�i�H�{��Ū���p�¤��e
{
    glutInit(&argc, argv); ///�ҥ�GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///GLUT��ܼҦ�
    glutCreateWindow("Week02-1.1_GLUT_����"); ///�n�إߤ@�ӵ���,�o�O�L���W��
    glutDisplayFunc(display); ///�n��ܪ���� display()
    glutMainLoop();  ///�D�j��d�b�᭱
}
