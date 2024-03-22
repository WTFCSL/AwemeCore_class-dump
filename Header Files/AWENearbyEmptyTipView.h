//
//     Generated by private class-dump
//

@class UILabel, UIButton, AWENearbyPageContext;

@interface AWENearbyEmptyTipView : UIView {
    UILabel *_titleLabel;
    UIButton *_jumpButton;
    AWENearbyPageContext *_pageContext;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *jumpButton;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;

- (id)trackParams;
- (void)registerNotification;
- (id)jumpButton;
- (void)setJumpButton:(id)arg0;
- (id)jumpButtonTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 pageContext:(id)arg1;
- (void)needPersonalRecommendChanged:(id)arg0;
- (BOOL)needChangeColorToThemeLight;
- (void)recordViewShow;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)action;
- (void)setHidden:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
