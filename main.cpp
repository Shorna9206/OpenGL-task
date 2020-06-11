#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/

//ground
glColor3f (0.722, 0.525, 0.043);
glBegin(GL_POLYGON);
glVertex3f (0, 0, 0.0);
glVertex3f (1.35, 0, 0.0);
glVertex3f ( 1.35, 0.40, 0.0);
glVertex3f (0, .25, 0.0);
glEnd();

//river
glColor3f (0.392, 0.584, 0.929);
glBegin(GL_POLYGON);
glVertex3f (0, .25, 0.0);
glVertex3f (1.35, 0.40, 0.0);
glVertex3f ( 1.35, 0.7, 0.0);
glVertex3f (0, .7, 0.0);
glEnd();

//boat
glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (0.55, .4, 0.0);
glVertex3f (0.73, 0.4, 0.0);
glVertex3f (0.77, 0.43, 0.0);
glVertex3f (0.51, 0.43, 0.0);
glEnd();
glColor3f (1, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (0.55, .43, 0.0);
glVertex3f (0.6, 0.43, 0.0);
glVertex3f (0.575, 0.46, 0.0);
glEnd();
glColor3f (.498, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.6, 0.43, 0.0);
glVertex3f (0.73, 0.43, 0.0);
glVertex3f (0.705, 0.46, 0.0);
glVertex3f (0.575, 0.46, 0.0);
glEnd();

//sky
glColor3f (0, 0, 1);
glBegin(GL_POLYGON);
glVertex3f (0, .7, 0.0);
glVertex3f (1.35, 0.7, 0.0);
glVertex3f ( 1.35, 1.10, 0.0);
glVertex3f (0, 1.10, 0);
glEnd();

//hill
glColor3f (0.133, 0.545, 0.133);
glBegin(GL_POLYGON);
glVertex3f (0, .7, 0.0);
glVertex3f (0.15, 0.7, 0.0);
glVertex3f ( 0.08, 0.75, 0.0);
glEnd();
glColor3f (0.133, 0.545, 0.133);
glBegin(GL_POLYGON);
glVertex3f (0.15, 0.7, 0.0);
glVertex3f (0.55, 0.7, 0.0);
glVertex3f ( 0.30, 0.8, 0.0);
glEnd();
glColor3f (0.133, 0.545, 0.133);
glBegin(GL_POLYGON);
glVertex3f (0.45, 0.7, 0.0);
glVertex3f (0.85, 0.7, 0.0);
glVertex3f ( 0.55, 0.8, 0.0);
glEnd();
glColor3f (0.133, 0.545, 0.133);
glBegin(GL_POLYGON);
glVertex3f (0.85, 0.7, 0.0);
glVertex3f (1.1, 0.7, 0.0);
glVertex3f ( 0.975, 0.75, 0.0);
glEnd();
glColor3f (0.133, 0.545, 0.133);
glBegin(GL_POLYGON);
glVertex3f (01.1, 0.7, 0.0);
glVertex3f (1.35, 0.7, 0.0);
glVertex3f ( 1.225, 0.81, 0.0);
glEnd();


//small house
glColor3f (155, 115, 0);
glBegin(GL_POLYGON);
glVertex3f (1.02, .26, 0.0);
glVertex3f (1.27, 0.26, 0.0);
glVertex3f ( 1.27, 0.50, 0.0);
glVertex3f (1.02, .50, 0.0);
glEnd();
glColor3f (1, 0.25, 0);
glBegin(GL_POLYGON);
glVertex3f (1.0, .24, 0.0);
glVertex3f (1.29, 0.24, 0.0);
glVertex3f ( 1.29, 0.26, 0.0);
glVertex3f (1.0, .26, 0.0);
glEnd();
glColor3f (1, 0.25, 0);
glBegin(GL_POLYGON);
glVertex3f (1.0, .50, 0.0);
glVertex3f ( 1.29, 0.50, 0.0);
glVertex3f (1.145, 0.65, 0.0);
glEnd();
glColor3f (1, 1, 1);
glBegin(GL_POLYGON);
glVertex3f (1.05, .26, 0.0);
glVertex3f (1.145, 0.26, 0.0);
glVertex3f ( 1.145, 0.42, 0.0);
glVertex3f (1.05, .42, 0.0);
glEnd();
glColor3f (0, 0, .65);
glBegin(GL_POLYGON);
glVertex3f (1.05, .26, 0.0);
glVertex3f (1.13, 0.28, 0.0);
glVertex3f ( 1.13, 0.40, 0.0);
glVertex3f (1.05, .42, 0.0);
glEnd();
glColor3f (1, 1, 1);
glBegin(GL_POLYGON);
glVertex3f (1.17, .31, 0.0);
glVertex3f (1.24, 0.31, 0.0);
glVertex3f ( 1.24, 0.40, 0.0);
glVertex3f (1.17, .40, 0.0);
glEnd();
glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (1.178, .31, 0.0);
glVertex3f (1.185, 0.31, 0.0);
glVertex3f ( 1.185, 0.40, 0.0);
glVertex3f (1.178, .40, 0.0);
glEnd();
glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (1.195, .31, 0.0);
glVertex3f (1.202, 0.31, 0.0);
glVertex3f ( 1.202, 0.40, 0.0);
glVertex3f (1.195, .40, 0.0);
glEnd();
glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (1.212, .31, 0.0);
glVertex3f (1.219, 0.31, 0.0);
glVertex3f ( 1.219, 0.40, 0.0);
glVertex3f (1.212, .40, 0.0);
glEnd();
glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (1.229, .31, 0.0);
glVertex3f (1.236, 0.31, 0.0);
glVertex3f ( 1.236, 0.40, 0.0);
glVertex3f (1.229, .40, 0.0);
glEnd();


//hut
glColor3f (255, 215, 0);
glBegin(GL_POLYGON);
glVertex3f (0.1, 0.1, 0.0);
glVertex3f (0.5, 0.1, 0.0);
glVertex3f ( 0.5, 0.55, 0.0);
glVertex3f (0.1, 0.55, 0.0);
glEnd();


//bottom part
glColor3f (.863, 0.078, 0.235);
glBegin(GL_POLYGON);
glVertex3f (0.08, 0.08, 0.0);
glVertex3f (0.52, 0.08, 0.0);
glVertex3f ( 0.52, 0.1, 0.0);
glVertex3f (0.08, 0.1, 0.0);
glEnd();


//door
glColor3f (.498, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f (0.25, 0.1, 0.0);
glVertex3f (0.35, 0.1, 0.0);
glVertex3f ( 0.35, 0.40, 0.0);
glVertex3f (0.25, 0.40, 0.0);
glEnd();


//left window
glColor3f (.863, 0.078, 0.235);
glBegin(GL_POLYGON);
glVertex3f (0.11, 0.25, 0.0);
glVertex3f (0.20, 0.25, 0.0);
glVertex3f ( 0.20, 0.38, 0.0);
glVertex3f (0.11, 0.38, 0.0);
glEnd();


//right window
glColor3f (.863, 0.078, 0.235);
glBegin(GL_POLYGON);
glVertex3f (0.40, 0.25, 0.0);
glVertex3f (0.49, 0.25, 0.0);
glVertex3f (0.49, 0.38, 0.0);
glVertex3f ( 0.40, 0.38, 0.0);
glEnd();


//triangle
glColor3f (.863, 0.078, 0.235);
glBegin(GL_POLYGON);
glVertex3f (0.08, 0.55, 0.0);
glVertex3f (0.52, 0.55, 0.0);
glVertex3f ( 0.30, 0.75, 0.0);
glEnd();


//small tree
glColor3f (0.5, 0.65, 0);
glBegin(GL_POLYGON);
glVertex3f (0.75, 0.50, 0.0);
glVertex3f (0.97, 0.50, 0.0);
glVertex3f ( 0.86, 0.80, 0.0);
glEnd();
glColor3f (0.5, 0.65, 0);
glBegin(GL_POLYGON);
glVertex3f (0.75, 0.45, 0.0);
glVertex3f (0.97, 0.45, 0.0);
glVertex3f ( 0.86, 0.75, 0.0);
glEnd();
glColor3f (1, 0.3, 0.1);
glBegin(GL_POLYGON);
glVertex3f (0.840, 0.25, 0.0);
glVertex3f (0.875, 0.25, 0.0);
glVertex3f ( 0.875, 0.45, 0.0);
glVertex3f (0.840, 0.45, 0.0);
glEnd();


//tree
glColor3f (0, .65, 0);
glBegin(GL_POLYGON);
glVertex3f (0.60, 0.65, 0.0);
glVertex3f (0.85, 0.65, 0.0);
glVertex3f ( 0.725, 0.85, 0.0);
glEnd();
glColor3f (0, 0.65, 0);
glBegin(GL_POLYGON);
glVertex3f (0.60, 0.60, 0.0);
glVertex3f (0.85, 0.60, 0.0);
glVertex3f ( 0.725, 0.80, 0.0);
glEnd();
glColor3f (0, 0.65, 0);
glBegin(GL_POLYGON);
glVertex3f (0.60, 0.55, 0.0);
glVertex3f (0.85, 0.55, 0.0);
glVertex3f ( 0.725, 0.75, 0.0);
glEnd();
glColor3f (0.75, 0.3, 0.1);
glBegin(GL_POLYGON);
glVertex3f (0.710, 0.25, 0.0);
glVertex3f (0.740, 0.25, 0.0);
glVertex3f ( 0.740, 0.55, 0.0);
glVertex3f (0.710, 0.55, 0.0);
glEnd();


//bench
glColor3f (0.72, 1.0, 0.7);
glBegin(GL_POLYGON);
glVertex3f (0.52, 0.18, 0.0);
glVertex3f (0.82, 0.18, 0.0);
glVertex3f (0.92, 0.22, 0.0);
glVertex3f (0.62, 0.22, 0.0);
glEnd();
glColor3f (0, 1.0, 0.7);
glBegin(GL_POLYGON);
glVertex3f (0.52, 0.17, 0.0);
glVertex3f (0.82, 0.17, 0.0);
glVertex3f (0.82, 0.18, 0.0);
glVertex3f (0.52, 0.18, 0.0);
glEnd();
glColor3f (0.1, 1.0, 0.7);
glBegin(GL_POLYGON);
glVertex3f (0.82, 0.17, 0.0);
glVertex3f (0.92, 0.21, 0.0);
glVertex3f (0.92, 0.22, 0.0);
glVertex3f (0.82, 0.18, 0.0);
glEnd();
glColor3f (0.3, 1.0, 0);
glBegin(GL_POLYGON);
glVertex3f (0.55, 0.14, 0.0);
glVertex3f (0.82, 0.14, 0.0);
glVertex3f (0.82, 0.17, 0.0);
glVertex3f (0.55, 0.17, 0.0);
glEnd();
glColor3f (0.1, 1.0, 0);
glBegin(GL_POLYGON);
glVertex3f (0.82, 0.14, 0.0);
glVertex3f (0.90, 0.17, 0.0);
glVertex3f (0.90, 0.202, 0.0);
glVertex3f (0.82, 0.17, 0.0);
glEnd();

//man head
glColor3f (0.957, 0.643, 0.376);
glBegin(GL_POLYGON);
glVertex3f (0.62, 0.25, 0.0);
glVertex3f (0.66, 0.35, 0.0);
glVertex3f ( 0.58, 0.35, 0.0);
glEnd();


//man body
glColor3f (0, 0, 1);
glBegin(GL_POLYGON);
glVertex3f (0.62, 0.25, 0.0);
glVertex3f (0.64, 0.30, 0.0);
glVertex3f ( 0.60, 0.30, 0.0);
glEnd();
glColor3f (0, 0, 1);
glBegin(GL_POLYGON);
glVertex3f (0.575, 0.20, 0.0);
glVertex3f (0.665, 0.20, 0.0);
glVertex3f ( 0.665, 0.275, 0.0);
glVertex3f (0.575, 0.275, 0.0);
glEnd();


//man face
glColor3f (.75, 0.1, 0);
glBegin(GL_POLYGON);
glVertex3f (0.608, 0.31, 0.0);
glVertex3f (0.632, 0.31, 0.0);
glVertex3f (0.632, 0.315, 0.0);
glVertex3f (0.608, 0.315, 0.0);
glEnd();
glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (0.59, 0.33, 0.0);
glVertex3f (0.61, 0.33, 0.0);
glVertex3f (0.61, 0.34, 0.0);
glVertex3f (0.59, 0.34, 0.0);
glEnd();
glColor3f (0, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (0.63, 0.33, 0.0);
glVertex3f (0.65, 0.33, 0.0);
glVertex3f (0.65, 0.34, 0.0);
glVertex3f (0.63, 0.34, 0.0);
glEnd();

//man leg
glColor3f (1, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (0.59, 0.12, 0.0);
glVertex3f (0.61, 0.12, 0.0);
glVertex3f (0.62, 0.22, 0.0);
glVertex3f (0.59, 0.22, 0.0);
glEnd();
glColor3f (1, 0, 0);
glBegin(GL_POLYGON);
glVertex3f (0.62, 0.12, 0.0);
glVertex3f (0.64, 0.12, 0.0);
glVertex3f (0.65, 0.22, 0.0);
glVertex3f (0.62, 0.22, 0.0);
glEnd();


/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.35, 0.0, 1.10, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Small Hut");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
