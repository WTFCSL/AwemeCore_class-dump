//
//     Generated by private class-dump
//

@class UIView;

@protocol IESLivePopupView <NSObject, UIScrollViewDelegate>

@property (readonly, nonatomic) UIView *containerView;

- (void)setVisible:(BOOL)arg0 withAnimated:(BOOL)arg1;
- (void)show;
- (id)containerView;
- (void)hide;
- (id)initWithItem:(id)arg0;
- (BOOL)showing;
- (void)updateFrame;

@end