//
//  NetverifyMrzData.h
//  JumioMobileSDK
//
//  Created by Christian Neudorfer on 28.05.14.
//  Copyright (c) 2014 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
    NVMRZFormatUnknown = 0,
    NVMRZFormatMRP,
    NVMRZFormatMRVA,
    NVMRZFormatMRVB,
    NVMRZFormatTD1,
    NVMRZFormatTD2,
    NVMRZFormatCNIS
} NVMRZFormat;

@interface NetverifyMrzData : NSObject

@property (nonatomic, strong) NSString *line1;
@property (nonatomic, strong) NSString *line2;
@property (nonatomic, strong) NSString *line3;
@property (nonatomic, assign) NVMRZFormat format;

- (BOOL) idNumberValid;
- (BOOL) dobValid;
- (BOOL) expiryDateValid;
- (BOOL) personalNumberValid;
- (BOOL) compositeValid;

@end
