//
//     Generated by private class-dump
//

@class UIImageView, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLiveInteractiveApplyView : UIView {
    UIImageView *_applyImageView;
    UIImageView<IESLiveWebPPlayer> *_animationView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImageView *applyImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)setupViewsWithContainerWidth:(double)arg0;
- (void)setApplyImageView:(id)arg0;
- (id)applyImageView;
- (void)showApplyingAnimationView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (void)updateWithStatus:(unsigned long long)arg0;

@end