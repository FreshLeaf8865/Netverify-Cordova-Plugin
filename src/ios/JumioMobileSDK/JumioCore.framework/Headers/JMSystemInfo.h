//
//  JMSystemInfo.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 15/01/16.
//  Copyright © 2016 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMSystemInfo : NSObject

+ (float)systemVersion;
+ (BOOL)isSystemVersionAtLeastOS8;
+ (BOOL)isSystemVersionAtLeastOS9;

@end
