//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, UIButton, IESECGCDTimer, UIVisualEffectView, IESECShopMarqueeContentView, IESECStorePageContext;

@interface IESECShopMarqueeView : UIView <IESECShopMarqueeProtocol> {
    BOOL _preloadAllAvatar;
    UIView *_maskView;
    UIVisualEffectView *_effectView;
    UIView *_backgroundView;
    IESECShopMarqueeContentView *_contentView;
    UIButton *_closeButton;
    IESECGCDTimer *_timer;
    NSArray *_models;
    long long _currentLoopIndex;
    IESECStorePageContext *_context;
}

@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) IESECShopMarqueeContentView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (copy, nonatomic) NSArray *models;
@property (nonatomic) long long currentLoopIndex;
@property (retain, nonatomic) IESECStorePageContext *context;
@property (nonatomic) BOOL preloadAllAvatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeTimer;
- (void)trackWithEventName:(id)arg0 extraParams:(id)arg1;
- (id)initWithContext:(id)arg0 models:(id)arg1;
- (void)setCurrentLoopIndex:(long long)arg0;
- (void)startAnimationShowOrHide:(BOOL)arg0;
- (void)handleMarqueeAnimationIsShow:(BOOL)arg0;
- (void)preloadNextAvatarImage;
- (void)updateLoopIndex;
- (long long)currentLoopIndex;
- (BOOL)preloadAllAvatar;
- (void)setPreloadAllAvatar:(BOOL)arg0;
- (void)closeMarquee:(id)arg0;
- (id)timer;
- (void)dismiss;
- (id)backgroundView;
- (id)effectView;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)show;
- (id)maskView;
- (id)contentView;
- (id)models;
- (void)setTimer:(id)arg0;
- (void)setEffectView:(id)arg0;
- (id)context;
- (void)setModels:(id)arg0;
- (void)dealloc;
- (void)setBackgroundView:(id)arg0;
- (void)setMaskView:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
