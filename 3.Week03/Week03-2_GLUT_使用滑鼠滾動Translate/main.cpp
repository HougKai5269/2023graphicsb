///#include <bits/stdc++.h>�禡�w�O�@�ӥ]�t��G90%�禡���@�Ө�ܮw(��n�o�N�O�䤤10%)������
#include <GL/glut.h> ///(For Windows)
///#include <GLUT/glut.h>(For Mac OS)
float X=0,Y=0,Z=0; ///�ϥΥ����ܼ�
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M���I��
    glPushMatrix();///�ƥ��x�}
        glTranslatef(X,Y,Z);  ///�ӵ۷�U��X,Y,Z�b�Ӳ��ʦ�m
        glutSolidTeapot( 0.3 ); ///�e�X��ߪ�����
    glPopMatrix();///�٭�x�}

    glutSwapBuffers();  ///�洫��ܥX��
}
void mouse(int button,int sate,int x,int y)
{
    X=+(x-150)/150.0;
    Y=-(y-150)/150.0;
}
int main(int argc,char *argv[]) ///�o��main()�A���̪��{���X�i�H�{��Ū���p�¤��e
{
    glutInit(&argc, argv); ///�ҥ�GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///GLUT��ܼҦ�
    glutCreateWindow("Week03-2_GLUT_�ϥηƹ��u��Translate"); ///�n�إߤ@�ӵ���,�o�O�L���W��
    glutMouseFunc(mouse); ///�ҥηƹ������
    glutDisplayFunc(display); ///�n��ܪ���� display()
    glutMainLoop();  ///�D�j��d�b�᭱
}
