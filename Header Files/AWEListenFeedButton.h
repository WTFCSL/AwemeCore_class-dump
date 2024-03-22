//
//     Generated by private class-dump
//

@class UIImageView, UIView;

@interface AWEListenFeedButton : UIButton {
    unsigned long long _buttonStatus;
    UIView *_containerView;
    UIImageView *_defaultView;
    UIImageView *_selectedView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *defaultView;
@property (retain, nonatomic) UIImageView *selectedView;
@property (nonatomic) unsigned long long buttonStatus;

- (void)setDefaultView:(id)arg0;
- (unsigned long long)buttonStatus;
- (void)setButtonStatus:(unsigned long long)arg0;
- (void)setSelectedView:(id)arg0;
- (void)performAnimationWithFromView:(id)arg0 toView:(id)arg1;
- (void)changeStatusWithoutAnimationWithFromView:(id)arg0 toView:(id)arg1;
- (id)initWithDefaultImage:(id)arg0 selectedImage:(id)arg1;
- (void)changeButtonTypeWithAnimation:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setupUI;
- (id)selectedView;
- (id)defaultView;

@end
