//
//     Generated by private class-dump
//

@class NSTimer, NSString, AWEInnerNotificationSettings, NSMutableDictionary, NSObject, NSMutableArray, RxScheduler, AWEInnerNotificationOperator;
@protocol AWEInnerNotificationConflictHandler, AWEInnerNotificationCenterBizProtocol, OS_dispatch_semaphore;

@interface AWEInnerNotificationCenter : HTSService <AWEInnerNotificationOperatorDelegate, HTSService, AWEInnerNotificationCenter, AWEInnerNotificationController> {
    NSMutableArray *_internalPendingNotificationRequests;
    AWEInnerNotificationOperator *_currentDisplayNotificationOperator;
    id<AWEInnerNotificationConflictHandler> _conflictHandler;
    NSObject<OS_dispatch_semaphore> *_signal;
    AWEInnerNotificationSettings *_settings;
    id<AWEInnerNotificationCenterBizProtocol> _bizImpl;
    RxScheduler *_scheduler;
    RxScheduler *_waittingScheduler;
    long long _notificationIndex;
    NSMutableDictionary *_blockInfos;
    NSTimer *_blockValidateTimer;
}

@property (readonly, nonatomic) NSMutableArray *internalPendingNotificationRequests;
@property (retain) AWEInnerNotificationOperator *currentDisplayNotificationOperator;
@property (readonly, nonatomic) id<AWEInnerNotificationConflictHandler> conflictHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *signal;
@property (readonly, nonatomic) AWEInnerNotificationSettings *settings;
@property (retain, nonatomic) id<AWEInnerNotificationCenterBizProtocol> bizImpl;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) RxScheduler *waittingScheduler;
@property (nonatomic) long long notificationIndex;
@property (readonly, nonatomic) NSMutableDictionary *blockInfos;
@property (retain, nonatomic) NSTimer *blockValidateTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)currentDisplayNotification;
- (id)removeAllNotificationWithTypes:(id)arg0;
- (id)removeNotificationWithRequestIdentifier:(id)arg0;
- (id)modifyPendingNotificationRequestsWithTypes:(id)arg0 modifyBlock:(id /* block */)arg1;
- (id)modifyPendingNotificationRequestsWithIdentifier:(id)arg0 modifyBlock:(id /* block */)arg1;
- (id)blockNotificationLessAndEqualPriority:(long long)arg0 business:(long long)arg1 validateBlockCondition:(id /* block */)arg2;
- (id)releaseNotificationBlockWithBusiness:(long long)arg0;
- (id)blockDisplayBusinessesWithNotificationPriority:(long long)arg0;
- (id)removeAllNotificationController;
- (id)resumeNotifcationDisplayIfNeeded;
- (void)__trackEvent:(id)arg0 params:(id)arg1;
- (id)blockValidateTimer;
- (void)__handleEnterForegroundNotification:(id)arg0;
- (void)__handleDidBecomeActiveNotification:(id)arg0;
- (id)currentDisplayNotificationOperator;
- (void)setCurrentDisplayNotificationOperator:(id)arg0;
- (id)__showNotificationFromArrayIfNeeded:(BOOL)arg0;
- (id)__errorWithUserInfo:(id)arg0 errorCode:(long long)arg1;
- (void)__trackShowNotificationRequest:(id)arg0 error:(id)arg1;
- (id)internalPendingNotificationRequests;
- (id)__isEnableDisplayNotificationWithRequest:(id)arg0;
- (id)__showNotificationWithRequest:(id)arg0;
- (id)__isBlockedWithRequest:(id)arg0;
- (id)__dismissCurrentNotification;
- (void)__trackShowNotificationRequest:(id)arg0 error:(id)arg1 extra:(id)arg2;
- (id)__findTheNextNotificationRequestForDisplay;
- (id)__requestOperatePschedule:(id /* block */)arg0;
- (id)bizImpl;
- (id)__loopFindNotificationRequestIsEnableToDisplayAtIndex:(long long)arg0;
- (BOOL)__validateBlockCondition:(id)arg0;
- (id)waittingScheduler;
- (void)__trackExceptionSchedule;
- (void)__validateCurrentBlockInfos;
- (void)setBlockValidateTimer:(id)arg0;
- (void)__releaseBlockValidateTimer;
- (id)__showNotificationFromArrayIfNeeded;
- (id)__preAddNotificationRequest:(id)arg0;
- (long long)notificationIndex;
- (void)setNotificationIndex:(long long)arg0;
- (void)__trackAddRequest:(id)arg0 duration:(double)arg1;
- (id)__addNotificationRequest:(id)arg0;
- (void)__trackAddResultRequest:(id)arg0 isNew:(BOOL)arg1;
- (id)__pendingRequestsWithTypes:(id)arg0;
- (id)__modifyPendingRequestWithRequestsProvider:(id /* block */)arg0 modifyBlock:(id /* block */)arg1;
- (void)__trackValidateBlockConditionInvalid:(id)arg0;
- (void)__trackBlockPriority:(long long)arg0 business:(long long)arg1;
- (void)__startBlockValidateTimerIfNeeded;
- (void)__trackReleaseBlockWithBusiness:(long long)arg0;
- (void)__trackResumeNotificationDisplay;
- (void)notificationOperatorDidDismiss:(id)arg0 reason:(long long)arg1;
- (void)__trackNotificationRequestDismiss:(id)arg0 reason:(long long)arg1;
- (id)__trackInfoWithRequest:(id)arg0;
- (id)__trackInfoWithError:(id)arg0;
- (void)__trackBlockRequest:(id)arg0 reasonStrategy:(long long)arg1;
- (void)__trackTryToDisplayNotificationRequest;
- (void)__trackEnableDisplayCheckResult:(long long)arg0 request:(id)arg1;
- (void)setBizImpl:(id)arg0;
- (id)signal;
- (void).cxx_destruct;
- (id)addNotificationRequest:(id)arg0;
- (id)scheduler;
- (id)settings;
- (id)pendingNotificationRequests;
- (id)notificationController;
- (void)dealloc;
- (id)conflictHandler;
- (id)blockInfos;

@end
