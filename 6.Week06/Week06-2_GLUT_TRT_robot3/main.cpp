///�����d�ҵ{���X�R�����WWeek05-1_GLUT_����
///#include <bits/stdc++.h>�禡�w�O�@�ӥ]�t��G90%�禡���@�Ө�ܮw(��n�o�N�O�䤤10%)������
#include <GL/glut.h> ///(For Windows)
///#include <GLUT/glut.h>(For Mac OS)
float angle = 0;
void myCube()
{
    glPushMatrix();///�ƥ��x�}
        glScalef(1,0.3,0.3);
        glutSolidCube(0.5);
    glPopMatrix();///�٭�x�}
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSolidSphere(0.01,30,30);

    glPushMatrix();///�ƥ��x�}
        glTranslatef(0.25,0,0);  ///����k�W���h
        glRotatef(angle,0,0,1);   ///��ʥL
        glTranslatef(0.25,0,0);   ///�V�k����0.25,�����`�b������
        myCube();
        glPushMatrix();///�ƥ��x�}
            glTranslatef(0.25,0,0);  ///����k�W���h
            glRotatef(angle,0,0,1);   ///��ʥL
            glTranslatef(0.25,0,0);   ///�V�k����0.25,�����`�b������
            myCube();
        glPopMatrix();///�٭�x�}
    glPopMatrix();///�٭�x�}

    glPushMatrix();///�ƥ��x�}
        glTranslatef(-0.25,0,0);  ///����k�W���h
        glRotatef(-angle,0,0,1);   ///��ʥL
        glTranslatef(-0.25,0,0);   ///�V�k����0.25,�����`�b������
        myCube();
        glPushMatrix();///�ƥ��x�}
            glTranslatef(-0.25,0,0);  ///����k�W���h
            glRotatef(-angle,0,0,1);   ///��ʥL
            glTranslatef(-0.25,0,0);   ///�V�k����0.25,�����`�b������
            myCube();
        glPopMatrix();///�٭�x�}
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
