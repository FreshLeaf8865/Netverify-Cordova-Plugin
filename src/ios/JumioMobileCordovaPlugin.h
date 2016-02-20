#import <Cordova/CDV.h>
#import <Netverify/Netverify.h>
#import <Netswipe/Netswipe.h>

@interface JumioMobileCordovaPlugin : CDVPlugin <NetverifyViewControllerDelegate, NetswipeViewControllerDelegate>

- (void)netverifySdkVersion:(CDVInvokedUrlCommand *)command;

- (void)isSupportedPlatformForNetverify:(CDVInvokedUrlCommand *)command;

- (void)presentNetverifyController:(CDVInvokedUrlCommand *)command;

- (void)configureNetverifyControllerAppearence:(CDVInvokedUrlCommand *)command;

- (void)netswipeSdkVersion:(CDVInvokedUrlCommand *)command;

- (void)isSupportedPlatformForNetswipe:(CDVInvokedUrlCommand *)command;

- (void)isRootedDevice:(CDVInvokedUrlCommand *)command;

- (void)presentNetswipeController:(CDVInvokedUrlCommand *)command;

- (void)configureNetswipeControllerAppearence:(CDVInvokedUrlCommand *)command;

@end
