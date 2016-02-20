//
//  NVBackgroundImageView.h
//  JumioMobileSDK
//
//  Created by Jumio Inc. on 23/01/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NetverifyViewController.h"

@interface NetverifyBackgroundImageView : UIImageView <NetverifyAppearance>

@property (nonatomic, strong) UIImage *backgroundImage UI_APPEARANCE_SELECTOR;

@end
