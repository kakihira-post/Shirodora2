//
//  BattleScene.cpp
//  Shirodora
//
//  Created by Ryoutarou Onimura on 2016/07/14.
//
//

#include "BattleScene.hpp"

//=========================================================================
// 追加のインクルードはここから
//=========================================================================
#include "Constants.hpp"

//=========================================================================
//
// BattleScene
//
//=========================================================================
//=========================================================================
// コンストラクタ/デストラクタ
//=========================================================================
/**
 *  @desc   constructor
 */
CBattleScene::CBattleScene(){}

/**
 *  @desc   destructor
 */
CBattleScene::~CBattleScene(){
    
}

//=========================================================================
// init
//=========================================================================
/**
 *  @desc   init
 */
bool CBattleScene::init(){
    if(cocos2d::Scene::init() == false) return false ;
    
    // メインレイヤーの生成と取り付け
    this->m_pMainLayer = CCREATE_FUNC::create<CBattele_MainLayer>() ;
    this->addChild(this->m_pMainLayer) ;
    
    // スケジューラーに登録
    this->scheduleUpdate() ;
    
    return true ;
}

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
void CBattleScene::update(float deltaTime){
    
}