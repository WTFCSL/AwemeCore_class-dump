//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface ACCStoryRecorderHintTipView : UIView {
    BOOL _isLock;
    id /* block */ _dimssBlock;
    UIView *_bubbleContainer;
    UILabel *_contentLabel;
    UIImageView *_tipsBackground;
    UIImageView *_arrowImageView;
}

@property (retain, nonatomic) UIView *bubbleContainer;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *tipsBackground;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) BOOL isLock;
@property (copy, nonatomic) id /* block */ dimssBlock;

- (BOOL)isLock;
- (void)dismissBubble;
- (void)setupUIWithTitle:(id)arg0;
- (id)initWithTitle:(id)arg0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setDimssBlock:(id /* block */)arg0;
- (void)showOnView:(id)arg0 withContainerView:(id)arg1 complete:(id /* block */)arg2;
- (void)makeConstraint:(id)arg0;
- (void)setIsLock:(BOOL)arg0;
- (id /* block */)dimssBlock;
- (id)tipsBackground;
- (void)showOnView:(id)arg0 withContainerView:(id)arg1;
- (void)setTipsBackground:(id)arg0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)bubbleContainer;
- (void)setBubbleContainer:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end