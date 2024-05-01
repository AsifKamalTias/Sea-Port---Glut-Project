#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>

void road()
{
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(-0.5, -1.0);
    glVertex2d(0.6, -1.0);
    glVertex2d(-1.0, -0.3);
    glVertex2d(-1.0, -0.8);
    glEnd();
}

void road2()
{
    //north
    glBegin(GL_POLYGON);
    glColor3ub(128, 128, 128);
    glVertex2d(-0.3,0.0);
    glVertex2d(-0.31,-0.01);
    glVertex2d(-0.25,-0.1);
    glVertex2d(0.26,-0.2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glVertex2d(-0.25,-0.1);
    glVertex2d(-0.25,-0.15);
    glVertex2d(-0.15,-0.21);
    glVertex2d(0.05,-0.21);
    glVertex2d(0.18,-0.18);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glVertex2d(0.05,-0.21);
    glVertex2d(0.15,-0.35);
    glVertex2d(1.0,-0.8);
    glVertex2d(1.0,-0.5);
    glVertex2d(0.18,-0.18);
    glEnd();
}

void landArea()
{
    //south
    glBegin(GL_POLYGON);
    glColor3ub(255,222,173);
    glVertex2d(-0.5, -1.0);
    glVertex2d(-1.0, -0.8);
    glVertex2d(-1.0, -1.0);
    glEnd();

    //north
    glBegin(GL_POLYGON);
    glColor3ub(220, 220, 220);
    glVertex2d(0.6, -1.0);
    glVertex2d(1.0, -1.0);
    glVertex2d(1.0, -0.5);
    glVertex2d(-0.3, 0.0);
    glVertex2d(-1.0, -0.3);
    glEnd();

}

void coastalArea()
{
    glBegin(GL_POLYGON);
    glColor3ub(112,128,144);
    glVertex2d(0.5, -0.31);
    glVertex2d(0.8, 0.0);
    glVertex2d(0.4, 0.2);
    glVertex2d(0.0, -0.12);
    glEnd();

    //3d
    glBegin(GL_POLYGON);
    glColor3ub(220,220,220);
    glVertex2d(0.56, -0.345);
    glVertex2d(0.801, -0.1);
    glVertex2d(0.8, 0.0);
    glVertex2d(0.5, -0.31);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(0.801, -0.1);
    glVertex2d(0.8, 0.0);
    glEnd();
}

void crane1Anchor(){

    //moving-hand
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(0.525, 0.35);
    glVertex2d(0.525, -0.1);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(250, 99, 71);
    glVertex2d(0.5, -0.1);
    glVertex2d(0.55, -0.1);
    glEnd();

    glLineWidth(7.5);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
    {
        glColor3f(0.0,0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.02;
        float x = r * cos(A)+0.525;
        float y = r * sin(A)+0.35;
        glVertex2f(x,y);
    }

	glEnd();

	//carried container
	glBegin(GL_POLYGON);
	glColor3ub(65,105,225);
	glVertex2d(0.6, -0.175);
	glVertex2d(0.6, -0.1);
	glVertex2d(0.475, -0.1);
	glVertex2d(0.475, -0.175);
	glEnd();

    //3d
	glBegin(GL_POLYGON);
	glColor3ub(100,149,237);
	glVertex2d(0.62, -0.175);
	glVertex2d(0.62, -0.1);
	glVertex2d(0.6, -0.1);
	glVertex2d(0.6, -0.175);
	glEnd();

    //carried container border
    glLineWidth(1);
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex2d(0.6, -0.175);
	glVertex2d(0.6, -0.1);
	glVertex2d(0.475, -0.1);
	glVertex2d(0.475, -0.175);
	glEnd();

	//3d border
	glBegin(GL_LINE_LOOP);
	glColor3ub(0,0,0);
	glVertex2d(0.62, -0.175);
	glVertex2d(0.62, -0.1);
	glVertex2d(0.6, -0.1);
	glVertex2d(0.6, -0.175);
	glEnd();
}

void crane1()
{
    //right leg
    glBegin(GL_POLYGON);
    glColor3ub(250, 99, 71);
    glVertex2d(0.45, -0.14);
    glVertex2d(0.45, 0.025);
    glVertex2d(0.43, 0.025);
    glVertex2d(0.43, -0.14);
    glEnd();

    //3d
    glBegin(GL_POLYGON);
    glColor3ub(255,140,0);
    glVertex2d(0.46, -0.13);
    glVertex2d(0.46, 0.025);
    glVertex2d(0.45, 0.025);
    glVertex2d(0.45, -0.14);
    glEnd();

    //left leg
    glBegin(GL_POLYGON);
    glColor3ub(250, 99, 71);
    glVertex2d(0.34, -0.14);
    glVertex2d(0.34, 0.025);
    glVertex2d(0.32, 0.025);
    glVertex2d(0.32, -0.14);
    glEnd();

    //3d
    glBegin(GL_POLYGON);
    glColor3ub(255, 140, 0);
    glVertex2d(0.35, -0.13);
    glVertex2d(0.35, 0.025);
    glVertex2d(0.34, 0.025);
    glVertex2d(0.34, -0.14);
    glEnd();

    //back-board
    glBegin(GL_POLYGON);
    glColor3ub(255,69,0);
    glVertex2d(0.495, 0.029);
    glVertex2d(0.495, 0.15);
    glVertex2d(0.37, 0.15);
    glVertex2d(0.37, 0.029);
    glEnd();

    //back-board border
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(0.495, 0.029);
    glVertex2d(0.495, 0.15);
    glVertex2d(0.37, 0.15);
    glVertex2d(0.37, 0.029);
    glEnd();

    //driver box
    glBegin(GL_POLYGON);
    glColor3ub(250, 127, 80);
    glVertex2d(0.45, 0.025);
    glVertex2d(0.45, 0.125);
    glVertex2d(0.3, 0.125);
    glVertex2d(0.3, 0.025);
    glEnd();

    //3d
    glBegin(GL_POLYGON);
    glColor3ub(250, 99, 71);
    glVertex2d(0.475, 0.025);
    glVertex2d(0.475, 0.125);
    glVertex2d(0.45, 0.125);
    glVertex2d(0.45, 0.025);
    glEnd();


    //windows
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(0.425, 0.060);
    glVertex2d(0.425, 0.1);
    glVertex2d(0.325, 0.1);
    glVertex2d(0.325, 0.060);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(0.35, 0.070);
    glVertex2d(0.35, 0.090);
    glVertex2d(0.330, 0.090);
    glVertex2d(0.330, 0.070);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(0.38, 0.070);
    glVertex2d(0.38, 0.090);
    glVertex2d(0.36, 0.090);
    glVertex2d(0.36, 0.070);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);
    glVertex2d(0.41, 0.070);
    glVertex2d(0.41, 0.090);
    glVertex2d(0.39, 0.090);
    glVertex2d(0.39, 0.070);
    glEnd();

    //stable-hand
    glBegin(GL_POLYGON);
    glColor3ub(250, 127, 80);
    glVertex2d(0.45, 0.125);
    glVertex2d(0.54, 0.3);
    glVertex2d(0.52, 0.3);
    glVertex2d(0.43, 0.125);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(0.52, 0.3);
    glVertex2d(0.43, 0.125);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(250, 99, 71);
    glVertex2d(0.47, 0.125);
    glVertex2d(0.54, 0.3);
    glVertex2d(0.45, 0.125);
    glEnd();


    //borders
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2d(0.45, 0.025);
    glVertex2d(0.45, 0.125);
    glVertex2d(0.3, 0.125);
    glVertex2d(0.3, 0.025);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2d(0.475, 0.025);
    glVertex2d(0.475, 0.125);
    glVertex2d(0.45, 0.125);
    glVertex2d(0.45, 0.025);
    glEnd();

}

void crane2(){

    //top bar
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.7, 0.1);
    glVertex2d(-0.1, 0.2);
    glEnd();

    //low bar
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.7, 0.0);
    glVertex2d(-0.2, 0.1);
    glEnd();

    //zig-zag
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.1, 0.2);
    glVertex2d(-0.2, 0.1);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.25, 0.17);
    glVertex2d(-0.2, 0.1);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.3, 0.08);
    glVertex2d(-0.25, 0.17);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.3, 0.08);
    glVertex2d(-0.35, 0.16);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, 0.06);
    glVertex2d(-0.35, 0.16);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.6, 0.121);
    glVertex2d(-0.55, 0.03);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.5, 0.13);
    glVertex2d(-0.55, 0.03);
    glEnd();

    //mid-box
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, 0.06);
    glVertex2d(-0.4, 0.15);
    glVertex2d(-0.5, 0.13);
    glVertex2d(-0.5, 0.04);
    glEnd();

    //end-box
    glBegin(GL_POLYGON);
    glColor3ub(105, 105, 105);
    glVertex2d(-0.6, 0.01);
    glVertex2d(-0.6, 0.121);
    glVertex2d(-0.7, 0.102);
    glVertex2d(-0.7, -0.01);
    glEnd();

    //3d

    glBegin(GL_POLYGON);
    glColor3ub(204,204,0);
    glVertex2d(-0.7, -0.01);
    glVertex2d(-0.7, 0.102);
    glVertex2d(-0.73, 0.11);
    glVertex2d(-0.73, -0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204,204,0);
    glVertex2d(-0.7, 0.102);
    glVertex2d(-0.1, 0.2);
    glVertex2d(-0.115, 0.21);
    glVertex2d(-0.73, 0.11);
    glEnd();

    //tower
    glBegin(GL_LINE_LOOP);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.35);
    glVertex2d(-0.4, 0.15);
    glVertex2d(-0.5, 0.13);
    glVertex2d(-0.5, -0.4);
    glEnd();

    //3d

    glBegin(GL_POLYGON);
    glColor3ub(204, 204, 0);
    glVertex2d(-0.5, -0.4);
    glVertex2d(-0.5, 0.03);
    glVertex2d(-0.53, 0.02);
    glVertex2d(-0.53, -0.38);
    glEnd();

    //tower zigzag
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, 0.06);
    glVertex2d(-0.5, -0.05);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.035);
    glVertex2d(-0.5, 0.04);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.035);
    glVertex2d(-0.5, -0.06);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.035);
    glVertex2d(-0.5, -0.15);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.135);
    glVertex2d(-0.5, -0.055);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.13);
    glVertex2d(-0.5, -0.155);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.22);
    glVertex2d(-0.5, -0.155);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.13);
    glVertex2d(-0.5, -0.24);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.22);
    glVertex2d(-0.5, -0.25);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.22);
    glVertex2d(-0.5, -0.35);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.3);
    glVertex2d(-0.5, -0.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, -0.35);
    glVertex2d(-0.4, -0.31);
    glVertex2d(-0.5, -0.355);
    glVertex2d(-0.5, -0.4);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.4, 0.15);
    glVertex2d(-0.45, 0.25);
    glVertex2d(-0.5, 0.13);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2d(-0.42, 0.2);
    glVertex2d(-0.47, 0.2);
    glEnd();

    //rope
    glBegin(GL_LINES);
    glColor3ub(105, 105, 105);
    glVertex2d(-0.45, 0.25);
    glVertex2d(-0.1, 0.2);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(105, 105, 105);
    glVertex2d(-0.45, 0.25);
    glVertex2d(-0.7, 0.102);
    glEnd();

    //crane2Anchor
    glBegin(GL_LINE_LOOP);
    glColor3ub(105, 105, 105);
    glVertex2d(-0.2, 0.1);
    glVertex2d(-0.3, 0.08);
    glVertex2d(-0.25, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(105, 105, 105);
    glVertex2d(-0.25, 0.0);
    glVertex2d(-0.25, -0.02);
    glEnd();
}

