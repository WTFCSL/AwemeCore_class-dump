//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWEEcomSearchWindowShopTag : UIView {
    UIView *_bgView;
    UILabel *_leftLabel;
    UIView *_rightView;
    UILabel *_scoreLabel;
    UILabel *_levelLabel;
}

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *levelLabel;

- (id)levelLabel;
- (void)setLevelLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (id)rightView;
- (void)setRightView:(id)arg0;
- (id)leftLabel;
- (void)setupViews;
- (void)setLeftLabel:(id)arg0;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg0;

@end
