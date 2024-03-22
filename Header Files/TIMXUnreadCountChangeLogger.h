//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance, TIMXGCDTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TIMXUnreadCountChangeLogger : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
    TIMXGCDTimer *_logUCTimer;
    NSMutableArray *_unreadCountChangedConversatioInfoArray;
    NSObject<OS_dispatch_queue> *_p_loggerUCQueue;
    TIMXGCDTimer *_logTUCTimer;
    NSMutableArray *_totalUnreadCountChangedInfoArr;
    NSObject<OS_dispatch_queue> *_p_loggerTUCQueue;
}

@property (retain, nonatomic) TIMXGCDTimer *logUCTimer;
@property (retain, nonatomic) NSMutableArray *unreadCountChangedConversatioInfoArray;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_loggerUCQueue;
@property (retain, nonatomic) TIMXGCDTimer *logTUCTimer;
@property (retain, nonatomic) NSMutableArray *totalUnreadCountChangedInfoArr;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_loggerTUCQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userDidLogout:(id)arg0;
- (void)addOneUnreadCountChangeLogWithChangeInfo:(id)arg0;
- (void)addOneTotalUnreadCountChangeLogWithChangeInfo:(id)arg0;
- (id)p_loggerUCQueue;
- (id)unreadCountChangedConversatioInfoArray;
- (id)logUCTimer;
- (void)tryToLogUC;
- (void)setLogUCTimer:(id)arg0;
- (id)p_loggerTUCQueue;
- (id)totalUnreadCountChangedInfoArr;
- (id)logTUCTimer;
- (void)tryToLogTUC;
- (void)setLogTUCTimer:(id)arg0;
- (void)__printLogOfUnreadCountChangedConversationArray;
- (void)setUnreadCountChangedConversatioInfoArray:(id)arg0;
- (void)__printLogOfTotalUnreadCountChangedInfoArr;
- (void)setTotalUnreadCountChangedInfoArr:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)arg0;

@end
