//
//  NSWAppStyle.h
//  NetswipeScanSDK
//
//  Created by iOSDev on 7/17/13.
//  Copyright (c) 2013 Jumio Inc. All rights reserved.
//

#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]


static NSString *const NSWFontName_OCR = @"OCRAExtended";

#define JMColor_ExtraDarkGray RGBCOLOR(51.f, 51.f, 51.f)
#define JMColor_DarkGray RGBCOLOR(102.f, 102.f, 102.f)
#define JMColor_GrayTextColor RGBCOLOR(160.f,160.f,160.f)
#define JMColor_CellBackground_Enabled [UIColor colorWithWhite:1.f alpha:.8f]
#define JMColor_CellBackground_Disabled [UIColor colorWithWhite:1.f alpha:.3f]

#define JMColor_JumioGreen RGBCOLOR(151.0, 190.0, 13.0)
#define JMColor_ButtonDisabled RGBCOLOR(127.0, 127.0, 127.0)
#define JMColor_FlashIndicator [UIColor whiteColor]
#define JMColor_JumioWashedWhiteTitleColor RGBCOLOR(211.0, 211.0, 211.0)
#define JMColor_white RGBCOLOR(255.0, 255.0, 255.0)

#define JMColor_cancelButton RGBCOLOR(103.0, 103.0, 103.0)
#define JMColor_cancelButtonHighlighted [UIColor darkGrayColor]
#define JMColor_cancelButtonDisabled [UIColor lightGrayColor]
