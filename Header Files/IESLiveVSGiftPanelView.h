//
//     Generated by private class-dump
//

@class UIView, IESLiveGradientView, IESLiveVSGiftPanelViewModel, NSString, IESLiveVSGiftPanelDataSharing, IESLiveVSGiftSectionView, UIImageView, NSDictionary, CAGradientLayer, IESLiveVSGiftPanelCommonReactionCenter;

@interface IESLiveVSGiftPanelView : UIView <IESLiveVSGiftPanelCommonReaction> {
    NSDictionary *_trackParams;
    UIView *_gestureView;
    UIView *_backgroundView;
    UIImageView *_coverTopImageView;
    UIImageView *_coverBottomImageView;
    UIImageView *_topBackgroundImageView;
    IESLiveVSGiftSectionView *_sectionView;
    IESLiveVSGiftPanelViewModel *_viewModel;
    IESLiveGradientView *_bottomPortraitView;
    UIImageView *_topLeftImageView;
    IESLiveVSGiftPanelCommonReactionCenter *_reactionCenter;
    IESLiveVSGiftPanelDataSharing *_dataSharing;
    long long _style;
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) UIView *gestureView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *coverTopImageView;
@property (retain, nonatomic) UIImageView *coverBottomImageView;
@property (retain, nonatomic) UIImageView *topBackgroundImageView;
@property (retain, nonatomic) IESLiveVSGiftSectionView *sectionView;
@property (retain, nonatomic) IESLiveVSGiftPanelViewModel *viewModel;
@property (retain, nonatomic) IESLiveGradientView *bottomPortraitView;
@property (retain, nonatomic) UIImageView *topLeftImageView;
@property (retain, nonatomic) IESLiveVSGiftPanelCommonReactionCenter *reactionCenter;
@property (retain, nonatomic) IESLiveVSGiftPanelDataSharing *dataSharing;
@property (nonatomic) long long style;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (id)coverTopImageView;
- (id)coverBottomImageView;
- (void)setCoverTopImageView:(id)arg0;
- (void)setCoverBottomImageView:(id)arg0;
- (void)setTopBackgroundImageView:(id)arg0;
- (id)topBackgroundImageView;
- (id)dataSharing;
- (void)setDataSharing:(id)arg0;
- (id)reactionCenter;
- (BOOL)isLandScapePanelV2Enable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 style:(long long)arg1 viewModel:(id)arg2;
- (void)updateToVerticalStyle;
- (void)configBackgroundWithColors:(id)arg0 backgroundImage:(id)arg1 backgroundTop:(id)arg2 backBottomImage:(id)arg3 topleftTitle:(id)arg4;
- (void)setReactionCenter:(id)arg0;
- (id)topLeftImageView;
- (id)bottomPortraitView;
- (void)setBottomPortraitView:(id)arg0;
- (void)setTopLeftImageView:(id)arg0;
- (long long)style;
- (void)dismiss;
- (id)gradientLayer;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)layoutSubviews;
- (void)setStyle:(long long)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (void)setupUI;
- (id)sectionView;
- (id)gestureView;
- (void)setGestureView:(id)arg0;
- (void)setSectionView:(id)arg0;

@end
