//
//  NetverifySubmissionTextView.h
//  Netverify
//
//  Created by Lukas Danzer on 19/05/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NetverifyViewController.h"

@interface NetverifySubmissionTextView : UITextView <NetverifyAppearance>

@property (nonatomic, strong) UIColor *textTintColor UI_APPEARANCE_SELECTOR;

@end
