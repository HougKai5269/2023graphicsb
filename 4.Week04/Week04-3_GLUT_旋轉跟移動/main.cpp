///#include <bits/stdc++.h>�禡�w�O�@�ӥ]�t��G90%�禡���@�Ө�ܮw(��n�o�N�O�䤤10%)������
#include <GL/glut.h> ///(For Windows)
///#include <GLUT/glut.h>(For Mac OS)
float angle = 0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();///�ƥ��x�}
        glTranslatef(0.5,0,0);  ///����k�䪺
        glRotatef(angle,0,1,0);  ///����angle�ׯ���
        glColor3f(0,0,1); ///�Ŧ����
        glutSolidTeapot( 0.3 ); ///�e�X��ߪ�����
    glPopMatrix();///�٭�x�}

    glPushMatrix();///�ƥ��x�}
        glRotatef(angle,0,1,0); ///���त������
        glTranslatef(0.5,0,0);  ///����k�䪺
        glColor3f(1,1,0); ///�Ŧ����
        glTranslatef(0,0.5,0);  ///���W���ʪ�����
        glutSolidTeapot( 0.3 ); ///�e�X��ߪ�����
    glPopMatrix();///�٭�x�}

    glutSwapBuffers();  ///�洫��ܥX��
    angle++;
}
int main(int argc,char *argv[]) ///�o��main()�A���̪��{���X�i�H�{��Ū���p�¤��e
{
    glutInit(&argc, argv); ///�ҥ�GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); ///GLUT��ܼҦ�
    glutCreateWindow("Week04-3_GLUT_����򲾰�"); ///�n�إߤ@�ӵ���,�o�O�L���W��
    glutDisplayFunc(display); ///�n��ܪ���� display()
    glutIdleFunc(display);
    glutMainLoop();  ///�D�j��d�b�᭱
}
