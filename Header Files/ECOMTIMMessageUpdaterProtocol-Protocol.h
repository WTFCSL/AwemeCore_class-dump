//
//     Generated by private class-dump
//

@protocol ECOMTIMMessageUpdaterProtocol <NSObject>

- (void)modifyPropertyItemsForMessage:(id)arg0 inConversation:(id)arg1 modifyProperties:(id)arg2 force:(BOOL)arg3;
- (void)recallMessage:(id)arg0 inConversation:(id)arg1 role:(long long)arg2 completion:(id /* block */)arg3;
- (void)requestAllFailedMessageProperty;
- (void)requestAllMessageProperty;

@end
