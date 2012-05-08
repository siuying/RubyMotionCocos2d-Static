/*
 * cocos2d for iPhone: http://www.cocos2d-iphone.org
 *
 * Copyright (c) 2008-2010 Ricardo Quesada
 * Copyright (c) 2011 Zynga Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/** @mainpage cocos2d for iPhone API reference
 *
 * @image html Icon.png
 *
 * @section intro Introduction
 * This is cocos2d API reference
 *
 * The programming guide is hosted here: http://www.cocos2d-iphone.org/wiki/doku.php/prog_guide:index
 *
 * <hr>
 *
 * @todo A native english speaker should check the grammar. We need your help!
 *
 */

// 0x00 HI ME LO
// 00   02 00 00
#define COCOS2D_VERSION 0x00020000


//
// all cocos2d include files
//
#import "ccConfig.h"	// should be included first

#import "CCActionManager.h"
#import "CCAction.h"
#import "CCActionInstant.h"
#import "CCActionInterval.h"
#import "CCActionEase.h"
#import "CCActionCamera.h"
#import "CCActionTween.h"
#import "CCActionEase.h"
#import "CCActionTiledGrid.h"
#import "CCActionGrid3D.h"
#import "CCActionGrid.h"
#import "CCActionProgressTimer.h"
#import "CCActionPageTurn3D.h"
#import "CCActionCatmullRom.h"

#import "CCAnimation.h"
#import "CCAnimationCache.h"
#import "CCSprite.h"
#import "CCSpriteFrame.h"
#import "CCSpriteBatchNode.h"
#import "CCSpriteFrameCache.h"

#import "CCLabelTTF.h"
#import "CCLabelBMFont.h"
#import "CCLabelAtlas.h"

#import "CCParticleSystem.h"
#import "CCParticleSystemQuad.h"
#import "CCParticleExamples.h"
#import "CCParticleBatchNode.h"

#import "CCTexture2D.h"
#import "CCTexturePVR.h"
#import "CCTextureCache.h"
#import "CCTextureAtlas.h"

#import "CCTransition.h"
#import "CCTransitionPageTurn.h"
#import "CCTransitionProgress.h"

#import "CCTMXTiledMap.h"
#import "CCTMXLayer.h"
#import "CCTMXObjectGroup.h"
#import "CCTMXXMLParser.h"
#import "CCTileMapAtlas.h"

#import "CCLayer.h"
#import "CCMenu.h"
#import "CCMenuItem.h"
#import "CCDrawingPrimitives.h"
#import "CCScene.h"
#import "CCScheduler.h"
#import "CCCamera.h"
#import "CCProtocols.h"
#import "CCNode.h"
#import "CCDirector.h"
#import "CCAtlasNode.h"
#import "CCGrabber.h"
#import "CCGrid.h"
#import "CCParallaxNode.h"
#import "CCRenderTexture.h"
#import "CCMotionStreak.h"
#import "CCConfiguration.h"

// Shaders
#import "CCGLProgram.h"
#import "ccGLStateCache.h"
#import "CCShaderCache.h"
#import "ccShaders.h"

//
// cocos2d macros
//
#import "ccTypes.h"
#import "ccMacros.h"

//
// Deprecated methods/classes/functions since v1.0
//
#import "ccDeprecated.h"

// Platform common
#import "Platforms/CCGL.h"
#import "Platforms/CCNS.h"


#import "CCTouchDispatcher.h"
#import "CCTouchDelegateProtocol.h"
#import "CCTouchHandler.h"
#import "CCGLView.h"
#import "CCDirectorIOS.h"

//
// cocos2d helper files
//
#import "Support/OpenGL_Internal.h"
#import "CCFileUtils.h"
#import "CGPointExtension.h"
#import "Support/ccCArray.h"
#import "Support/CCArray.h"
#import "Support/ccUtils.h"
#import "Support/TransformUtils.h"
#import "Support/CCProfiling.h"

//
// external
//
#import "kazmath/kazmath.h"
#import "kazmath/GL/matrix.h"



// free functions
NSString * cocos2dVersion(void);

