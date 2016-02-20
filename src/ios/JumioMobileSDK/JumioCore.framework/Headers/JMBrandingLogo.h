//
//  JMBrandingLogo.h
//  JumioMobileSDK
//
//  Created by Cosmin-Valentin Popescu on 03/10/14.
//  Copyright (c) 2014 Jumio Inc. All rights reserved.
//

#import "JMBaseView.h"

@interface JMBrandingLogo : JMBaseView
@property (nonatomic, assign) CGFloat bottomRelativeOffset;

- (id)initWithLogoImage:(UIImage*)image;
@end
