//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface IESGCPBubbleGuideView : UIView {
    BOOL _shouldHideWithTabSpace;
    UIView *_contentView;
    UILabel *_tipLabel;
    UIImageView *_tipArrow;
    UIImageView *_backgroundImageView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *tipArrow;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL shouldHideWithTabSpace;

- (void)setShouldHideWithTabSpace:(BOOL)arg0;
- (void)setTipArrow:(id)arg0;
- (BOOL)shouldHideWithTabSpace;
- (void)showTip:(id)arg0 inView:(id)arg1 atBottomOf:(id)arg2 duration:(double)arg3 didShow:(id /* block */)arg4;
- (void)showTip:(id)arg0 inView:(id)arg1 atBottomOf:(id)arg2 didShow:(id /* block */)arg3;
- (id)init;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)contentView;
- (void)hide;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setContentView:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setupViews;
- (void)setBackgroundImageView:(id)arg0;
- (id)tipArrow;

@end