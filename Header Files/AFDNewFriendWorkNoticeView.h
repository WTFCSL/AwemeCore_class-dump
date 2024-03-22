//
//     Generated by private class-dump
//

@class NSString, AWEMultiAvatarView, NSTimer, UILabel, NSArray;

@interface AFDNewFriendWorkNoticeView : UIView <CAAnimationDelegate> {
    unsigned long long _type;
    id /* block */ _readyToShowBlock;
    AWEMultiAvatarView *_avatarView;
    UILabel *_textLabel;
    id /* block */ _performShowAnimationBlock;
    id /* block */ _performHideAnimationBlock;
    id /* block */ _performAvatarShowAnimationBlock;
    id /* block */ _performAvatarHideAnimationBlock;
    NSTimer *_autoHideTimer;
    NSString *_toastText;
    NSArray *_avatarArray;
    AWEMultiAvatarView *_cachedAvatarView;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEMultiAvatarView *avatarView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ performShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performHideAnimationBlock;
@property (copy, nonatomic) id /* block */ performAvatarShowAnimationBlock;
@property (copy, nonatomic) id /* block */ performAvatarHideAnimationBlock;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (retain, nonatomic) NSString *toastText;
@property (retain, nonatomic) NSArray *avatarArray;
@property (retain, nonatomic) AWEMultiAvatarView *cachedAvatarView;
@property (copy, nonatomic) id /* block */ readyToShowBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)toastText;
- (void)setToastText:(id)arg0;
- (void)showOnView:(id)arg0;
- (void)setAvatarArray:(id)arg0;
- (id)avatarArray;
- (void)setPerformShowAnimationBlock:(id /* block */)arg0;
- (id /* block */)performShowAnimationBlock;
- (void)setupAnimation;
- (void)startAutoHideIfNeeded;
- (id /* block */)performHideAnimationBlock;
- (void)setPerformHideAnimationBlock:(id /* block */)arg0;
- (id)initWithType:(unsigned long long)arg0 text:(id)arg1 avatarArray:(id)arg2;
- (id)cachedAvatarView;
- (id /* block */)performAvatarHideAnimationBlock;
- (id /* block */)performAvatarShowAnimationBlock;
- (void)setupCachedAvatarView;
- (void)setCachedAvatarView:(id)arg0;
- (void)setupAvatarChangeAnimation;
- (id /* block */)readyToShowBlock;
- (void)setPerformAvatarShowAnimationBlock:(id /* block */)arg0;
- (void)setPerformAvatarHideAnimationBlock:(id /* block */)arg0;
- (id)initWithText:(id)arg0 avatarArray:(id)arg1;
- (void)configWithNewAvatarArray:(id)arg0 animated:(BOOL)arg1;
- (void)setReadyToShowBlock:(id /* block */)arg0;
- (id)textLabel;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void)animationDidStart:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)hide;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setTextLabel:(id)arg0;
- (void)setupUI;
- (void)setupAvatarView;
- (id)autoHideTimer;
- (void)setAutoHideTimer:(id)arg0;

@end