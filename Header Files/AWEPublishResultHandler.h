//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPublishResultHandler : NSObject <AWEPublishTaskMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultHandler;

- (void)task:(id)arg0 didBeginWithInfo:(id)arg1;
- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)replaceMusicPublishProgressWithTask:(id)arg0 taskStatus:(long long)arg1;
- (void)task:(id)arg0 cancelWithResult:(BOOL)arg1;
- (void)cancelProductDetectPostWithTask:(id)arg0;
- (void)onTaskCancel:(id)arg0;
- (void)lynxBridgeSendEventWithTask:(id)arg0 status:(long long)arg1;
- (void)sendEventWithTask:(id)arg0 status:(long long)arg1;
- (void)saveUseMusicWhenBeginPublishIfNeededWithTask:(id)arg0;
- (void)showToastWithResultV2:(long long)arg0 error:(id)arg1;
- (void)showShootAgainSnackbarIfNeededWithTask:(id)arg0;
- (void)recordDraftInvisibleWithTask:(id)arg0;
- (id)init;
- (void)dealloc;
- (void)startListen;

@end
