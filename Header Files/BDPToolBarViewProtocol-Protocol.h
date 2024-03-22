//
//     Generated by private class-dump
//

@class NSString, UIView, BDPPrivacyAccessAnimator;
@protocol BDPToolBarViewDelegate;

@protocol BDPToolBarViewProtocol <NSObject>

@property (nonatomic) long long toolbarStyle;
@property (nonatomic) long long toolBarThemeStyle;
@property (readonly, nonatomic) BDPPrivacyAccessAnimator *privacyIconAnimator;
@property (nonatomic) BOOL forcedMoreEnable;
@property (weak, nonatomic) id<BDPToolBarViewDelegate> delegate;
@property (readonly, nonatomic) BOOL showCustomerService;
@property (copy, nonatomic) NSString *navigationStyle;
@property (readonly, nonatomic) UIView *rightToolbar;

- (void)setToolBarThemeStyle:(long long)arg0;
- (void)setForcedMoreEnable:(BOOL)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closeButtonFrame;
- (id)privacyIconAnimator;
- (BOOL)forcedMoreEnable;
- (void)showMorePanel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originMoreButtonFrame;
- (long long)toolBarThemeStyle;
- (BOOL)showCustomerService;
- (id)delegate;
- (long long)toolbarStyle;
- (void)setToolbarStyle:(long long)arg0;
- (void)setDelegate:(id)arg0;

@optional

- (void)setShowCustomerService:(BOOL)arg0 withAnimated:(BOOL)arg1;
- (void)hideMoreButton;
- (id)rightToolbar;
- (BOOL)checkShowMorePanel;
- (void)showMorePanel:(id)arg0;
- (void)feedbackButtonClicked;
- (id)navigationStyle;
- (void)setNavigationStyle:(id)arg0;

@end
