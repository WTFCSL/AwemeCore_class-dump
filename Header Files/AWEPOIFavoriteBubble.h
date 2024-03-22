//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView;

@interface AWEPOIFavoriteBubble : UIControl {
    BOOL _isDisplaying;
    NSString *_bubbleText;
    id /* block */ _tapBlock;
    UIView *_contentView;
    UILabel *_leftLabel;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *leftLabel;
@property (nonatomic) BOOL isDisplaying;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) id /* block */ tapBlock;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (void)setIsDisplaying:(BOOL)arg0;
- (void)p_tapped;
- (double)p_arrowXPositionForCenterX:(double)arg0;
- (void)p_addMaskWithPositionX:(double)arg0 direction:(unsigned long long)arg1;
- (void)showOnView:(id)arg0 anchor:(id)arg1 direction:(unsigned long long)arg2 yOffset:(double)arg3 animated:(BOOL)arg4;
- (void)showOnView:(id)arg0 anchor:(id)arg1 direction:(unsigned long long)arg2 yOffset:(double)arg3 animated:(BOOL)arg4 duration:(double)arg5;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setContentView:(id)arg0;
- (BOOL)isDisplaying;
- (id)leftLabel;
- (id)bubbleText;
- (void)setBubbleText:(id)arg0;
- (void)setLeftLabel:(id)arg0;

@end