/****************************************************
 * 2016-2023 Eric Bachmann and Mike Zmuda
 * All Rights Reserved.
 * NOTICE:
 * Dissemination of this information or reproduction
 * of this material is prohibited unless prior written
 * permission is granted.
 ****************************************************/

#include <ctime>
#include <vector>
#include "defs.h"
#include "utilities.h"
#include "framebuffer.h"
#include "colorandmaterials.h"
#include "rasterization.h"
#include "io.h"

FrameBuffer frameBuffer(WINDOW_WIDTH, WINDOW_HEIGHT);

void render() {
	frameBuffer.clearColorBuffer();
	drawLine(frameBuffer, 0, 0, 100, 100, red);
	drawLine(frameBuffer, 100, 100, 200, 100, blue);
	frameBuffer.showColorBuffer();
}

void resize(int width, int height) {
	frameBuffer.setFrameBufferSize(width, height);
	glutPostRedisplay();
}

int main(int argc, char* argv[]) {
	/*graphicsInit(argc, argv, __FILE__);

	glutDisplayFunc(render);
	glutReshapeFunc(resize);
	glutKeyboardFunc(keyboardUtility);
	glutMouseFunc(mouseUtility);

	frameBuffer.setClearColor(paleGreen);

	glutMainLoop();

	return 0;
	*/

	cout << glm::radians(180.0) << endl;

	double x = 34;
	double y = 100;
	cout << x << ' ' << y << endl;
	swap(x, y);
	cout << x << ' ' << y << endl;

	cout << approximatelyEqual(3.000000, 3.0000000001) << endl;
	cout << approximatelyEqual(3.0000000001, 3.000000) << endl;
	cout << approximatelyEqual(3.000000, 3.1) << endl;
	cout << approximatelyEqual(-3.000000, -3.000000001) << endl;
	cout << approximatelyEqual(3.000000, -3.000000001) << endl;
	return 0;
}