//
//  JMNavigationBarItem.h
//  JumioMobileSDK
//
//  Created by Jumio Inc. on 21/01/15.
//  Copyright (c) 2014 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMNavigationBarItem : UIButton

- (id)initWithSize:(CGSize)size;

- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state UI_APPEARANCE_SELECTOR;

@end
