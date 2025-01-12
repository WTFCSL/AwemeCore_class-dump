//
//     Generated by private class-dump
//

@class UILabel, AWETabBarInnerViewUIConfig, NSString;

@interface AWETabbarTextView : UIView <AWETabbarInnerView> {
    BOOL _isInTitleChangedAnimation;
    AWETabBarInnerViewUIConfig *_config;
    UILabel *_label;
}

@property (nonatomic) BOOL isInTitleChangedAnimation;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AWETabBarInnerViewUIConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewWithConfig:(id)arg0;

- (void)tabbarStatusDidChanged:(long long)arg0 animated:(BOOL)arg1;
- (struct CGPoint { double x0; double x1; })badgeBasePosition;
- (void)updateTitle:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)isInTitleChangedAnimation;
- (void)setIsInTitleChangedAnimation:(BOOL)arg0;
- (void)textColorChangedWithSelectedStatus:(BOOL)arg0;
- (void)labelTransformWithStatus:(BOOL)arg0;
- (id)currentTitleText;
- (id)accessibilityLabel;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setLabel:(id)arg0;
- (id)label;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateTitle:(id)arg0 animated:(BOOL)arg1;
- (void)updateTitle:(id)arg0;

@end
