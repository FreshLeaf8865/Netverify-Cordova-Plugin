//
//  NetswipeNegativeButton.h
//  Netswipe
//
//  Created by Cosmin-Valentin Popescu on 18/01/16.
//  Copyright © 2016 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NetswipeViewController.h"

@interface NetswipeNegativeButton : UIButton<NetswipeAppearance>

- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (UIColor *)backgroundColorForState:(UIControlState)state UI_APPEARANCE_SELECTOR;

@end
