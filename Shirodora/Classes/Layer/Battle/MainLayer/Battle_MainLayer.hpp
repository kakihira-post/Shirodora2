//
//  GameMainLayer.hpp
//  Shirodora
//
//  Created by Ryoutarou Onimura on 2016/07/03.
//
//

#ifndef GameMainLayer_hpp
#define GameMainLayer_hpp

#include <stdio.h>

//=========================================================================
// 追加のインクルードはここから
//=========================================================================
#include "InputAndMouseLayer.hpp"

//=========================================================================
//
// Battele_MainLayer
//
//=========================================================================
class CBattele_MainLayer : public CInputAndMouseLayer {
public :
    //=========================================================================
    // コンストラクタ/デストラクタ
    //=========================================================================
    /**
     *  @desc   constructor
     */
    CBattele_MainLayer() ;
    
    /**
     *  @desc   destructor
     */
    virtual ~CBattele_MainLayer() ;
    
    //=========================================================================
    // init
    //=========================================================================
    /**
     *  @desc   init
     */
    virtual bool init() override ;
    
    //=========================================================================
    // set
    //=========================================================================
    
    //=========================================================================
    // get
    //=========================================================================
    
    //=========================================================================
    // メンバ関数
    //=========================================================================
    /**
     *  @desc   update
     *  @param  微小時間
     */
    virtual void update(float deltaTime) override ;
    
    //=========================================================================
    // メンバ変数
    //=========================================================================
    // !!!:テスト用マウスカーソルスプライト
    cocos2d::Sprite *m_pCursor {NULL} ;
    
    // TODO:多分画面スクロール時にいる気がする
    // カメラ座標
    cocos2d::Vec2 m_cameraPosition ;
    
};

#endif /* GameMainLayer_hpp */
