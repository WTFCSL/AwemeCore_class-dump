//
//     Generated by private class-dump
//

@class AWEBubble, AWENearbyBubbleInfoModel, NSString, AWENearbyActivityBubbleResource, AWENearbyActivityResourceModel;

@interface AWESocialBubbleManager : NSObject <AWESocialHeartbeatMessage, AWEInnerNotificationMessage> {
    BOOL _isShowingBubble;
    BOOL _shouldShowBubbleWithPageAppear;
    BOOL _shouldShowBubbleAfterSplash;
    AWEBubble *_toastingBubble;
    AWEBubble *_toastingTC21Bubble;
    id /* block */ _delayShowBubbleBlock;
    AWENearbyBubbleInfoModel *_bubbleInfoModel;
    AWENearbyActivityResourceModel *_tc21Resource;
    AWENearbyActivityBubbleResource *_tc21BubbleResource;
}

@property (weak, nonatomic) AWEBubble *toastingBubble;
@property (weak, nonatomic) AWEBubble *toastingTC21Bubble;
@property (copy, nonatomic) id /* block */ delayShowBubbleBlock;
@property (nonatomic) BOOL isShowingBubble;
@property (retain, nonatomic) AWENearbyBubbleInfoModel *bubbleInfoModel;
@property (retain, nonatomic) AWENearbyActivityResourceModel *tc21Resource;
@property (retain, nonatomic) AWENearbyActivityBubbleResource *tc21BubbleResource;
@property (nonatomic) BOOL shouldShowBubbleAfterSplash;
@property (nonatomic) BOOL shouldShowBubbleWithPageAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)supplementShowTC1BubbleIfNeeded;
- (void)cancelShowTC21Bubble;
- (void)dismissBubbleIfNeeded;
- (void)tabBarDidChangeNotification:(id)arg0;
- (void)innerNotificationWillDisplay:(id)arg0;
- (void)splashDidDisappear:(id)arg0;
- (BOOL)isShowingBubble;
- (void)setIsShowingBubble:(BOOL)arg0;
- (void)heartbeatDidChange:(id)arg0;
- (void)setBubbleInfoModel:(id)arg0;
- (id /* block */)delayShowBubbleBlock;
- (BOOL)isOtherGuideBubbleShowing;
- (id)tabbarNearbyTab;
- (void)removeNearbyBubble;
- (void)setToastingBubble:(id)arg0;
- (void)setDelayShowBubbleBlock:(id /* block */)arg0;
- (id)bubbleInfoModel;
- (void)saveBubbleShowedWithModel:(id)arg0;
- (id)toastingBubble;
- (id)toastingTC21Bubble;
- (void)saveTC21BubbleShowedStatus;
- (void)setToastingTC21Bubble:(id)arg0;
- (void)dismissBubble:(id)arg0 completion:(id /* block */)arg1;
- (void)removeTC21NearbyBubble;
- (BOOL)shouldShowBubbleAfterSplash;
- (BOOL)canShowBubbleWithModel:(id)arg0;
- (void)showBubbleWithModel:(id)arg0;
- (id)keyForActivityID:(id)arg0;
- (void)setTc21Resource:(id)arg0;
- (void)setTc21BubbleResource:(id)arg0;
- (id)tc21BubbleResource;
- (void)setShouldShowBubbleWithPageAppear:(BOOL)arg0;
- (BOOL)hasExceedTC21BubbleShowCountLimit;
- (void)setShouldShowBubbleAfterSplash:(BOOL)arg0;
- (id)tc21Resource;
- (void)tapToDismissTC21Bubble;
- (BOOL)shouldShowBubbleWithPageAppear;
- (void)showTC21BubbleIfNeededWithDelay:(long long)arg0;
- (BOOL)__shouldShowTC21BubbleResource;
- (void)__increaseShowedCount;
- (id)__keyForCacheWithActivityID:(long long)arg0;
- (id)__cacheInfoWithActivityID:(long long)arg0;
- (void)__cacheTodayDateIntoPeroidWithCacheInfoModel:(id)arg0;
- (id)__dateKeyWithDate:(id)arg0;
- (void)updateTC21BubbleModel:(id)arg0;
- (void)applicationWillResignActive:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (double)currentTimeStamp;

@end
