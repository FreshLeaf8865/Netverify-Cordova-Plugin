//
//  NMBaseServerTask+Utilities.h
//  Netverify.me
//
//  Created by Hunor Szabo on 29/04/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import "JMBaseServerTask.h"

@interface JMBaseServerTask (Utilities)

- (NSString *)stringFromHTTPMethod:(HTTPMethod)method;
- (NSString *)contentTypeString:(ContentType)contentType;
- (NSString *)stringFromContentType:(ContentType)accept;

- (void)addObject:(id)aObject forKey:(id<NSCopying>)aKey toDictionary:(NSMutableDictionary*)aDictionary;
- (NSArray*)createURLQueryFromParameters:(NSDictionary*)parameters;
- (NSURL *)createURLwithBaseURL:(NSString*)baseURL URLPath:(NSString*)urlPath parameters:(NSDictionary*)parameters;
- (NSString *) formatString: (NSString *) string forMaximumLength: (NSUInteger) maxLength;


@end