void Building1()
{
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2d(-0.25,-0.1);
    glVertex2d(-0.5,-0.1);
    glVertex2d(-0.5,-0.5);
    glVertex2d(-0.25,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(152,251,152);
    glVertex2d(-0.25,-0.1);
    glVertex2d(-0.5,-0.1);
    glVertex2d(-0.6,0.0);
    glVertex2d(-0.38,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(60,179,113);
    glVertex2d(-0.5,-0.1);
    glVertex2d(-0.6,0.0);
    glVertex2d(-0.6,-0.4);
    glVertex2d(-0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,191,255);
    glVertex2d(-0.28,-0.3);
    glVertex2d(-0.47,-0.3);
    glVertex2d(-0.47,-0.35);
    glVertex2d(-0.28,-0.35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,191,255);
    glVertex2d(-0.28,-0.2);
    glVertex2d(-0.47,-0.2);
    glVertex2d(-0.47,-0.25);
    glVertex2d(-0.28,-0.25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,191,255);
    glVertex2d(-0.28,-0.4);
    glVertex2d(-0.47,-0.4);
    glVertex2d(-0.47,-0.45);
    glVertex2d(-0.28,-0.45);
    glEnd();

}

void Building2()
{
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2d(-0.1,-0.35);
    glVertex2d(-0.1,-0.68);
    glVertex2d(0.15,-0.68);
    glVertex2d(0.15,-0.35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(-0.10,-0.35);
    glVertex2d(0.15,-0.35);
    glVertex2d(0.05,-0.21);
    glVertex2d(-0.20,-0.21);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(238,221,130);
    glVertex2d(-0.10,-0.35);
    glVertex2d(-0.20,-0.21);
    glVertex2d(-0.20,-0.60);
    glVertex2d(-0.1,-0.68);
    glEnd();
}

void truck()
{
    /*truck1*/

    glBegin(GL_POLYGON);
    glColor3ub(204,204,0);
    glVertex2d(-0.4,-0.6);
    glVertex2d(-0.7,-0.49);
    glVertex2d(-0.75,-0.57);
    glVertex2d(-0.45,-0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153,153,0);
    glVertex2d(-0.75,-0.57);
    glVertex2d(-0.75,-0.77);
    glVertex2d(-0.45,-0.87);
    glVertex2d(-0.45,-0.67);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,51);
    glVertex2d(-0.45,-0.67);
    glVertex2d(-0.45,-0.87);
    glVertex2d(-0.4,-0.8);
    glVertex2d(-0.4,-0.6);
    glEnd();

    //side
    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
    glVertex2d(-0.45,-0.75);
    glVertex2d(-0.45,-0.87);
    glVertex2d(-0.39,-0.9);
    glVertex2d(-0.39,-0.77);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(-0.435,-0.78);
    glVertex2d(-0.435,-0.83);
    glVertex2d(-0.41,-0.84);
    glVertex2d(-0.41,-0.79);
    glEnd();

    //truck front
    glBegin(GL_POLYGON);
    glColor3ub(0,0,204);
    glVertex2d(-0.39,-0.9);
    glVertex2d(-0.33,-0.82);
    glVertex2d(-0.33,-0.70);
    glVertex2d(-0.39,-0.77);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(-0.38,-0.83);
    glVertex2d(-0.34,-0.79);
    glVertex2d(-0.34,-0.75);
    glVertex2d(-0.38,-0.795);
    glEnd();

    //truck up
    glBegin(GL_POLYGON);
    glColor3ub(0,0,153);
    glVertex2d(-0.33,-0.7);
    glVertex2d(-0.40,-.69);
    glVertex2d(-0.45,-0.75);
    glVertex2d(-0.39,-0.77);
    glEnd();

    glLineWidth(7.5);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.035;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.7,y-0.81 );
    }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.035;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.52,y-0.86 );
    }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.02;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x-0.428,y-0.88 );
    }
	glEnd();
}

