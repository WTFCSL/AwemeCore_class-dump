//
//     Generated by private class-dump
//

@protocol XIGDanmakuPlayerViewDelegate;

@interface XIGDanmakuPlayerView : UIView {
    id<XIGDanmakuPlayerViewDelegate> _delegate;
}

@property (weak, nonatomic) id<XIGDanmakuPlayerViewDelegate> delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
