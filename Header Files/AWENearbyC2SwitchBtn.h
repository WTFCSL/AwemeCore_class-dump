//
//     Generated by private class-dump
//

@class CAGradientLayer, UIImageView, UILabel, UIView, UIButton;

@interface AWENearbyC2SwitchBtn : UIView {
    BOOL _hasHeadAreaImage;
    long long _state;
    long long _animationType;
    UIImageView *_leftIconImageView;
    UILabel *_leftLabel;
    UIView *_verticaLine;
    UIImageView *_rightIconImageView;
    UILabel *_rightLabel;
    UIButton *_leftBtnBgView;
    UIButton *_rightBtnBgView;
    CAGradientLayer *_borderLayer;
    id /* block */ _clickBlk;
    UIView *_bgColorView;
    UIView *_containerView;
}

@property (retain, nonatomic) UIImageView *leftIconImageView;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIView *verticaLine;
@property (retain, nonatomic) UIImageView *rightIconImageView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIButton *leftBtnBgView;
@property (retain, nonatomic) UIButton *rightBtnBgView;
@property (retain, nonatomic) CAGradientLayer *borderLayer;
@property (copy, nonatomic) id /* block */ clickBlk;
@property (retain, nonatomic) UIView *bgColorView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL hasHeadAreaImage;
@property (nonatomic) long long state;
@property (nonatomic) long long animationType;

- (void)addGesture;
- (id)rightIconImageView;
- (void)setRightIconImageView:(id)arg0;
- (id)leftIconImageView;
- (void)setLeftIconImageView:(id)arg0;
- (void)setTextHidden:(BOOL)arg0;
- (void)setClickBlk:(id /* block */)arg0;
- (BOOL)hasHeadAreaImage;
- (void)updatehasHeadAreaImage:(BOOL)arg0;
- (void)setHasHeadAreaImage:(BOOL)arg0;
- (id /* block */)clickBlk;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 clickBlock:(id /* block */)arg1;
- (void)updateSwitchBtnBgStyle:(long long)arg0;
- (id)leftBtnBgView;
- (id)rightBtnBgView;
- (id)verticaLine;
- (void)setLeftBtnBgView:(id)arg0;
- (void)setRightBtnBgView:(id)arg0;
- (void)setVerticaLine:(id)arg0;
- (void)clickLeft;
- (void)clickRight;
- (void)setupGradientBorder;
- (void)setupWhiteBorder;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (void)setAnimationType:(long long)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (long long)animationType;
- (void)setupUI;
- (id)leftLabel;
- (id)rightLabel;
- (id)borderLayer;
- (void)setLeftLabel:(id)arg0;
- (void)setBorderLayer:(id)arg0;
- (void)setRightLabel:(id)arg0;
- (void)setBgColorView:(id)arg0;
- (id)bgColorView;

@end