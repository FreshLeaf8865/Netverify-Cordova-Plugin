//
//  JMScreenInfo.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 14/01/16.
//  Copyright © 2016 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMScreenInfo : NSObject

+ (BOOL)isScreenAtLeast4Dot7Inch;
+ (BOOL)isScreenAtLeast5Dot5Inch;
+ (BOOL)isScreen3Dot5Inch;
+ (BOOL)isScreen4Inch;

@end
