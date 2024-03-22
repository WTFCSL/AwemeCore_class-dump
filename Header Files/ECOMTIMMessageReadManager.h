//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSPointerArray, NSString, ECOMTIMPBResponseLongConnectionCallback;

@interface ECOMTIMMessageReadManager : NSObject <ECOMTIMStartUpTaskProtocol> {
    BOOL _hasHandleThrottleRequestPlan;
    double _throttleTimeInterval;
    ECOMTIMPBResponseLongConnectionCallback *_longConnectionCallback;
    NSPointerArray *_arrDelegate;
    double _lastThrottleRequestTime;
    NSMutableDictionary *_dicmThrottleConvID2ShortID;
}

@property (class, readonly, nonatomic) ECOMTIMMessageReadManager *sharedInstance;
@property (class, readonly, nonatomic) NSMutableDictionary *sharedData;

@property (retain, nonatomic) ECOMTIMPBResponseLongConnectionCallback *longConnectionCallback;
@property (retain) NSPointerArray *arrDelegate;
@property (nonatomic) double lastThrottleRequestTime;
@property (nonatomic) BOOL hasHandleThrottleRequestPlan;
@property (retain, nonatomic) NSMutableDictionary *dicmThrottleConvID2ShortID;
@property (nonatomic) double throttleTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addWeakDelegate:(id)arg0;
+ (id)messageReadParticipantsWithConversationID:(id)arg0 messageIndex:(long long)arg1;
+ (BOOL)messageReadWithConversationID:(id)arg0 messageIndex:(long long)arg1 byUserID:(long long)arg2;
+ (long long)messageReadIndexInConversation:(id)arg0 byUserID:(long long)arg1;
+ (id)messageReadIndexOfAllUsersInConversation:(id)arg0;
+ (void)fetchMessageReadsWithConversationID:(id)arg0 conversationShortID:(id)arg1 requestFrom:(id)arg2 completion:(id /* block */)arg3;
+ (void)fetchMessageReadsWithArrConversationID:(id)arg0 arrConversationShortID:(id)arg1 requestFrom:(id)arg2 completion:(id /* block */)arg3;
+ (void)fetchMessageReadsWithArrConversationID:(id)arg0 arrConversationShortID:(id)arg1 arrWhichUserID:(id)arg2 inbox:(int)arg3 requestFrom:(id)arg4 completion:(id /* block */)arg5;
+ (long long)startUpOrder;
+ (void)fetchAllMembersReadsWithArrConversationID:(id)arg0 arrConversationShortID:(id)arg1 byInbox:(int)arg2 requestFrom:(id)arg3 completion:(id /* block */)arg4;
+ (id)handleReadsRequestResult:(id)arg0;
+ (void)fetchMessageReadsForAllConversationWithCompletion:(id /* block */)arg0;
+ (void)reloadMessageReadsFromDbWithCompletion:(id /* block */)arg0;
+ (void)fetchAllMembersReadsWithArrConversationID:(id)arg0 arrConversationShortID:(id)arg1 requestFrom:(id)arg2 completion:(id /* block */)arg3;
+ (id)sharedInstance;
+ (void)startUp;
+ (id)sharedData;

- (void)userDidLogin:(id)arg0;
- (void)userDidLogout:(id)arg0;
- (void)requestReadMessageByInboxWithConvIDs:(id)arg0 convShortIDs:(id)arg1 requestFrom:(id)arg2 completion:(id /* block */)arg3;
- (void)setArrDelegate:(id)arg0;
- (void)setThrottleTimeInterval:(double)arg0;
- (void)setDicmThrottleConvID2ShortID:(id)arg0;
- (id)dicmThrottleConvID2ShortID;
- (void)handleThrottleRequest;
- (void)setLongConnectionCallback:(id)arg0;
- (id)longConnectionCallback;
- (double)lastThrottleRequestTime;
- (double)throttleTimeInterval;
- (BOOL)hasHandleThrottleRequestPlan;
- (void)setHasHandleThrottleRequestPlan:(BOOL)arg0;
- (void)setLastThrottleRequestTime:(double)arg0;
- (id)arrDelegate;
- (void)setupLongConnection;
- (id)init;
- (void).cxx_destruct;
- (void)handleCallback:(id)arg0;
- (void)dealloc;

@end