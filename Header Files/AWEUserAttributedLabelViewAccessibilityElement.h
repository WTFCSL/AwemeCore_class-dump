//
//     Generated by private class-dump
//

@class UIView;
@protocol AWEUserAttributedLabelViewAccessibilityElementDelegate;

@interface AWEUserAttributedLabelViewAccessibilityElement : UIAccessibilityElement {
    id<AWEUserAttributedLabelViewAccessibilityElementDelegate> _delegate;
    UIView *_view;
}

@property (weak, nonatomic) id<AWEUserAttributedLabelViewAccessibilityElementDelegate> delegate;
@property (weak, nonatomic) UIView *view;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (void)setView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)view;
- (BOOL)accessibilityActivate;

@end