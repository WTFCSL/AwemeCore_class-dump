//
//     Generated by private class-dump
//

@class UIColor, UIFont, NSString, UIImage;

@interface BDPlatformSDKConfigurationOld : NSObject {
    BOOL _navBarTranslucent;
    UIColor *_navBarTintColor;
    UIColor *_navBarHairlineColor;
    UIFont *_navBarTitleFont;
    UIColor *_navBarTitleColor;
    UIImage *_leftBarButtonImage;
    UIFont *_navBarButtonFont;
    UIColor *_navBarButtonColor;
    NSString *_loginButtonColorString;
    id /* block */ _networkReachabilityBlock;
}

@property (nonatomic) BOOL navBarTranslucent;
@property (retain, nonatomic) UIColor *navBarTintColor;
@property (retain, nonatomic) UIColor *navBarHairlineColor;
@property (retain, nonatomic) UIFont *navBarTitleFont;
@property (retain, nonatomic) UIColor *navBarTitleColor;
@property (retain, nonatomic) UIImage *leftBarButtonImage;
@property (retain, nonatomic) UIFont *navBarButtonFont;
@property (retain, nonatomic) UIColor *navBarButtonColor;
@property (copy, nonatomic) NSString *loginButtonColorString;
@property (copy, nonatomic) id /* block */ networkReachabilityBlock;

- (BOOL)navBarTranslucent;
- (void)setNavBarTranslucent:(BOOL)arg0;
- (id)navBarTintColor;
- (void)setNavBarTintColor:(id)arg0;
- (id)navBarHairlineColor;
- (void)setNavBarHairlineColor:(id)arg0;
- (id)navBarTitleFont;
- (void)setNavBarTitleFont:(id)arg0;
- (id)leftBarButtonImage;
- (void)setLeftBarButtonImage:(id)arg0;
- (id)navBarButtonFont;
- (void)setNavBarButtonFont:(id)arg0;
- (id)navBarButtonColor;
- (void)setNavBarButtonColor:(id)arg0;
- (id)loginButtonColorString;
- (void)setLoginButtonColorString:(id)arg0;
- (id /* block */)networkReachabilityBlock;
- (void)setNetworkReachabilityBlock:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)navBarTitleColor;
- (void)setNavBarTitleColor:(id)arg0;

@end