//
//     Generated by private class-dump
//

@class UIView, NSString, ACCCameraSubscription, RACSignal, RACSubject, AWEVideoPublishViewModel, RACBehaviorSubject, AWEImageAndTitleBubble;

@interface ACCVideoEditTipsServiceImpl : NSObject <ACCVideoEditTipsService> {
    long long _showedValue;
    AWEVideoPublishViewModel *_repository;
    UIView *_functionBubble;
    AWEImageAndTitleBubble *_imageTitleBubble;
    RACSignal *_showSideslipPropGuideSignal;
    RACBehaviorSubject *_showSideslipPropGuideSubject;
    RACSignal *_showMusicBubbleSignal;
    RACBehaviorSubject *_showMusicBubbleSubject;
    RACSignal *_showQuickPublishBubbleSignal;
    RACBehaviorSubject *_showQuickPublishBubbleSubject;
    RACSignal *_showFriendsDailyPublishButtonBubbleSignal;
    RACSubject *_showFriendsDailyPublishButtonBubbleSubject;
    RACSubject *_showUpdateCanvasAnimatedInfoGuideSubject;
    ACCCameraSubscription *_subscription;
}

@property (retain, nonatomic) UIView *functionBubble;
@property (retain, nonatomic) AWEImageAndTitleBubble *imageTitleBubble;
@property (retain, nonatomic) RACSignal *showSideslipPropGuideSignal;
@property (retain, nonatomic) RACBehaviorSubject *showSideslipPropGuideSubject;
@property (retain, nonatomic) RACSignal *showMusicBubbleSignal;
@property (retain, nonatomic) RACBehaviorSubject *showMusicBubbleSubject;
@property (retain, nonatomic) RACSignal *showQuickPublishBubbleSignal;
@property (retain, nonatomic) RACBehaviorSubject *showQuickPublishBubbleSubject;
@property (retain, nonatomic) RACSignal *showFriendsDailyPublishButtonBubbleSignal;
@property (retain, nonatomic) RACSubject *showFriendsDailyPublishButtonBubbleSubject;
@property (retain, nonatomic) RACSubject *showUpdateCanvasAnimatedInfoGuideSubject;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly, nonatomic) RACSignal *showUpdateCanvasAnimatedInfoGuideSignal;
@property (nonatomic) long long showedValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDarkBackGround;
- (void)showFunctionBubbleWithContent:(id)arg0 forView:(id)arg1 containerView:(id)arg2 mediaView:(id)arg3 anchorAdjustment:(struct CGPoint { double x0; double x1; })arg4 inDirection:(unsigned long long)arg5 functionType:(long long)arg6;
- (void)showImageBubble:(id)arg0 forView:(id)arg1 containerView:(id)arg2 mediaView:(id)arg3 inDirection:(long long)arg4 subtitle:(id)arg5 functionType:(long long)arg6;
- (void)dismissFunctionBubbles;
- (void)saveShowedFunctionsByType:(long long)arg0;
- (id)showSideslipPropGuideSignal;
- (id)showMusicBubbleSignal;
- (id)showQuickPublishBubbleSignal;
- (id)showUpdateCanvasAnimatedInfoGuideSignal;
- (id)showFriendsDailyPublishButtonBubbleSignal;
- (long long)showedValue;
- (void)setShowedValue:(long long)arg0;
- (void)sendShowSideslipPropGuideSignal;
- (void)sendShowQuickPublishBubbleSignal;
- (void)sendShowFriendsDailyPublishButtonBubbleSignal;
- (void)sendShowUpdateCanvasAnimatedInfoGuideSignal;
- (void)sendShowMusicBubbleSignalByType:(long long)arg0;
- (void)setFunctionBubble:(id)arg0;
- (id)functionBubble;
- (void)didTappedFunctionBubble;
- (void)setImageTitleBubble:(id)arg0;
- (id)imageTitleBubble;
- (void)didTappedImageTitleBubble;
- (id)showSideslipPropGuideSubject;
- (id)showMusicBubbleSubject;
- (id)showQuickPublishBubbleSubject;
- (id)showUpdateCanvasAnimatedInfoGuideSubject;
- (id)showFriendsDailyPublishButtonBubbleSubject;
- (void)setShowSideslipPropGuideSignal:(id)arg0;
- (void)setShowSideslipPropGuideSubject:(id)arg0;
- (void)setShowMusicBubbleSignal:(id)arg0;
- (void)setShowMusicBubbleSubject:(id)arg0;
- (void)setShowQuickPublishBubbleSignal:(id)arg0;
- (void)setShowQuickPublishBubbleSubject:(id)arg0;
- (void)setShowFriendsDailyPublishButtonBubbleSignal:(id)arg0;
- (void)setShowFriendsDailyPublishButtonBubbleSubject:(id)arg0;
- (void)setShowUpdateCanvasAnimatedInfoGuideSubject:(id)arg0;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;
- (void)setSubscription:(id)arg0;
- (void)dealloc;
- (void)addSubscriber:(id)arg0;
- (id)subscription;

@end
