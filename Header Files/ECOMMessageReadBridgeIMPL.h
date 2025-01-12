//
//     Generated by private class-dump
//

@class NSString;

@interface ECOMMessageReadBridgeIMPL : NSObject <ECOMTIMStartUpTaskProtocol, ECOMMessageReadBridge>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)messageReadWithConversationID:(id)arg0 messageIndex:(long long)arg1 byUserID:(long long)arg2;
+ (long long)startUpOrder;
+ (void)markConversationAsRead:(id)arg0 tillPullIndex:(id)arg1 tillBadgeCount:(id)arg2 sendToServer:(BOOL)arg3;
+ (void)markConversationAsRead:(id)arg0 tillPullIndex:(id)arg1 tillBadgeCount:(id)arg2 convUnreadUnion:(id)arg3 sendToServer:(BOOL)arg4;
+ (void)requestReadMessageByInboxWithConvIDs:(id)arg0 convShortIDs:(id)arg1 requestFrom:(id)arg2 completion:(id /* block */)arg3;
+ (id)handleReadsRequestResult:(id)arg0;
+ (void)fetchMessageReadsForAllConversationWithCompletion:(id /* block */)arg0;
+ (id)sharedInstance;
+ (void)startUp;

- (void)setUp;

@end
