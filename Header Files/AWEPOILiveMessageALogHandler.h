//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOILiveMessageALogHandler : NSObject <AWEPOILiveMessageHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleRegisterMsgSubscriber:(id)arg0;
- (void)handleUnRegisterMsgSubscriber:(id)arg0;
- (void)handleReleaseMsgCenter:(unsigned long long)arg0 extra:(id)arg1;
- (BOOL)handlePostMessage:(id)arg0 withSubscriber:(id)arg1;

@end
