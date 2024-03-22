//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, BDUGLuckyDogPopUpObj, NSObject;
@protocol OS_dispatch_queue;

@interface BDUGLuckyDogDialogManager : NSObject <BDUGLuckyDogPopupManagerProtocol> {
    NSObject<OS_dispatch_queue> *dialogPollingQueue;
    double nextPollingTime;
    BDUGLuckyDogPopUpObj *showingPopUpObj;
    long long managerStatus;
    double lockedTime;
    NSMutableDictionary *_dialogStoreDict;
    NSObject *_dialogState;
}

@property (retain, nonatomic) NSMutableDictionary *dialogStoreDict;
@property (readonly, nonatomic) NSObject *dialogState;
@property (retain) NSObject<OS_dispatch_queue> *dialogPollingQueue;
@property (nonatomic) double nextPollingTime;
@property (nonatomic) long long managerStatus;
@property (nonatomic) double lockedTime;
@property (retain, nonatomic) BDUGLuckyDogPopUpObj *showingPopUpObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sdkSettingsUpdate;
+ (void)setDialogQueuePaused:(BOOL)arg0;
+ (BOOL)getDialogQueuePaused;
+ (void)_setDialogQueuePaused:(BOOL)arg0;
+ (id)sharedInstance;

- (id)createH5Dialog:(id)arg0 withPriority:(long long)arg1;
- (BOOL)enqueueH5Dilaog:(id)arg0 callback:(id /* block */)arg1;
- (void)renewalExpiredTimerForDialogObj:(id)arg0;
- (long long)_allDialogObjsCount;
- (void)_showDialog:(id)arg0;
- (void)logWithDialog:(id)arg0 message:(id)arg1;
- (void)_showForcedlyDialog:(id)arg0;
- (double)_maxPopupQueueLockedDuration;
- (BOOL)_tryShowDialogs:(id)arg0 dialogRemover:(id /* block */)arg1;
- (BOOL)_throwDialogToHost:(id)arg0;
- (void)_onAppDidEnterBackground;
- (void)_onAppWillEnterForeground;
- (void)_forceShowDialog:(id)arg0;
- (BOOL)_enqueueAndShowDialog:(id)arg0;
- (BOOL)_enqueuePopUp:(id)arg0 shouldShow:(id /* block */)arg1 showDialog:(id /* block */)arg2 forceHide:(id /* block */)arg3 force:(BOOL)arg4;
- (BOOL)_finishPopUp:(id)arg0 finishType:(unsigned long long)arg1;
- (id)_currentShowingDialog;
- (BOOL)_isContainDialog:(id)arg0;
- (BOOL)_removeDialog:(id)arg0;
- (BOOL)_finishDialogWithName:(id)arg0 finishType:(unsigned long long)arg1;
- (BOOL)_removeDialogWithName:(id)arg0;
- (id)_allDialogObjs;
- (id)_managerStatusString;
- (id)dialogStoreDict;
- (void)setDialogStoreDict:(id)arg0;
- (id)dialogState;
- (id)createPopUp:(id)arg0 withPriority:(long long)arg1 extra:(id)arg2;
- (BOOL)enqueuePopUp:(id)arg0 shouldShow:(id /* block */)arg1 showDialog:(id /* block */)arg2 forceHide:(id /* block */)arg3;
- (void)forceShowPopUp:(id)arg0 shouldShow:(id /* block */)arg1 showDialog:(id /* block */)arg2 forceHide:(id /* block */)arg3;
- (BOOL)finishPopUp:(id)arg0 finishType:(unsigned long long)arg1;
- (id)currentShowingPopUpObj;
- (BOOL)isContainPopUp:(id)arg0;
- (BOOL)removePopUp:(id)arg0;
- (id)managerStatusDescription;
- (id)allPopUpObjs;
- (id)dialogPollingQueue;
- (void)setDialogPollingQueue:(id)arg0;
- (double)nextPollingTime;
- (void)setNextPollingTime:(double)arg0;
- (long long)managerStatus;
- (void)setManagerStatus:(long long)arg0;
- (double)lockedTime;
- (void)setLockedTime:(double)arg0;
- (id)showingPopUpObj;
- (void)setShowingPopUpObj:(id)arg0;
- (void)removeAllPopUps;
- (BOOL)finishPopUpWithName:(id)arg0 finishType:(unsigned long long)arg1;
- (BOOL)removePopUpWithName:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)_currentTime;
- (BOOL)_enqueueDialog:(id)arg0;
- (void)dealloc;
- (void)_setupNotification;

@end