void truck2()
{
    //truck2
    glBegin(GL_POLYGON);
    glColor3ub(204,120,0);
    glVertex2d(0.75,-0.42);
    glVertex2d(0.55,-0.34);
    glVertex2d(0.48,-0.36);
    glVertex2d(0.68,-0.44);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,128,0);
    glVertex2d(0.48,-0.36);
    glVertex2d(0.48,-0.46);
    glVertex2d(0.68,-0.54);
    glVertex2d(0.68,-0.44);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,153,51);
    glVertex2d(0.68,-0.44);
    glVertex2d(0.68,-0.54);
    glVertex2d(0.75,-0.52);
    glVertex2d(0.75,-0.42);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
    glVertex2d(0.68,-0.49);
    glVertex2d(0.68,-0.54);
    glVertex2d(0.74,-0.58);
    glVertex2d(0.74,-0.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,10,216);
    glVertex2d(0.74,-0.58);
    glVertex2d(0.81,-0.55);
    glVertex2d(0.81,-0.48);
    glVertex2d(0.74,-0.50);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(51,51,255);
    glVertex2d(0.81,-0.48);
    glVertex2d(0.75,-0.46);
    glVertex2d(0.68,-0.49);
    glVertex2d(0.74,-0.50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0.75,-0.55);
    glVertex2d(0.8,-0.53);
    glVertex2d(0.8,-0.5);
    glVertex2d(0.75,-0.51);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0.69,-0.5);
    glVertex2d(0.69,-0.53);
    glVertex2d(0.73,-0.54);
    glVertex2d(0.73,-0.51);
    glEnd();

    glLineWidth(7.5);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.026;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.51,y-0.485 );
    }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.026;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.62,y-0.525 );
    }
	glEnd();

	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
    {
        glColor3ub(0,0,0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.015;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+0.70,y-0.561 );
    }
	glEnd();
}

