//
//     Generated by private class-dump
//

@class AFDPopoverBackgroundView, AFDPopoverView;

@interface AFDInplacePopoverTransitionView : UIView {
    AFDPopoverBackgroundView *_backgroundView;
    AFDPopoverView *_popoverView;
}

@property (readonly, nonatomic) AFDPopoverBackgroundView *backgroundView;
@property (readonly, nonatomic) AFDPopoverView *popoverView;

- (id)popoverView;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
