//
//  AppDelegate.h
//  zdnz
//
//  Created by babywolf on 15/12/21.
//  Copyright © 2015年 com.babywolf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "libWeiboSDK/WeiboSDK.h"
#import "LoginViewController.h"
#import "SinaOAuthDelegate.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, WeiboSDKDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, weak) id<SinaOAuthDelegate> delegate;

@end

