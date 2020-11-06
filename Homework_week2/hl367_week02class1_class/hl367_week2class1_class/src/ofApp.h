#pragma once

#include "ofMain.h"
#include "Ball.h"	

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    Ball ball1;
    Ball ball2;
    Ball ball3;
	Ball ball4;
	Ball ball5;
	Ball ball6;
	Ball ball7;
	Ball ball8;
	Ball ball9;

    ofVec2f gravity;
	ofVec2f wind;
	int frame;

};
