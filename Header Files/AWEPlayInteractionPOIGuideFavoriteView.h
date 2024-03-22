//
//     Generated by private class-dump
//

@class UIControl, AWEPlayInteractionPOIGuideFavoriteConfig, UIImageView, UILabel, UIView;
@protocol AWEPOICollectViewProtocol;

@interface AWEPlayInteractionPOIGuideFavoriteView : UIView {
    AWEPlayInteractionPOIGuideFavoriteConfig *_config;
    UIView *_leftView;
    UIView *_rightView;
    UILabel *_leftLabel;
    UIView *_leftCenterView;
    UIImageView *_leftImageView;
    UIControl<AWEPOICollectViewProtocol> *_leftImageControl;
    UIView *_rightCenterView;
    UILabel *_rightLabel;
}

@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIView *leftCenterView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIControl<AWEPOICollectViewProtocol> *leftImageControl;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UIView *rightCenterView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) AWEPlayInteractionPOIGuideFavoriteConfig *config;

- (void)p_configUI;
- (void)p_layoutUI;
- (void)renderUIWithConfig:(id)arg0;
- (void)updateUIWithIsCollected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)p_buildUI;
- (void)setLeftCenterView:(id)arg0;
- (id)leftCenterView;
- (void)setLeftImageControl:(id)arg0;
- (id)leftImageControl;
- (void)setRightCenterView:(id)arg0;
- (id)rightCenterView;
- (void)p_updateUIWithIsCollected:(BOOL)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)leftView;
- (void)setLeftView:(id)arg0;
- (id)rightView;
- (void)setRightView:(id)arg0;
- (id)leftLabel;
- (id)rightLabel;
- (void)setLeftLabel:(id)arg0;
- (void)setRightLabel:(id)arg0;
- (id)leftImageView;
- (void)setLeftImageView:(id)arg0;

@end
