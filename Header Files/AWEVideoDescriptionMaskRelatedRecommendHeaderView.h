//
//     Generated by private class-dump
//

@class UILabel, CAGradientLayer, UIView;

@interface AWEVideoDescriptionMaskRelatedRecommendHeaderView : UICollectionReusableView {
    id /* block */ _didClickAction;
    UILabel *_recLabel;
    UIView *_leftLineView;
    UIView *_rightLineView;
    CAGradientLayer *_leftGradientLayer;
    CAGradientLayer *_rightGradientLayer;
}

@property (retain, nonatomic) UILabel *recLabel;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) CAGradientLayer *leftGradientLayer;
@property (retain, nonatomic) CAGradientLayer *rightGradientLayer;
@property (copy, nonatomic) id /* block */ didClickAction;

+ (double)headerViewHeight;

- (void)handleClick;
- (id)leftLineView;
- (id)rightLineView;
- (void)setLeftLineView:(id)arg0;
- (void)setRightLineView:(id)arg0;
- (void)setDidClickAction:(id /* block */)arg0;
- (id /* block */)didClickAction;
- (void)setLeftGradientLayer:(id)arg0;
- (void)setRightGradientLayer:(id)arg0;
- (id)leftGradientLayer;
- (id)rightGradientLayer;
- (id)recLabel;
- (id)recLabelFont;
- (void)setRecLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;

@end
