#include <GLUT/glut.h>
#include <math.h>




// ----------- circle function ------------
void circle(float rx, float ry, float cx, float cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}



// ----------- half circle up function ------------
void half_circle_up(float rx, float ry, float cx, float cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 180; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}




// ----------- half circle down function ------------
void half_circle_down(float rx, float ry, float cx, float cy)
{
    glBegin(GL_POLYGON);
    glVertex2f(cx, cy);
    for (int i = 180; i <= 360; i++)
    {
        float angle = i * 3.1416 / 180;
        float x = rx * cos(angle);
        float y = ry * sin(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}




//---- Display size and color --------
void init(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-40, 40, -50, 55);
}






// -------- Main function ---------
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    

    
    // ----------------- hand right ---------------------
    //hand arm right
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(7, 3.9);
    glVertex2d(7, -1.9);
    glVertex2d(20, -7.4);
    glVertex2d(20, -1.8);
    glEnd();
    
    //hand arm right deef
    glBegin(GL_POLYGON);
    glColor3ub(96, 96, 96);
    glVertex2d(7, 3.5);
    glVertex2d(7, -1.5);
    glVertex2d(20, -7);
    glVertex2d(20, -2);
    glEnd();
    
    // wrist right
    glColor3ub(0, 0, 0);
    circle(2.3, 4.8, 16, -3);
    glEnd();
    // wrist right deef
    glColor3ub(255, 255, 255);
    circle(2, 4.4, 16, -3);
    glEnd();
    
    // fingure 1 right
    glColor3ub(0, 0, 0);
    circle(1, 3.4, 19, 1);
    glEnd();
    // fingure 1 right deef
    glColor3ub(255, 255, 255);
    circle(.8, 3, 19, 1);
    glEnd();
    
    // fingure 2 right
    glColor3ub(0, 0, 0);
    circle(3, 1.5, 23, -2);
    glEnd();
    // fingure 2 right deef
    glColor3ub(255, 255, 255);
    circle(2.8, 1.3, 23, -2);
    glEnd();
    
    // fingure 3 right
    glColor3ub(0, 0, 0);
    circle(3, 1.5, 24, -5);
    glEnd();
    // fingure 3 right deef
    glColor3ub(255, 255, 255);
    circle(2.8, 1.3, 24, -5);
    glEnd();
    
    // fingure 4 right
    glColor3ub(0, 0, 0);
    circle(3, 1.5, 23, -8);
    glEnd();
    // fingure 4 right deef
    glColor3ub(255, 255, 255);
    circle(2.8, 1.3, 23, -8);
    glEnd();
    
    // hand right
    glColor3ub(0, 0, 0);
    circle(4.3, 6.4, 20, -5);
    glEnd();
    // hand right deef
    glColor3ub(255, 255, 255);
    circle(4, 6, 20, -5);
    glEnd();
    

    
    // ----------------- hand left ---------------------
    // hand arm left
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2d(-7, 3.9);
    glVertex2d(-7, -1.9);
    glVertex2d(-20, -7.4);
    glVertex2d(-20, -1.8);
    glEnd();

    // hand arm left deep
    glBegin(GL_POLYGON);
    glColor3ub(96, 96, 96);
    glVertex2d(-7, 3.5);
    glVertex2d(-7, -1.5);
    glVertex2d(-20, -7);
    glVertex2d(-20, -2);
    glEnd();

    // wrist left
    glColor3ub(0, 0, 0);
    circle(2.3, 4.8, -16, -3);
    glEnd();
    // wrist left deep
    glColor3ub(255, 255, 255);
    circle(2, 4.4, -16, -3);
    glEnd();

    // finger 1 left
    glColor3ub(0, 0, 0);
    circle(1, 3.4, -19, 1);
    glEnd();
    // finger 1 left deep
    glColor3ub(255, 255, 255);
    circle(.8, 3, -19, 1);
    glEnd();

    // finger 2 left
    glColor3ub(0, 0, 0);
    circle(3, 1.5, -23, -2);
    glEnd();
    // finger 2 left deep
    glColor3ub(255, 255, 255);
    circle(2.8, 1.3, -23, -2);
    glEnd();

    // finger 3 left
    glColor3ub(0, 0, 0);
    circle(3, 1.5, -24, -5);
    glEnd();
    // finger 3 left deep
    glColor3ub(255, 255, 255);
    circle(2.8, 1.3, -24, -5);
    glEnd();

    // finger 4 left
    glColor3ub(0, 0, 0);
    circle(3, 1.5, -23, -8);
    glEnd();
    // finger 4 left deep
    glColor3ub(255, 255, 255);
    circle(2.8, 1.3, -23, -8);
    glEnd();

    // hand left
    glColor3ub(0, 0, 0);
    circle(4.3, 6.4, -20, -5);
    glEnd();
    // hand left deep
    glColor3ub(255, 255, 255);
    circle(4, 6, -20, -5);
    glEnd();

    
    
    
    
    
    
    
    

    // ----------------- leg ---------------------
    // leg right
    glBegin(GL_POLYGON);
    glColor3ub(96, 96, 96);
    glVertex2d(3.5, -20);
    glVertex2d(7, -20);
    glVertex2d(8, -37);
    glVertex2d(4, -37);
    glEnd();
    
    // leg left
    glBegin(GL_POLYGON);
    glColor3ub(96, 96, 96);
    glVertex2d(-3.5, -20);
    glVertex2d(-7, -20);
    glVertex2d(-8, -37);
    glVertex2d(-4, -37);
    glEnd();
    
    
    
    
    
    
    // ----------------- thi ---------------------
    // thi right
    glColor3ub(0, 0, 0);
    circle(3.3, 4.4, 5, -20);
    glEnd();
    // thi right deef
    glColor3ub(255, 54, 51);
    circle(3, 4, 5, -20);
    glEnd();
    
    // thi right
    glColor3ub(0, 0, 0);
    circle(3.3, 4.4, -5, -20);
    glEnd();
    // thi right deef
    glColor3ub(255, 54, 51);
    circle(3, 4, -5, -20);
    glEnd();
    
    
    
    
    
    
    // ----------------- foot ---------------------
    // foot right
    glColor3ub(0, 0, 0);
    circle(6.3, 6.4, 8, -37);
    glEnd();
    // foot right deef
    glColor3ub(255, 255, 0);
    circle(6, 6, 8, -37);
    glEnd();
    
    // foot right
    glColor3ub(0, 0, 0);
    circle(6.3, 6.4, -8, -37);
    glEnd();
    // foot right deef
    glColor3ub(255, 255, 0);
    circle(6, 6, -8, -37);
    glEnd();
    
    
    
    
    
    
    
    // ----------------- body ---------------------
    // body up
    glColor3ub(0, 0, 0);
    half_circle_up(8.3, 20.5, 0, -5);
    glEnd();
    // body up deef
    glColor3ub(96, 96, 96);
    half_circle_up(8, 20, 0, -5);
    glEnd();
    
    // body down
    glColor3ub(0, 0, 0);
    half_circle_down(8.3, 18.5, 0, -5);
    glEnd();
    // body down deef
    glColor3ub(255, 54, 51);
    half_circle_down(8, 18, 0, -5);
    glEnd();
    
    
    
    
    
    // ----------------- head ---------------------
    // head
    glColor3ub(0, 0, 0);
    circle(14, 20, 0, 20);
    glEnd();
    // head deef
    glColor3ub(255, 255, 255);
    circle(13.5, 19.3, 0, 20);
    glEnd();
    
    
    // head up deef
    glColor3ub(0, 0, 0);
    half_circle_up(14, 20, 0, 20.4);
    glEnd();
    // head up black
    glColor3ub(0, 0, 0);
    half_circle_up(14, 20, 0, 20);
    glEnd();
    // head up
    glColor3ub(96, 96, 96);
    half_circle_up(13.6, 19.4, 0, 20.4);
    glEnd();
    
    
    
    
    
    
    // ----------------- hair ---------------------
    // hair right black
    glColor3ub(0, 0, 0);
    half_circle_up(5.7, 12.3, 5, 25);
    glEnd();
    // hair right
    glColor3ub(255, 255, 255);
    circle(5.5, 12, 5, 25);
    glEnd();

    // hair right black
    glColor3ub(0, 0, 0);
    half_circle_up(5.7, 12.3, -5, 25);
    glEnd();
    // hair left
    glColor3ub(255, 255, 255);
    circle(5.5, 12, -5, 25);
    glEnd();
    //cover
    glColor3ub(255, 255, 255);
    circle(5.5, 5, 0, 25.3);
    glEnd();
    
    
    
    
    
    
    // ----------------- eyes ---------------------
    // eyes right
    glColor3ub(0, 0, 0);
    circle(1.5, 3.5, 5, 25);
    glEnd();
    // eyes right deef
    glColor3ub(96, 96, 96);
    circle(1.3, 3.2, 5, 25);
    glEnd();
    
    // eyes left
    glColor3ub(0, 0, 0);
    circle(1.5, 3.5, -5, 25);
    glEnd();
    // eyes left deep
    glColor3ub(96, 96, 96);
    circle(1.3, 3.2, -5, 25);
    glEnd();

    
    
    
    // ----------------- nose ---------------------
    // nose right
    glColor3ub(0, 0, 0);
    circle(3.5, 3.2, 0, 15);
    glEnd();
    // nose right deef
    glColor3ub(96, 96, 96);
    circle(3.3, 3, 0, 15);
    glEnd();
    
    
    
    // ----------------- mouth ---------------------
    // mouth
    glColor3ub(0, 0, 0);
    half_circle_down(4, 3, 0, 8);
    glEnd();
    // mouth deef
    glColor3ub(255, 255, 255);
    half_circle_down(4, 3, 0, 9);
    glEnd();
    
    
    
    
    // mouth side right
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(3, 8.5);
    glVertex2d(5, 6.5);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(3.1, 8.5);
    glVertex2d(5.1, 6.5);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(3.2, 8.5);
    glVertex2d(5.2, 6.5);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(3.3, 8.5);
    glVertex2d(5.3, 6.5);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(3.4, 8.5);
    glVertex2d(5.4, 6.5);
    glEnd();
    
    
    // mouth side left
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(-3, 8.5);
    glVertex2d(-5, 6.5);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(-3.1, 8.5);
    glVertex2d(-5.1, 6.5);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(-3.2, 8.5);
    glVertex2d(-5.2, 6.5);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(-3.3, 8.5);
    glVertex2d(-5.3, 6.5);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2d(-3.4, 8.5);
    glVertex2d(-5.4, 6.5);
    glEnd();

    

    
    
    
    
    
    
    // ----------------- ear ---------------------
    // ear right
    glColor3ub(0, 0, 0);
    circle(7, 10, 15, 40);
    glEnd();
    // ear right deef
    glColor3ub(96, 96, 96);
    circle(6.5, 9.3, 15, 40);
    glEnd();
    
    // ear left
    glColor3ub(0, 0, 0);
    circle(7, 10, -15, 40);
    glEnd();
    // ear left deef
    glColor3ub(96, 96, 96);
    circle(6.5, 9.3, -15, 40);
    glEnd();
    
 
    
    
    
    // ----------------- belly ---------------------
    // belly circle right
    glColor3ub(0, 0, 0);
    circle(2.3, 4, 4, -12);
    glEnd();
    // belly circle right deef
    glColor3ub(255, 255, 0);
    circle(2.1, 3.8, 4, -12);
    glEnd();
    
    // belly circle left
    glColor3ub(0, 0, 0);
    circle(2.3, 4, -4, -12);
    glEnd();
    // belly circle left deef
    glColor3ub(255, 255, 0);
    circle(2.1, 3.8, -4, -12);
    glEnd();


  glFlush();
}




int main(int argc,char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(1000,800);
    glutInitWindowPosition(200, 50);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow(" Lab_8 ");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


