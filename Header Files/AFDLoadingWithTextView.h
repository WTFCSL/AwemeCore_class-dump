//
//     Generated by private class-dump
//

@class DUXLoadingCircleView, NSString, UILabel, UIView;

@interface AFDLoadingWithTextView : UIView {
    BOOL _enable;
    UIView *_containerView;
    DUXLoadingCircleView *_loadingView;
    UILabel *_titleLabel;
    UILabel *_loadingTitleLabel;
    NSString *_normalText;
    NSString *_loadingText;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *loadingTitleLabel;
@property (copy, nonatomic) NSString *normalText;
@property (copy, nonatomic) NSString *loadingText;
@property (nonatomic) BOOL enable;

- (void)p_setUI;
- (void)setNormalText:(id)arg0;
- (id)normalText;
- (id)initWithTitle:(id)arg0 loadingTitle:(id)arg1;
- (void)configTitleFont:(id)arg0 titleColor:(id)arg1;
- (void)stopLoading;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)startLoading;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setEnable:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setLoadingText:(id)arg0;
- (id)loadingText;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setLoadingTitleLabel:(id)arg0;
- (id)loadingTitleLabel;

@end