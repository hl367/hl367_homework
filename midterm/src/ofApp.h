#pragma once

#include "ofMain.h"
#include "ofxGui.h"

#include "fishing.hpp"
#include "shi.hpp"
#include "space.hpp"
#include "background.hpp"
#include "start.hpp"
#include "touch.hpp"
//#include "ship.hpp"		
#include "bullet.hpp"		
#include "enemy.hpp"		




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

	
	
	ofxPanel gui;

	ofParameterGroup ParameterGroup;
	fishrod fishrod;
	shi shi;
	UFO UFO;
	background water;
	background background;
	start start;
	touch touch;
	ofImage thebackground;


	bullet  bullets;


	//enemy enemy;
	ship ship;

	enemy  enemies[enemynumber];
	
	ofxIntSlider intsliderx;
	ofxIntSlider intslidery;
	ofxToggle toggle;

	float X, Y, distance, size;
	bool addhook;
	bool testing;
	bool getfishrod;
	bool ufofall;
	bool startbutton;
	bool word1;
	bool word2; 
	bool word3;//backup
	int num;
	bool shootbullet, locate, test;
	bool startspaceinvader;

	ofVec2f shootaction, enemyposition;
	ofVec2f shoot;
};
