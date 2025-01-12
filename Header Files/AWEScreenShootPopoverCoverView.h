//
//     Generated by private class-dump
//

@class NSArray, UIView;
@protocol AWEScreenShootPopoverCoverViewDelegate;

@interface AWEScreenShootPopoverCoverView : UIView {
    BOOL _canPenetrate;
    id<AWEScreenShootPopoverCoverViewDelegate> _delegate;
    NSArray *_canPenetrateViewArray;
    UIView *_triggerView;
}

@property (weak, nonatomic) id<AWEScreenShootPopoverCoverViewDelegate> delegate;
@property (nonatomic) BOOL canPenetrate;
@property (copy, nonatomic) NSArray *canPenetrateViewArray;
@property (weak, nonatomic) UIView *triggerView;

- (void)setCanPenetrate:(BOOL)arg0;
- (void)setCanPenetrateViewArray:(id)arg0;
- (void)setTriggerView:(id)arg0;
- (id)triggerView;
- (BOOL)canPenetrate;
- (BOOL)canPenetrateInViewArrayWithPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)canPenetrateViewArray;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
