//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance, TIMXPBResponseLongConnectionCallback, NSObject;
@protocol OS_dispatch_queue, TIMXInboxChatRoomPullerDelegate;

@interface TIMXInboxChatRoomPuller : NSObject {
    BOOL _pullingOfflineMessage;
    int _inbox;
    id<TIMXInboxChatRoomPullerDelegate> _delegate;
    TIMXSDKInstance *_r;
    NSString *_conversationID;
    long long _currentIndexV2;
    long long _pullIndex;
    TIMXPBResponseLongConnectionCallback *_notifyNewMessageCallback;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

@property (nonatomic) int inbox;
@property (copy, nonatomic) NSString *conversationID;
@property long long currentIndexV2;
@property long long pullIndex;
@property (retain, nonatomic) TIMXPBResponseLongConnectionCallback *notifyNewMessageCallback;
@property BOOL pullingOfflineMessage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (weak, nonatomic) id<TIMXInboxChatRoomPullerDelegate> delegate;

- (id)notifyNewMessageCallback;
- (void)setNotifyNewMessageCallback:(id)arg0;
- (void)appEnterForeground:(id)arg0;
- (void)tokenChanged:(id)arg0;
- (long long)pullIndex;
- (void)setPullIndex:(long long)arg0;
- (void)wsStateChangedToConnected:(id)arg0;
- (id)initWithRootObject:(id)arg0 inbox:(int)arg1 conversationID:(id)arg2 currentIndex:(long long)arg3;
- (void)setCurrentIndexV2:(long long)arg0;
- (void)notifyConversationHasNewMessage:(id)arg0;
- (long long)currentIndexV2;
- (BOOL)pullingOfflineMessage;
- (void)setPullingOfflineMessage:(BOOL)arg0;
- (id)requestQueue;
- (void)setRequestQueue:(id)arg0;
- (void)appDidEnterBackground:(id)arg0;
- (void).cxx_destruct;
- (id)conversationID;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)kickoff;
- (void)setConversationID:(id)arg0;
- (BOOL)validateMessage:(id)arg0;
- (int)inbox;
- (void)setInbox:(int)arg0;

@end