void Ship1()
{
    glLineWidth(10.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,255,255);
    glVertex2d(0.42, 0.60);
    glVertex2d(0.25, 0.35);
    glVertex2d(0.70, 0.15);
    glVertex2d(0.9, 0.20);
    glVertex2d(.85, 0.37);
    glEnd();

    glLineWidth(10.0);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,153);
    glVertex2d(0.42, 0.60);
    glVertex2d(0.26, 0.36);
    glVertex2d(0.70, 0.15);
    glVertex2d(0.9, 0.20);
    glVertex2d(.85, 0.37);
    glEnd();

    glLineWidth(5.0);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0.25, 0.34);
    glVertex2d(0.70, 0.13);
    glVertex2d(0.70, 0.05);
    glVertex2d(0.25, 0.26);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0.70, 0.13);
    glVertex2d(0.90, 0.18);
    glVertex2d(0.90, 0.11);
    glVertex2d(0.70, 0.05);
    glEnd();

    glLineWidth(15.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(153,0,0);
    glVertex2d(0.65, 0.20);
    glVertex2d(0.70, 0.18);
    glEnd();

     glLineWidth(15.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(153,0,0);
    glVertex2d(0.70, 0.18);
    glVertex2d(0.88, 0.22);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(153,0,0);
    glVertex2d(0.89, 0.20);
    glVertex2d(.84, 0.37);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(153,0,0);
    glVertex2d(0.79, 0.39);
    glVertex2d(.85, 0.36);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_POLYGON);
     glColor3ub(255,51,51);
     glVertex2d(0.79, 0.38);
     glVertex2d(0.65, 0.22);
     glVertex2d(0.70, 0.20);
     glVertex2d(0.88, 0.23);
     glVertex2d(0.84, 0.36);
    glEnd();


    glLineWidth(5.0);
    glBegin(GL_POLYGON);
    glColor3ub(255,51,51);
    glVertex2d(0.37, 0.53);
    glVertex2d(0.30, 0.42);
    glVertex2d(0.38, 0.40);
    glVertex2d(0.45, 0.50);
    glEnd();


    glLineWidth(5.0);
    glBegin(GL_POLYGON);
    glColor3ub(0,153,0);
    glVertex2d(0.30, 0.42);
    glVertex2d(0.30, 0.58);
    glVertex2d(0.38, 0.57);
    glVertex2d(0.38, 0.40);
    glEnd();

    glLineWidth(5.0);
    glBegin(GL_POLYGON);
    glColor3ub(0,153,0);
    glVertex2d(0.37, 0.53);
    glVertex2d(0.37, 0.63);
    glVertex2d(0.30, 0.58);
    glVertex2d(0.30, 0.42);
    glEnd();


    glLineWidth(5.0);
    glBegin(GL_POLYGON);
    glColor3ub(0,153,0);
    glVertex2d(0.38, 0.40);
    glVertex2d(0.38, 0.57);
    glVertex2d(0.45, 0.60);
    glVertex2d(0.46, 0.48);
    glEnd();



    glLineWidth(5.0);
    glBegin(GL_POLYGON);
    glColor3ub(0,153,0);
    glVertex2d(0.45, 0.50);
    glVertex2d(0.45, 0.60);
    glVertex2d(0.37, 0.63);
    glVertex2d(0.37, 0.53);
    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex2d(0.31, 0.42);
    glVertex2d(0.31, 0.88);
    glEnd();



    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex2d(0.38, 0.39);
    glVertex2d(0.38, 0.63);
    glEnd();

    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex2d(0.46, 0.48);
    glVertex2d(0.46, 0.60);
    glEnd();



    glLineWidth(8.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,0,0);
    glVertex2d(0.36, 0.53);
    glVertex2d(0.33, 0.53);
    glEnd();

    glLineWidth(8.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,0,0);
    glVertex2d(0.36, 0.49);
    glVertex2d(0.33, 0.49);
    glEnd();

    glLineWidth(8.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,0,0);
    glVertex2d(0.36, 0.45);
    glVertex2d(0.33, 0.45);
    glEnd();

    glLineWidth(8.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,0,0);
   glVertex2d(0.40, 0.53);
    glVertex2d(0.43, 0.55);
    glEnd();

    glLineWidth(8.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,0,0);
    glVertex2d(0.40, 0.48);
    glVertex2d(0.43, 0.50);
    glEnd();



    glLineWidth(5.0);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2d(0.30, 0.58);
    glVertex2d(0.38, 0.55);
    glVertex2d(0.46, 0.60);
    glVertex2d(0.37, 0.63);
    glEnd();

    //LADDER
    glLineWidth(4.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex2d(0.40, 0.15);
    glVertex2d(0.50, 0.28);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex2d(0.46, 0.1);
    glVertex2d(0.56, 0.23);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex2d(0.43, 0.19);
    glVertex2d(0.50, 0.16);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex2d(0.45, 0.21);
    glVertex2d(0.52, 0.18);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(255,255,255);
    glVertex2d(0.46, 0.23);
    glVertex2d(0.53, 0.20);
    glEnd();


    //container

    glBegin(GL_POLYGON);
    glColor3ub(255,128,0);
    glVertex2d(0.60, 0.55);
    glVertex2d(0.50, 0.60);
    glVertex2d(0.50, 0.45);
    glVertex2d(0.60, 0.40);
    glEnd();

    //border
    glLineWidth(0.02);
    glBegin(GL_LINE_LOOP);
    glColor3ub(153,76,0);
    glVertex2d(0.60, 0.55);
    glVertex2d(0.50, 0.60);
    glVertex2d(0.50, 0.45);
    glVertex2d(0.60, 0.40);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,128,0);
    glVertex2d(0.50, 0.60);
    glVertex2d(0.52, 0.62);
    glVertex2d(0.62, 0.57);
    glVertex2d(0.62, 0.42);
     glVertex2d(0.60, 0.40);
    glEnd();


    //border
    glLineWidth(0.02);
    glBegin(GL_LINE_LOOP);
    glColor3ub(153,76,0);
    glVertex2d(0.60, 0.55);
    glVertex2d(0.50, 0.60);
    glVertex2d(0.50, 0.45);
    glVertex2d(0.60, 0.40);
    glEnd();

    //blue box
    glLineWidth(0.02);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,204);
    glVertex2d(0.60, 0.52);
    glVertex2d(0.50, 0.57);
    glVertex2d(0.50, 0.50);
    glVertex2d(0.60, 0.45);
    glEnd();

    //blue box
    glBegin(GL_POLYGON);
    glColor3ub(0,0,204);
    glVertex2d(0.60, 0.52);
    glVertex2d(0.60, 0.45);
    glVertex2d(0.62, 0.47);
    glVertex2d(0.62, 0.53);
    glEnd();

    //container 2
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2d(0.52, 0.35);
    glVertex2d(0.42, 0.40);
    glVertex2d(0.42, 0.32);
    glVertex2d(0.52, 0.27);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2d(0.42, 0.40);
    glVertex2d(0.47, 0.44);
    glVertex2d(0.56, 0.40);
    glVertex2d(0.56, 0.30);
    glVertex2d(0.52, 0.27);
    glEnd();

    //border
    glBegin(GL_LINE_LOOP);
    glColor3ub(111,23,23);
    glVertex2d(0.52, 0.35);
    glVertex2d(0.42, 0.40);
    glVertex2d(0.42, 0.32);
    glVertex2d(0.52, 0.27);
    glEnd();

    //border
    glBegin(GL_LINES);
    glColor3ub(111,23,23);
    glVertex2d(0.47, 0.44);
    glVertex2d(0.56, 0.40);
    glEnd();

    //border
    glBegin(GL_LINES);
    glColor3ub(111,23,23);
    glVertex2d(0.56, 0.30);
    glVertex2d(0.52, 0.27);
    glEnd();

    //BORDER
    glBegin(GL_LINES);
    glColor3ub(111,23,23);
    glVertex2d(0.42, 0.40);
    glVertex2d(0.47, 0.44);
    glVertex2d(0.56, 0.40);
    glVertex2d(0.56, 0.30);
    glVertex2d(0.52, 0.27);
    glEnd();

    //border
    glBegin(GL_LINES);
    glColor3ub(111,23,23);
    glVertex2d(0.52, 0.35);
    glVertex2d(0.56, 0.4);
    glEnd();

   //border
    glBegin(GL_LINES);
    glColor3ub(111,23,23);
    glVertex2d(0.44, 0.42);
    glVertex2d(0.54, 0.37);
    glEnd();

    //border
    glBegin(GL_LINES);
    glColor3ub(111,23,23);
    glVertex2d(0.54, 0.37);
    glVertex2d(0.54, 0.28);
    glEnd();

    //container 2
    glBegin(GL_POLYGON);
    glColor3ub(0,102,0);
    glVertex2d(0.64, 0.29);
    glVertex2d(0.60, 0.31);
    glVertex2d(0.69, 0.40);
    glVertex2d(0.73, 0.38);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(0,102,0);
    glVertex2d(0.69, 0.40);
    glVertex2d(0.71, 0.42);
    glVertex2d(0.77, 0.39);
    glVertex2d(0.67, 0.28);
    glVertex2d(0.63, 0.29);
    glEnd();

    //BORDER

    glBegin(GL_LINE_LOOP);
    glColor3ub(111,23,23);
    glVertex2d(0.67, 0.32);
    glVertex2d(0.63, 0.34);
    glVertex2d(0.71, 0.42);
    glVertex2d(0.75, 0.40);
    glEnd();

    //border
    glBegin(GL_LINES);
    glColor3ub(111,23,23);
    glVertex2d(0.67, 0.32);
    glVertex2d(0.67, 0.28);
    glEnd();

    //border
   glBegin(GL_LINES);
    glColor3ub(111,23,23);
    glVertex2d(0.69, 0.40);
    glVertex2d(0.71, 0.42);
    glVertex2d(0.77, 0.39);
    glVertex2d(0.67, 0.28);
    glVertex2d(0.63, 0.29);
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(255,255,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0.86,y+ 0.25);
        }
        glEnd();

    glLineWidth(03.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2d(0.86, 0.25);
    glVertex2d(0.86, 0.43);
    glEnd();

    glLineWidth(03.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(255,128,0);
    glVertex2d(0.86, 0.39);
    glVertex2d(0.86, 0.43);
    glVertex2d(0.81, 0.41);
    glEnd();

}

void ship2()
{
    //glLoadIdentity();
    //glMatrixMode(GL_MODELVIEW);
    //glPushMatrix();
    //glTranslatef(move1,0.1f,0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(102,0,204);
    glVertex2d(-0.2, 0.1);
    glVertex2d(0.1, 0.1);
    glVertex2d(0.1, 0.3);
    glVertex2d(-0.2, 0.3);
    glEnd();

    glLineWidth(8.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,204,0);
    glVertex2d(-0.21, 0.11);
    glVertex2d(0.09, 0.11);
    glVertex2d(0.09, 0.30);
    glVertex2d(-0.2, 0.30);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,0);
    glVertex2d(-0.2, 0.1);
    glVertex2d(-0.2, 0.3);
    glVertex2d(-0.3, 0.19);
    glEnd();

     glLineWidth(8.0);
     glBegin(GL_LINE_LOOP);
    glColor3ub(0,204,0);
    glVertex2d(-0.2, 0.1);
    glVertex2d(-0.2, 0.3);
    glVertex2d(-0.3, 0.19);
    glEnd();



    //BORDER
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(-0.3, 0.15);
     glVertex2d(-0.2, 0.06);
      glVertex2d(-0.2, 0.1);
      glVertex2d(-0.3, 0.19);
    glEnd();

    //BORDER
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(-0.2, 0.06);
    glVertex2d(0.1, 0.06);
     glVertex2d(0.1, 0.1);
    glVertex2d(-0.2, 0.1);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,204,0);
    glVertex2d(0.09, 0.1);
    glVertex2d(0.09, 0.31);
    glEnd();


    glLineWidth(02.0);
    glBegin(GL_POLYGON);
    glColor3ub(255,204,153);
    glVertex2d(0.0, 0.23);
    glVertex2d(0.0, 0.16);
     glVertex2d(0.05, 0.16);
    glVertex2d(0.05, 0.23);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_POLYGON);
    glColor3ub(255,204,153);
    glVertex2d(0.05, 0.23);
    glVertex2d(0.05, 0.16);
    glVertex2d(0.07, 0.18);
    glVertex2d(0.07, 0.25);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,153);
    glVertex2d(0.07, 0.25);
    glVertex2d(0.02, 0.25);
    glVertex2d(0.0, 0.23);
    glVertex2d(0.05, 0.23);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2d(0.02, 0.21);
    glVertex2d(0.04, 0.21);
    glEnd();

     glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2d(0.02, 0.18);
    glVertex2d(0.04, 0.18);
    glEnd();

     //container pink
    glLineWidth(02.0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,153);
    glVertex2d(-0.18, 0.20);
    glVertex2d(-0.18, 0.15);
    glVertex2d(-0.1, 0.15);
    glVertex2d(-0.1, 0.20);
    glEnd();



    glLineWidth(02.0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,153);
    glVertex2d(-0.1, 0.20);
    glVertex2d(-0.18, 0.20);
    glVertex2d(-0.16, 0.22);
    glVertex2d(-0.08, 0.22);
    glEnd();

    glLineWidth(02.0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,153);
    glVertex2d(-0.1, 0.20);
    glVertex2d(-0.08, 0.22);
    glVertex2d(-0.08, 0.16);
    glVertex2d(-0.1, 0.15);
    glEnd();

    //border
    glLineWidth(01.0);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0,0,0);
    glVertex2d(-0.18, 0.20);
    glVertex2d(-0.18, 0.15);
    glVertex2d(-0.1, 0.15);
    glVertex2d(-0.1, 0.20);
    glEnd();

    //container blue
    glLineWidth(02.0);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,102);
    glVertex2d(-0.08, 0.22);
    glVertex2d(-0.16, 0.22);
    glVertex2d(-0.14, 0.25);
    glVertex2d(-0.06, 0.25);
    glEnd();

    glLineWidth(02.0);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,102);
    glVertex2d(-0.08, 0.22);
    glVertex2d(-0.06, 0.25);
    glVertex2d(-0.06, 0.18);
    glVertex2d(-0.08, 0.16);
    glEnd();

    //container orrange
    glLineWidth(02.0);
    glBegin(GL_POLYGON);
    glColor3ub(255,128,0);
    glVertex2d(-0.06, 0.25);
    glVertex2d(-0.14, 0.25);
    glVertex2d(-0.12, 0.27);
    glVertex2d(-0.04, 0.27);
    glEnd();

    glLineWidth(02.0);
    glBegin(GL_POLYGON);
    glColor3ub(255,128,0);
    glVertex2d(-0.06, 0.25);
    glVertex2d(-0.04, 0.27);
    glVertex2d(-0.04, 0.20);
    glVertex2d(-0.06, 0.18);
    glEnd();

    //border
    glLineWidth(01.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2d(-0.1, 0.20);
    glVertex2d(-0.04, 0.27);
    glEnd();


    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(204,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.24,y+ 0.2);
        }

	glEnd();

	glLineWidth(03.0);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2d(-0.24, 0.20);
    glVertex2d(-0.24, 0.31);
    glEnd();

    glLineWidth(03.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2d(-0.24, 0.27);
    glVertex2d(-0.24, 0.31);
    glVertex2d(-0.28, 0.29);
    glEnd();

    //glPopMatrix();


}



void skyDay()
{
    glColor3ub(111, 205, 235);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f,0.65f);
    glVertex2f(1.0f,0.65f);
    glVertex2f(1.0f,1.0f);
    glVertex2f(-1.0f,1.0f);
    glEnd();
}
void skyNight()
{
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.0f,0.3f);
    glVertex2f(1.0f,0.3f);
    glVertex2f(1.0f,1.0f);
    glVertex2f(-1.0f,1.0f);
    glEnd();
}

void sun()
{


	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(255,255,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y+ 0.8);
        }
	glEnd();
    glPopMatrix();


}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    road();
    truck();
    landArea();
    coastalArea();
    road2();
    Ship1();
    ship2();
    truck2();
    Building1();
    Building2();
    crane1Anchor();
    crane1();

    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.85f, -0.4f, 0.0f);
    crane2();
    glPopMatrix();

	glFlush();  // Render now
	glutSwapBuffers();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1020, 720);                 // Initialize GLUT
	glutCreateWindow("Sea Port"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
