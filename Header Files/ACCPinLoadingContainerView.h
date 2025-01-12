//
//     Generated by private class-dump
//

@class UILabel, ACCAnimatedButton, UIView;
@protocol ACCLoadingViewProtocol;

@interface ACCPinLoadingContainerView : UIView {
    UIView<ACCLoadingViewProtocol> *_loadingView;
    UIView *_loadingViewBgView;
    UILabel *_loadingProgressLabel;
    ACCAnimatedButton *_cancelButton;
}

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView *loadingViewBgView;
@property (retain, nonatomic) UILabel *loadingProgressLabel;
@property (retain, nonatomic) ACCAnimatedButton *cancelButton;

- (void)dismissLoading;
- (void)updateLoadingProgress:(id)arg0;
- (id)loadingViewBgView;
- (id)loadingProgressLabel;
- (void)setLoadingViewBgView:(id)arg0;
- (void)setLoadingProgressLabel:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setupView;
- (void)addTarget:(id)arg0 selector:(SEL)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)showLoading;

@end
