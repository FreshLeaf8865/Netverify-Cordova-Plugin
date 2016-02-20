//
//  ResourceLoader.h
//  JumioMobileSDK
//
//  Created by Cosmin-Valentin Popescu on 12/05/14.
//  Copyright (c) 2014 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <JumioCore/JMSDK.h>

#define SharedResourceLoader [JMResourceLoader sharedInstance]

extern NSString * const kNetswipeSDKResources;
extern NSString * const kNetverifySDKResources;

@interface JMResourceLoader : NSObject

@property (nonatomic, weak) NSBundle *netswipeBundle;
@property (nonatomic, weak) NSBundle *netverifyBundle;

+ (JMResourceLoader *)sharedInstance;

- (UIImage*)getImageWithName:(NSString*)imageName bundleName:(NSString*)bundleName;
- (NSData*)getCertificateForDataCenter: (JumioDataCenter) dataCenter fromResourceBundle: (NSString*)bundleName;
- (NSData*)getFontWithName:(NSString*)name bundleName:(NSString*)bundleName;
- (NSString*)getOCRRootPathForBundle:(NSString*)bundleName;

+ (NSString*) suffixForImagesDependingOnDeviceScreenScale;

+ (UIImage*) imageResourceWithName: (NSString*) imageName;

@end
