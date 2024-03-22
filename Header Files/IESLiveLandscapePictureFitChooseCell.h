//
//     Generated by private class-dump
//

@class UILabel, HTSLiveGradientBackgroundView, UIView;

@interface IESLiveLandscapePictureFitChooseCell : UICollectionViewCell {
    UILabel *_titleLabel;
    UIView *_redDot;
    UIView *_bgView;
    HTSLiveGradientBackgroundView *_gradientView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *gradientView;

- (void)setRedDot:(id)arg0;
- (id)redDot;
- (void)updateWithTitle:(id)arg0 isSelected:(BOOL)arg1 isLandscapePanelV2Enable:(BOOL)arg2;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setGradientView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)gradientView;
- (void)setTitleLabel:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setupUI;

@end
