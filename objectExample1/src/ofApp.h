#pragma once

#include "ofMain.h"



class circle{
 
    public:
    
    float x;
    float y;
    float radius;
    ofColor color;
    
};




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
		
// this is so last week !
//    float xPositions[100];
//    float yPositions[100];
//    float radii[100];
    
    circle myCircles[100];
    
    
    
    
    
};
