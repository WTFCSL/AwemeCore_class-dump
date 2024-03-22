//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, UIView;
@protocol ACCPanelHandlebarViewDelegate;

@interface ACCPanelHandlebarView : UIView {
    id<ACCPanelHandlebarViewDelegate> _delegate;
    UIView *_handlebar;
    UIPanGestureRecognizer *_panGesture;
}

@property (retain, nonatomic) UIView *handlebar;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (weak, nonatomic) id<ACCPanelHandlebarViewDelegate> delegate;

- (id)handlebar;
- (void)setHandlebar:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)setupViews;
- (id)initWithHeight:(double)arg0;
- (void)handlePanGesture:(id)arg0;
- (void)setupGestures;

@end
