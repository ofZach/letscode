

#include "dataPlayer.h"
#include "data.h"


//---------------------------------------------------------------
void dataPlayer::setup(){
    
    
    //----------------------------------------------------------------
    // the data is stored in a big flat array, let's copy it into something more managable
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 24; j++){
            float x = data3d[ i * 24 * 3  + j * 3 + 0 ];
            float y = data3d[ i * 24 * 3  + j * 3 + 1 ];
            float z = data3d[ i * 24 * 3  + j * 3 + 2 ];
            frames[i][j].set(x,y,z);
        }
    }
    
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 24; j++){
            float x = data2d[ i * 24 * 2  + j * 2 + 0 ];
            float y = data2d[ i * 24 * 2  + j * 2 + 1 ];
            frames2d[i][j].set(x,y);
        }
    }
    //----------------------------------------------------------------
}


//---------------------------------------------------------------
void dataPlayer::update(){
    
    for (int i = 0; i < 24; i++){
        currentFrame[i] = frames2d[ (int)(ofGetFrameNum()*0.5) % 30][i];
    }
    
}


//---------------------------------------------------------------
void dataPlayer::draw(){
}