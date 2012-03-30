#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    
    ofSetFrameRate(24);
	
    ofSoundStreamSetup(0,2,this, 44100, 512, 4);
    
    EQ.setup();
	EQ.setRangeLimit(1, 8);
    EQ.smooth = .2;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    EQ.debugDraw();
}

//--------------------------------------------------------------
void testApp::audioReceived (float * input, int bufferSize, int nChannels){	
	
	EQ.audioReceived(input, bufferSize);
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    if( key == 'r' ) {
        
        EQ.setup();
        
    }
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    EQ.setRange(x);
   
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}