//
//     Generated by private class-dump
//

@protocol AWETabMallVisibleManagerProtocol <NSObject>

+ (id)sharedManager;

@property (readonly, nonatomic) BOOL visible;

- (void)handleAppBecomeActive;
- (void)slideIn;
- (void)slideOut;
- (void)registerVisibleDelegate:(id)arg0;
- (void)landToMall;
- (BOOL)visible;
- (void)handleAppWillResignActive;

@end
