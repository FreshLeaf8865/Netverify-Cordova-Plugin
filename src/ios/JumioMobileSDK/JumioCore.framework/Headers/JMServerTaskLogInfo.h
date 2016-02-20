//
//  JMRequestLogInfo.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 15/07/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMServerTaskLogInfo : NSObject

@property (nonatomic, strong) Class     taskClass;
@property (nonatomic, strong) NSData*   data;
@property (nonatomic, assign) long      executionTime;
@property (nonatomic, assign) NSInteger statusCode;
@property (nonatomic, strong) NSError*  error;

- (void)reset;

@end
