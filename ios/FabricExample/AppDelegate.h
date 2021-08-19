#import <UIKit/UIKit.h>

@class RCTBridge;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, strong) UIWindow *window;
@property (nonatomic, readonly) RCTBridge *bridge;

@end
