//
//     Generated by private class-dump
//

@interface ECOMTIMPBResponseLongConnectionCallback : ECOMTIMLongConnectionCallback

+ (id)callbackWithSuccessBlock:(id /* block */)arg0 failureBlock:(id /* block */)arg1;
+ (id /* block */)filterWithPBCMDType:(int)arg0;
+ (id)callbackQueue;

- (void)listenNewP2PMessageNotify;
- (void)listenNewMessageNotify;
- (void)listenMessageReadCommandNotify;
- (void)listenMarkAsReadNotify;
- (void)listenConversationInfoUpdatedNotify;
- (id)init;

@end