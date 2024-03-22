//
//     Generated by private class-dump
//

@class NSString, UIImage, UILabel, UIView;

@interface BDPIndicatorView : UIView {
    BOOL _mask;
    long long _style;
    NSString *_text;
    NSString *_imageName;
    unsigned long long _maxLine;
    double _duration;
    UIView *_myMaskView;
    UIView *_containerView;
    UIView *_iconContainer;
    UILabel *_label;
    UIImage *_image;
    id /* block */ _dismissHandler;
}

+ (void)dismissWithAnimated:(BOOL)arg0;
+ (void)showWithModel:(id)arg0;
+ (void)showWithTitle:(id)arg0 type:(long long)arg1;
+ (void)showWithTitle:(id)arg0;
+ (void)showWithTitle:(id)arg0 type:(long long)arg1 duration:(double)arg2;
+ (void)showWithModel:(id)arg0 fromParentView:(id)arg1;
+ (void)showWithModel:(id)arg0 fromParentView:(id)arg1 image:(id)arg2;
+ (void)showWithModel:(id)arg0 image:(id)arg1;

- (void)showFromParentView:(id)arg0;
- (id)initWithModel:(id)arg0 image:(id)arg1;
- (id)initWithIndicatorStyle:(long long)arg0 text:(id)arg1 imageName:(id)arg2 maxLine:(unsigned long long)arg3 duration:(double)arg4 mask:(BOOL)arg5 image:(id)arg6 dismissHandler:(id /* block */)arg7;
- (void)setupContaineViewSize;
- (void)dismissAnimated:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setupUI;

@end
