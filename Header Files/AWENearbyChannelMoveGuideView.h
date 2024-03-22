//
//     Generated by private class-dump
//

@class NSTimer, UIView, AWEAlertNearbyFirstMoveGuideEvent, AWEGradientView, UIImageView, UIButton, UILabel, AWENearbyGuideModel;

@interface AWENearbyChannelMoveGuideView : UIView {
    BOOL _isDismissing;
    UIView *_animationArea;
    UIImageView *_triangleImgView;
    UIButton *_clickAreaBtn;
    UIButton *_confirmBtn;
    UIButton *_knownTipsBtn;
    UILabel *_titleLabel;
    UIButton *_blackTransparentView;
    AWEGradientView *_highlightGradientView;
    UIButton *_grouponTabBtn;
    AWEAlertNearbyFirstMoveGuideEvent *_event;
    NSTimer *_timer;
    AWENearbyGuideModel *_guideModel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _diamondRect;
}

@property (retain, nonatomic) UIView *animationArea;
@property (retain, nonatomic) UIImageView *triangleImgView;
@property (retain, nonatomic) UIButton *clickAreaBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *knownTipsBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *blackTransparentView;
@property (retain, nonatomic) AWEGradientView *highlightGradientView;
@property (retain, nonatomic) UIButton *grouponTabBtn;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } diamondRect;
@property (retain, nonatomic) AWEAlertNearbyFirstMoveGuideEvent *event;
@property (weak, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) AWENearbyGuideModel *guideModel;

- (id)guideModel;
- (void)setGuideModel:(id)arg0;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg0;
- (void)configUI;
- (void)setDiamondRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)doHideAnimOfButtonWithBlk:(id /* block */)arg0;
- (id)highlightGradientView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })diamondRect;
- (void)showTransparentAreaWithTargetView:(id)arg0;
- (void)doHideImmediately;
- (id)blackTransparentView;
- (id)grouponTabBtn;
- (void)setHighlightGradientView:(id)arg0;
- (id)triangleImgView;
- (id)animationArea;
- (id)clickAreaBtn;
- (id)knownTipsBtn;
- (void)trackGuideClickEventWithAreaInfo:(id)arg0;
- (void)blackTransparentViewClicked:(id)arg0;
- (void)userDidClickBtn:(id)arg0;
- (void)userClickCloseBtn:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)startDisappearTimer;
- (void)updateTransparentAreaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setAnimationArea:(id)arg0;
- (void)setTriangleImgView:(id)arg0;
- (void)setClickAreaBtn:(id)arg0;
- (void)setKnownTipsBtn:(id)arg0;
- (void)setBlackTransparentView:(id)arg0;
- (void)setGrouponTabBtn:(id)arg0;
- (id)timer;
- (void)setEvent:(id)arg0;
- (id)event;
- (void).cxx_destruct;
- (BOOL)isDismissing;
- (id)titleLabel;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (void)setIsDismissing:(BOOL)arg0;

@end