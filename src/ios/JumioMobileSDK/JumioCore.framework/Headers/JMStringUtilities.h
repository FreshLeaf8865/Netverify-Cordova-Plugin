//
//  JMTextUtilities.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 27/04/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#define NSStringFromBOOL(boolValue) boolValue? @"YES" : @"NO"

@interface JMStringUtilities : NSObject

+ (NSDictionary *)stringAttributesDictionaryWithFont:(UIFont * const)font fontColor:(UIColor * const)fontColor shadow:(NSShadow * const)shadow alignment:(NSTextAlignment) alignment;

+ (NSString *) formatString:(NSString *)string forMaximumLength:(NSUInteger)maxLength regex:(NSString *)regex;
+ (NSString *) trimLeadingTrailingWhiteSpaceFromString:(NSString*)string;
+ (NSString *) formatStringByTrimmingLeadingAndTrailingWhiteSpace:(NSString *)string forMaximumLength:(NSUInteger)maxLength;
+ (NSString *) formatStringByTrimmingLeadingAndTrailingWhiteSpace:(NSString *)string forMaximumLength:(NSUInteger)maxLength withRegex:(NSString*)regex;

+ (NSString *) trimString:(NSString*)string toMaximumLength: (NSUInteger) maxLength;
+ (NSString *) secureSubstringFromIndex:(NSUInteger)index inString:(NSString*)string;
+ (NSUInteger) indexOf:(NSString *)text inString:(NSString*)string;

+ (NSUInteger) levenshteinDistanceToString:(NSString *)source fromString:(NSString*)destination;
+ (NSInteger) distanceBetweenNames:(NSString*)nameA nameB:(NSString*)nameB;
+ (BOOL)isNumericString:(NSString*)string;
@end
