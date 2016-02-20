//
//  JMNetworkState.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 18/06/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import "JMState.h"


@protocol JMNetworkStateImplementation <NSObject>

@required
- (void) willEnterStatePendingBlockImplementation;
- (void) didEnterStateErrorBlock;
- (void) didEnterStateSucessBlock;

@end


@interface JMNetworkState : JMState <NSCopying>

@property (nonatomic, assign, readonly) BOOL isCanceled;

- (void)executeTask;

- (void)didFailTask;

- (void)cancel;

- (void) initStateMachine;

- (NSString *) baseURL;
- (NSString *) fallbackURL;
- (NSString *) merchantApiToken;
- (NSString *) merchantApiSecret;

- (BOOL) isCurrentStatusSuccess;
- (BOOL) isCurrentStatusError;
- (BOOL) isExecutable;

@end
