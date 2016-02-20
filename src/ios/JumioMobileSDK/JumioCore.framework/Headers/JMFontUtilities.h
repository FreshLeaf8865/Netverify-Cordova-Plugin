//
//  JMFontUtilities.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 15/01/16.
//  Copyright © 2016 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMFontUtilities : NSObject

+ (UIFont*)lightFontWithSize:(float)size ;
+ (UIFont*)regularFontWithSize:(float)size;
+ (UIFont*)mediumFontWithSize:(float)size;
+ (UIFont*)boldFontWithSize:(float)size;
+ (UIFont*)boldObliqueFontWithSize:(float)sizel;

@end
