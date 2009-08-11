//
//  StervoxyTanksAppDelegate.h
//  StervoxyTanks
//
//  Created by Joachim Bengtsson on 2009-08-10.
//  Copyright Third Cog Software 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EAGLView;

@interface StervoxyTanksAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    UINavigationController *nav;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *nav;

@end

