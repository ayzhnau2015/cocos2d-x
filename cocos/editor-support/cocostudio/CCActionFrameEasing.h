﻿/****************************************************************************
Copyright (c) 2013-2014 Chukong Technologies Inc.

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef __ActionFrameEasing_H__
#define __ActionFrameEasing_H__

#include "base/CCRef.h"
#include "editor-support/cocostudio/CocosStudioExport.h"

namespace cocostudio {

enum FrameEasingType
{
    kframeEasingInstant,

    kframeEasingLinear,

    kframeEasingCubicIn,
    kframeEasingCubicOut,
    kframeEasingCubicInOut,

    kframeEasingElasticIn,
    kframeEasingElasticOut,
    kframeEasingElasticInOut,

    kframeEasingBounceIn,
    kframeEasingBounceOut,
    kframeEasingBounceInOut,

    kframeEasingBackIn,
    kframeEasingBackOut,
    kframeEasingBackInOut,
};

/**
*  @js NA
*  @lua NA
*/
class CC_STUDIO_DLL ActionFrameEasing:public cocos2d::Ref
{
protected:
    FrameEasingType _type;
    float _fValue;
public:
    /**
    * @~english Default constructor.
    * @~chinese 默认构造函数.
    */
    ActionFrameEasing();

    /**
    * @~english Default destructor.
    * @~chinese 默认析构函数.
    */
    virtual ~ActionFrameEasing();

    /**
    * @~english Calculate bounce time
    * @~chinese 计算跳动时间
    *
    * @param @~english current duration @~chinese 当前时长
    */
    float bounceTime(float t);

    /**
    * @~english Calculate ease value
    * @~chinese 计算缓动数值
    *
    * @param @~english current duration @~chinese 当前时长
    */
    float easeValue(float t);
};

}

#endif
