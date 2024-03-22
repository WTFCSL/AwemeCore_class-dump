//
//     Generated by private class-dump
//

@class AWEUGPushGuideModel, AWEUGSelectivePushGuideHeaderView, CAShapeLayer, UILabel, UIView, UIButton;

@interface AWEUGNewUnselectivePushGuideView : AWEUGPushGuideBaseView {
    AWEUGPushGuideModel *_guideModel;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    AWEUGSelectivePushGuideHeaderView *_fakePushView;
    UIButton *_cancelButton;
    UIButton *_agreeButton;
    CAShapeLayer *_shapeLayer;
    UIView *_maskView;
    UIButton *_closeButton;
}

@property (retain, nonatomic) AWEUGPushGuideModel *guideModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEUGSelectivePushGuideHeaderView *fakePushView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *agreeButton;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIButton *closeButton;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (id)guideModel;
- (id)aAWEPadModuleAdapter;
- (void)setGuideModel:(id)arg0;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)agreeButton;
- (void)setAgreeButton:(id)arg0;
- (id)aAWEPadBizUIAdapter;
- (void)configSubViews;
- (id)initWithGuideViewModel:(id)arg0;
- (void)configTextView;
- (void)configPushView;
- (id)fakePushView;
- (void)p_showInView:(id)arg0 duration:(double)arg1;
- (void)hideWithDuration:(double)arg0;
- (void)didClickCancelButton:(id)arg0;
- (void)didClickAgreeButton:(id)arg0;
- (void)maskViewTapAction:(id)arg0;
- (void)realShow;
- (void)setFakePushView:(id)arg0;
- (void)setCancelButton:(id)arg0;
- (void).cxx_destruct;
- (id)cancelButton;
- (id)titleLabel;
- (id)shapeLayer;
- (id)maskView;
- (id)contentView;
- (double)bottomMargin;
- (void)setShapeLayer:(id)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (double)viewHeight;

@end