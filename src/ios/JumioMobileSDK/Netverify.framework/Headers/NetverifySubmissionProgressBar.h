//
//  NetverifySubmissionProgressBar.h
//  Netverify
//
//  Created by Lukas Danzer on 15/01/16.
//  Copyright © 2016 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NetverifyViewController.h"

@interface NetverifySubmissionProgressBar : UIView <NetverifyAppearance>

- (void)setPositiveColor:(UIColor *)backgroundColor UI_APPEARANCE_SELECTOR;
- (UIColor *)positiveColor UI_APPEARANCE_SELECTOR;
- (void)setNegativeColor:(UIColor *)backgroundColor UI_APPEARANCE_SELECTOR;
- (UIColor *)negativeColor UI_APPEARANCE_SELECTOR;


@end
