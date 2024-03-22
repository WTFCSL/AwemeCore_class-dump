//
//     Generated by private class-dump
//

@class UILabel, AWEUILoadingView, UIView;

@interface AWEBasicModeTextLoadingView : UIView {
    UIView *_hudView;
    AWEUILoadingView *_loadingView;
    UILabel *_titleLabel;
    UIView *_containerView;
}

@property (retain, nonatomic) UIView *hudView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *containerView;

+ (id)p_imageWithColor:(id)arg0;
+ (id)sharedView;
+ (id)showLoadingOnView:(id)arg0 title:(id)arg1;

- (void)allowUserInteraction:(BOOL)arg0;
- (void)stopAnimating;
- (void)startAnimating;
- (id)init;
- (void)dismiss;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)hudView;
- (void)setHudView:(id)arg0;

@end
