#pragma once

#include "ofMain.h"
#include "snow.h"
#include "box.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	ofMesh mesh;

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	//ofMesh mesh;

	float boxheight;
	int numsnows;
	snow snows[101];
	float circlesize;
	
	// vector<box> boxes; abandoned no use

	ofEasyCam easyCam;

	ofVec3f force;
	bool activate;
};
