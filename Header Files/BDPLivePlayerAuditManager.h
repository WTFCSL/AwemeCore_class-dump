//
//     Generated by private class-dump
//

@class NSMapTable, NSMutableDictionary, NSObject, BDPMultiDelegateProxy;
@protocol OS_dispatch_queue, OS_dispatch_source, BDPLivePlayerAuditDelegate;

@interface BDPLivePlayerAuditManager : NSObject {
    BOOL _timerIsEnabled;
    BDPMultiDelegateProxy<BDPLivePlayerAuditDelegate> *_delegates;
    NSMutableDictionary *_historyResultBySrc;
    NSMutableDictionary *_historyResultByID;
    NSMapTable *_auditObservers;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_timer;
}

@property (retain, nonatomic) BDPMultiDelegateProxy<BDPLivePlayerAuditDelegate> *delegates;

+ (id)sharedManager;

- (void)addAuditTaskWithSrc:(id)arg0 observer:(id)arg1 appID:(id)arg2 completion:(id /* block */)arg3;
- (void)removeAuditTaskWithSrc:(id)arg0 observer:(id)arg1;
- (id)delegates;
- (void)setDelegates:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
