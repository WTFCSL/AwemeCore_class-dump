//
//     Generated by private class-dump
//

@class UIImageView, DUXVacantView, UILabel, DUXLoadingParticleView, AWEEComWidgetGuideContentPage;
@protocol AWEEComWidgetGuidePanelPageDelegate;

@interface AWEEComWidgetGuidePanelPage : UIView {
    unsigned long long _state;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_closeBtn;
    DUXVacantView *_errorView;
    DUXLoadingParticleView *_loadingView;
    AWEEComWidgetGuideContentPage *_contentView;
    id<AWEEComWidgetGuidePanelPageDelegate> _delegate;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *closeBtn;
@property (retain, nonatomic) DUXVacantView *errorView;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) AWEEComWidgetGuideContentPage *contentView;
@property (weak, nonatomic) id<AWEEComWidgetGuidePanelPageDelegate> delegate;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) long long currentIndex;

- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)closeAction:(id)arg0;
- (void)setupMask;
- (void)hideErrorPage;
- (void)hideContentPage;
- (void)showErrorPage;
- (void)showContentPage;
- (void)notAddAction;
- (void)goHomeAction;
- (void)nextStepBtnClickAction;
- (void)stopLoading;
- (void)setSubtitleLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 delegate:(id)arg1;
- (void).cxx_destruct;
- (long long)currentIndex;
- (unsigned long long)state;
- (void)startLoading;
- (void)setState:(unsigned long long)arg0;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)contentView;
- (id)delegate;
- (void)retryAction;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupConstraints;
- (void)setContentView:(id)arg0;
- (void)setupView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)errorView;
- (void)setErrorView:(id)arg0;

@end