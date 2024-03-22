//
//     Generated by private class-dump
//

@class NSString, UIImage, UIView, UILabel;

@interface HGIndicatorView : UIView {
    long long _style;
    NSString *_text;
    UIImage *_image;
    unsigned long long _maxLine;
    double _duration;
    double _animateDuration;
    id /* block */ _dissmissHandler;
    UIView *_iconContainer;
    UILabel *_label;
}

+ (void)dismissWithAnimated:(BOOL)arg0;
+ (void)showWithTitle:(id)arg0 type:(long long)arg1;
+ (void)showWithTitle:(id)arg0;
+ (void)showWithTitle:(id)arg0 type:(long long)arg1 duration:(double)arg2;

- (void)showFromParentView:(id)arg0;
- (id)initWithIndicatorType:(long long)arg0 text:(id)arg1 duration:(double)arg2 animateDuration:(double)arg3;
- (id)initWithIndicatorType:(long long)arg0 text:(id)arg1 duration:(double)arg2;
- (id)initWithIndicatorStyle:(long long)arg0 text:(id)arg1 image:(id)arg2 maxLine:(unsigned long long)arg3 duration:(double)arg4 animateDutation:(double)arg5 dismissHandler:(id /* block */)arg6;
- (void)dismissAnimated:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setupUI;

@end