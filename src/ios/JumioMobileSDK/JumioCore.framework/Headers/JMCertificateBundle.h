//
//  JMCertificateBundle+Utilities.h
//  NetverifySDK
//
//  Created by iOSDev on 5/6/13.
//  Copyright (c) 2013 Jumio Inc. All rights reserved.
//

#import <JumioCore/JMSDK.h>

@interface JMCertificateBundle : NSObject
+ (NSArray *) pinnedPublicKeysForDataCenter: (JumioDataCenter) dataCenter fromResourceBundle: (NSString*) bundle;
//+ (void) logPublicKeyFromCertificateData:(NSData *)leafCertificateData andLogMessage:(NSString *)message;
@end
