//
//     Generated by private class-dump
//

@protocol AWECommerceSplashStyleViewDelegate;

@protocol AWECommerceSplashStyleViewProtocol <NSObject>

@property (weak, nonatomic) id<AWECommerceSplashStyleViewDelegate> delegate;

- (BOOL)hasDowngraded;
- (void)triggerSplashActionWithTiming:(unsigned long long)arg0;
- (void)setConversionViewHidden:(BOOL)arg0;
- (void)removeFakeLaunchScreen;
- (void)hideCacheLabel;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)hideLogo;

@end
