//
//  Actor.hpp
//  BarrageGame
//
//  Created by Ryoutarou Onimura on 2016/07/07.
//
//

#ifndef Actor_hpp
#define Actor_hpp

#include <stdio.h>

//=========================================================================
// 追加のインクルードはここから
//=========================================================================
#include "Object.hpp"

//=========================================================================
//
// Object
//
//=========================================================================
class CActor : public CObject {
public :
    //=========================================================================
    // コンストラクタ/デストラクタ
    //=========================================================================
    /**
     *  @desc   destructor
     */
    virtual ~CActor(){}
    
    //=========================================================================
    // メンバ関数
    //=========================================================================
    /**
     *  @desc   アクション処理
     */
    virtual void action() = 0 ;
    
    /**
     *  @desc   移動処理
     */
    virtual void move() = 0 ;
    
};

#endif /* Actor_hpp */