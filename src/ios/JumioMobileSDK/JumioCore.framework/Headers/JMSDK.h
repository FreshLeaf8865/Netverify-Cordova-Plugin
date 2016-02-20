//
//  JMSDK.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 19/03/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    JumioDataCenterUS,
    JumioDataCenterEU
} JumioDataCenter;

typedef enum {
    JumioCameraPositionBack,
    JumioCameraPositionFront,
} JumioCameraPosition;

extern NSString * const kJMSDKBundleShortVersionKey;
extern NSString * const kJMSDKBundleVersionKey;

@interface JMSDK : NSObject

@property (nonatomic, strong) NSBundle * bundle;
@property (nonatomic, strong, readonly) NSDictionary * plistDictionary;

- (NSDictionary *) mobileDeviceDetails;

- (NSString*)shortVersionString;

- (NSString*)versionString;

- (NSString*)sdkVersionString;

- (NSString*)sdkVersionStringFull;

- (NSString*)bundleValueForKey:(NSString* const)key;


@end
