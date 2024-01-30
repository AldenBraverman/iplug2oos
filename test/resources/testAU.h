
#include <TargetConditionals.h>
#if TARGET_OS_IOS == 1
#import <UIKit/UIKit.h>
#else
#import <Cocoa/Cocoa.h>
#endif

#define IPLUG_AUVIEWCONTROLLER IPlugAUViewController_vtest
#define IPLUG_AUAUDIOUNIT IPlugAUAudioUnit_vtest
#import <testAU/IPlugAUViewController.h>
#import <testAU/IPlugAUAudioUnit.h>

//! Project version number for testAU.
FOUNDATION_EXPORT double testAUVersionNumber;

//! Project version string for testAU.
FOUNDATION_EXPORT const unsigned char testAUVersionString[];

@class IPlugAUViewController_vtest;
