//
//     Generated by private class-dump
//

@class UIView;

@interface IESLivePaidLinkmicExplainStarView : UIView {
    UIView *_starContainerView;
    UIView *_emptyStarContainerView;
}

@property (retain, nonatomic) UIView *starContainerView;
@property (retain, nonatomic) UIView *emptyStarContainerView;

- (id)starContainerView;
- (void)setStarContainerView:(id)arg0;
- (void)updateWithScore:(double)arg0;
- (void)p_seupSubviews;
- (void)setEmptyStarContainerView:(id)arg0;
- (id)emptyStarContainerView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGSize { double x0; double x1; })cardSize;

@end