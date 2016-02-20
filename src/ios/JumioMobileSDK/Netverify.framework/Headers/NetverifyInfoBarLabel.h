//
//  NetverifyInfoBarLabel.h
//  Netverify
//
//  Created by Lukas Danzer on 20/05/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NetverifyViewController.h"

@interface NetverifyInfoBarLabel : UILabel <NetverifyAppearance>

@property (nonatomic, strong) UIColor *titleColor UI_APPEARANCE_SELECTOR;

@end
