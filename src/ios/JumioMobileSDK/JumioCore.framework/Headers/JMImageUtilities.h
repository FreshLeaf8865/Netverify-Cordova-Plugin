//
//  JMImageUtilities.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 15/01/16.
//  Copyright © 2016 Jumio Inc. All rights reserved.
//

#import <JumioCore/JumioCore.h>

@interface JMImageUtilities : NSObject

+ (UIImage *)cropRect:(CGRect)rect fromImage:(UIImage*)image;

+ (UIImage *)scaleImageProportionaly:(UIImage*)sourceImage toSize:(CGSize)targetSize;
+ (UIImage *)scaleImage:(UIImage*)sourceImage toSize:(CGSize)targetSize;
+ (UIImage*)rotateImage:(UIImage*) image byDegrees:(CGFloat)degrees;

+ (UIImage *)applyBlurWithRadius:(CGFloat)blurRadius toImage:(UIImage*)image;
+ (UIImage *)imageWithColor:(UIColor *)color;
@end
