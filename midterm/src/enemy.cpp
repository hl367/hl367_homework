
#include "enemy.hpp"
enemy::enemy() {


	enemy1.load("enemy.png");
	speed = 1;
	dir.x = 1;
}



void enemy::move() {


	enemy1.setAnchorPoint(enemy1.getWidth() / 2, enemy1.getHeight() / 2);

	enemy1.draw(pos.x, pos.y, size, size);

	


	//going right
	if ( pos.y <= 202 && pos.y >= 198 ||  pos.y <= 402 && pos.y >= 398
		||  pos.y <= 602 && pos.y >= 598 ||  pos.y <= 802 && pos.y >= 798) {
		pos.x = pos.x + speed * dir.x;  // moving the enemy right
		ofPushStyle();
		ofSetHexColor(0x00ff00);
		ofDrawBitmapString("Use arrow to move LEFT and RIGHT and use SPACE to shoot", 300, 86);
		ofPopStyle();
	}
	//going left
	if ( pos.y <= 302 && pos.y >= 298 ||  pos.y <= 502 && pos.y >= 498
		||  pos.y <= 702 && pos.y >= 698 || pos.y <= 902 && pos.y >= 898) {
		pos.x = pos.x - speed * dir.x;  // moving the enemy left
		ofPushStyle();
		ofSetHexColor(0x00ff00);
		ofDrawBitmapString("Use arrow to move LEFT and RIGHT and use SPACE to shoot", 300, 86);
		ofPopStyle();
	}

	if (pos.y <= 302 && pos.y >= 298) {
		ofPushStyle();
		ofSetHexColor(0x00ff00);
		ofDrawBitmapString("Can't shoot? She bu chu lai?", 300, 186);
		ofPopStyle();
	}

	if (pos.y <= 402 && pos.y >= 398) {
		ofPushStyle();
		ofSetHexColor(0x00ff00);
		ofDrawBitmapString("This game is not finished yet. Shi jian bu gou a QAQ", 300, 286);
		ofPopStyle();
	}
	if (pos.y <= 502 && pos.y >= 498) {
		ofPushStyle();
		ofSetHexColor(0x00ff00);
		ofDrawBitmapString("My Collision detection failed. Wo tai nan le", 300, 386);
		ofPopStyle();
	}
	if (pos.y <= 602 && pos.y >= 598) {
		ofPushStyle();
		ofSetHexColor(0x00ff00);
		ofDrawBitmapString("Still thank Prof Bacon very much for giving many extra time", 300, 486);
		ofPopStyle();
	}
	if (pos.y <= 702 && pos.y >= 698) {
		ofPushStyle();
		ofSetHexColor(0x00ff00);
		ofDrawBitmapString("Kan zhe ta zhu jian bi jin jue bu jue wang a", 300, 586);
		ofPopStyle();
		
	}
	if (pos.y <= 802 && pos.y >= 798) {
		ofPushStyle();
		ofSetHexColor(0x00ff00);
		ofDrawBitmapString("Jue wang wo jiu guan you xi la. I will maybe finish this game for my final", 280, 686);
		ofPopStyle();
	}
	

	


	//first going down
	if (pos.x >= 974 && pos.y <= 202 && pos.y >= 198) {
		pos.y += size; 
		speed = 1.3;
	}
	//second going down
	if (pos.x <= 120 && pos.y <= 302 && pos.y >= 298){
		pos.y += size; 
		speed = 1.5;
	}
	// 3th going down
	if (pos.x >= 974 && pos.y <= 402 && pos.y >= 398) {
		pos.y += size;
		speed = 1.9;
		
	}
	// 4th going down
	if (pos.x <= 120 && pos.y <= 502 && pos.y >= 498) {
		pos.y += size; 
		speed = 2.2;
		
	}
	// 5th going down
	if (pos.x >= 974 && pos.y <= 602 && pos.y >= 598) {
		pos.y += size; 
		speed = 2.5;
	}
	// 6th going down
	if (pos.x <= 120 && pos.y <= 702 && pos.y >= 698) {
		pos.y += size;
		speed = 2.5;
	}
	// 7th going down
	if (pos.x >= 974 && pos.y <= 802 && pos.y >= 798) {
		pos.y += size; 
		ofExit();
	}
	// 8th going down
	if (pos.x <= 120 && pos.y <= 902 && pos.y >= 898) {
		pos.y += size;
	}
}



void enemy::show(float x, float y, float s) {
	

	//starting position
	pos.x = x;
	pos.y = y;


	size = s;



		
}

void enemy::bulletandhit(float x, float y) {
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofDrawRectangle(x, y - 5, 20, 20);
	ofSetRectMode(OF_RECTMODE_CORNER);
	
}


