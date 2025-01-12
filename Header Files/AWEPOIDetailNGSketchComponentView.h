//
//     Generated by private class-dump
//

@class MASConstraint, UIImageView, AWEPOIDetailNGPageContext, UILabel, UIView, UIButton;

@interface AWEPOIDetailNGSketchComponentView : DitoComponentView {
    UIImageView *_sketchView;
    UIView *_errorContainerView;
    UILabel *_errorTitleLabel;
    UILabel *_errorDescriptionLabel;
    UIButton *_retryButton;
    MASConstraint *_topConstraint;
}

@property (retain, nonatomic) UIImageView *sketchView;
@property (retain, nonatomic) UIView *errorContainerView;
@property (retain, nonatomic) UILabel *errorTitleLabel;
@property (retain, nonatomic) UILabel *errorDescriptionLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) MASConstraint *topConstraint;
@property (readonly, nonatomic) AWEPOIDetailNGPageContext *ngPageContext;

- (void)updateViewModel:(id)arg0;
- (void)retry:(id)arg0;
- (void)bindActionAndState;
- (id)sketchView;
- (id)errorContainerView;
- (id)errorDescriptionLabel;
- (void)toggleLoading:(BOOL)arg0;
- (void)showErrorState;
- (id)ngPageContext;
- (void)setSketchView:(id)arg0;
- (void)setErrorContainerView:(id)arg0;
- (void)setErrorDescriptionLabel:(id)arg0;
- (id)topConstraint;
- (void)setTopConstraint:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;
- (id)errorTitleLabel;
- (void)setErrorTitleLabel:(id)arg0;

@end
