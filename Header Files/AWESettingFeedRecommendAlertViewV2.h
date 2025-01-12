//
//     Generated by private class-dump
//

@class UIViewController, UIImageView, CAShapeLayer, UIView, UILabel, UIButton;

@interface AWESettingFeedRecommendAlertViewV2 : UIView {
    UIView *_mainView;
    UIButton *_closeButton;
    UIImageView *_recommendImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_confirmButton;
    UIView *_outsideView;
    CAShapeLayer *_maskLayer;
    id /* block */ _onClose;
    UIViewController *_dummyVC;
}

@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *recommendImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *outsideView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) UIViewController *dummyVC;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setMainView:(id)arg0;
- (id)recommendImageView;
- (void)setRecommendImageView:(id)arg0;
- (id)outsideView;
- (void)presentWithAnimationIfNeeded;
- (void)p_trackShow;
- (void)outsideViewDidClick;
- (void)closeButtonDidClick;
- (void)confirmButtonDidClick;
- (void)setOutsideView:(id)arg0;
- (id)initWithCompletionCallback:(id /* block */)arg0;
- (void)setDummyVC:(id)arg0;
- (id)dummyVC;
- (void)p_trackClickClose;
- (void)p_dismissWithType:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)p_trackClickConfirm;
- (void)setSubtitleLabel:(id)arg0;
- (void).cxx_destruct;
- (BOOL)show;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (id)maskLayer;
- (void)setupUI;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setMaskLayer:(id)arg0;
- (id)mainView;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end
