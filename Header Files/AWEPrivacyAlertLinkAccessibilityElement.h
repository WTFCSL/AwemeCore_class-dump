//
//     Generated by private class-dump
//

@class UIAccessibilityElement;
@protocol AWEPrivacyAlertLinkAccessibilityElementDelegate;

@interface AWEPrivacyAlertLinkAccessibilityElement : UIAccessibilityElement {
    id<AWEPrivacyAlertLinkAccessibilityElementDelegate> _delegate;
    UIAccessibilityElement *_element;
}

@property (weak, nonatomic) id<AWEPrivacyAlertLinkAccessibilityElementDelegate> delegate;
@property (retain, nonatomic) UIAccessibilityElement *element;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (void)setElement:(id)arg0;
- (id)element;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (BOOL)accessibilityActivate;

@end
