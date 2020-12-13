#pragma once

#include "ofMain.h"
#include "ofxRaycaster.h"
#include "fireray.h"

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
		
		int numberofrays;
		float dist;
		

		ofVec2f currentposition;

		ofVec4f wallposition;

		float adistance, bdistance;

		ofVec2f raze, angle, unit;

		vector<float>number;
		vector <fireray> rays;
		//fireray rays[];

};

