//
//     Generated by private class-dump
//

@class NSObject, NSString, BDUGLuckyDogPopUpObj, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDUGLuckyDogMessageManager : NSObject <BDUGLuckyDogPopupManagerProtocol> {
    NSObject<OS_dispatch_queue> *dialogPollingQueue;
    double nextPollingTime;
    BDUGLuckyDogPopUpObj *showingPopUpObj;
    long long managerStatus;
    NSObject *_messageState;
    NSMutableArray *_needShowMessagesObjs;
}

@property (readonly, nonatomic) NSObject *messageState;
@property (retain, nonatomic) NSMutableArray *needShowMessagesObjs;
@property (retain) NSObject<OS_dispatch_queue> *dialogPollingQueue;
@property (nonatomic) double nextPollingTime;
@property (nonatomic) long long managerStatus;
@property (nonatomic) double lockedTime;
@property (retain, nonatomic) BDUGLuckyDogPopUpObj *showingPopUpObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

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
- (id)showingPopUpObj;
- (void)setShowingPopUpObj:(id)arg0;
- (BOOL)_enqueueMessage:(id)arg0;
- (void)_showMessage:(id)arg0;
- (BOOL)enqueuePopUp:(id)arg0 shouldShow:(id /* block */)arg1 showDialog:(id /* block */)arg2 forceHide:(id /* block */)arg3 force:(BOOL)arg4;
- (void)logWithPopUpObj:(id)arg0 message:(id)arg1;
- (id)needShowMessagesObjs;
- (id)messageState;
- (void)_showForcedlyMessage:(id)arg0;
- (BOOL)_throwMessageToHost:(id)arg0;
- (BOOL)_enqueueAndShowMessage:(id)arg0;
- (void)removeAllPopUps;
- (void)setNeedShowMessagesObjs:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end