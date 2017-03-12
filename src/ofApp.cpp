#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofBackground(150, 150, 150);
    ofSetColor(255, 255, 255, 200);
    ofSetLineWidth(1);
    ofNoFill();
    ofSetCircleResolution(60);
    
    
    
    
    ofSetBackgroundAuto(false);
    
    xstart = ofRandom(10);
    ynoise = ofRandom(10);
    
    OF_BLENDMODE_ADD;
    

   
    
   }

//--------------------------------------------------------------
void ofApp::update(){
    
    
    
   
    
   

    }

//--------------------------------------------------------------

void ofApp::draw(){
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2,0);
    
    
    
    for(y = -(ofGetHeight()/8); y <= (ofGetHeight()/8); y+=3){
        ynoise += 0.02;
        xnoise = xstart;
        
        for(x = -(ofGetWidth()/8);x <= (ofGetWidth()/8); x+=3){
            xnoise += 0.02;
            noiseFactor = ofNoise(xnoise, ynoise);
            
            
            ofPushMatrix();
            cout << x << endl;
            
            ofTranslate(x*noiseFactor*4, y*noiseFactor*4, -y);
            edgeSize = noiseFactor*10;
            ofDrawCircle(0, 0, edgeSize);
            
            ofPopMatrix();
            

            }
        
        

        }
    
    
        
 
    
}
//--------------------------------------------------------------


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
