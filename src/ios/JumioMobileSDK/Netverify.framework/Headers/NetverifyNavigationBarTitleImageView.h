//
//  NetswipeTitleImageView.h
//  JumioMobileSDK
//
//  Created by Jumio Inc. on 21/01/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NetverifyViewController.h"

@interface NetverifyNavigationBarTitleImageView : UIImageView <NetverifyAppearance>

@property (nonatomic, strong) UIImage *titleImage UI_APPEARANCE_SELECTOR;

@end
