//
//     Generated by private class-dump
//

@protocol LSIMServiceClientObserver <NSObject>

@optional

- (void)conversationsDidChangeWithNew:(id)arg0;
- (void)conversationsDidDeleted:(id)arg0;
- (void)messageDidInsert;
- (void)messageDidUpdateWithMessage:(id)arg0;
- (void)didReceiveWsMessage:(id)arg0 method:(long long)arg1;
- (void)conversationDidUpdate:(id)arg0;

@end