//
//     Generated by private class-dump
//

@interface FlowKit.MessageTextCell : FlowKit.MessageCell <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ messageTextView;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ onTap;
}

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)handleTap:(id)arg0;

@end