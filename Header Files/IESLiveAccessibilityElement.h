//
//     Generated by private class-dump
//

@protocol IESLiveAccessibilityDelegate;

@interface IESLiveAccessibilityElement : UIAccessibilityElement {
    id<IESLiveAccessibilityDelegate> _delegate;
}

@property (weak, nonatomic) id<IESLiveAccessibilityDelegate> delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)accessibilityElementDidBecomeFocused;

@end
