//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface AWELiveInappPushManager : NSObject <AWEPushSBCProtocol> {
    unsigned long long _showTimesInThisColdLaunch;
    NSDate *_livePushPrevShowTime;
}

@property (nonatomic) unsigned long long showTimesInThisColdLaunch;
@property (retain, nonatomic) NSDate *livePushPrevShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;

- (BOOL)pushSBCCouldHandleWithMsg:(id)arg0 payload:(id)arg1 businessType:(id)arg2;
- (void)p_showPushIfNeeded:(id)arg0;
- (void)p_delayToShowPush:(id)arg0;
- (void)p_showPush:(id)arg0;
- (void)innerPushShowed;
- (id)currentTopPage:(id)arg0;
- (void)setLivePushPrevShowTime:(id)arg0;
- (unsigned long long)showTimesInThisColdLaunch;
- (void)setShowTimesInThisColdLaunch:(unsigned long long)arg0;
- (BOOL)p_isLiveBusinessType:(id)arg0;
- (id)p_innerPushExemptModelWithBusinessType:(id)arg0 eventType:(id)arg1;
- (void)trackLivePushAbandonWithRoomID:(id)arg0 anchorID:(id)arg1 abandonReson:(id)arg2;
- (BOOL)p_canRequestOrShowLiveInappPushWithExemptModel:(id)arg0;
- (void)trackLivePushAbandonWithModel:(id)arg0 eventName:(id)arg1;
- (BOOL)p_canShowLiveInappPushWithPushModel:(id)arg0;
- (void)showPushAfterCheckPreview:(id)arg0;
- (void)stopPullStreamOverTime:(id)arg0 withPreviewManager:(id)arg1;
- (Class)p_inappPushViewClassWithPushModel:(id)arg0;
- (id)livePushPrevShowTime;
- (BOOL)p_canShowLiveInappPushPlusWithPushModel:(id)arg0;
- (BOOL)p_isChatPushShowing;
- (BOOL)p_isLivePushShowing;
- (BOOL)p_isShakePushShowing;
- (id)init;
- (void).cxx_destruct;

@end
