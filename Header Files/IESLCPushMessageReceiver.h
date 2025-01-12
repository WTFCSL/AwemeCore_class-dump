//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLCPushMessageReceiverDelegate;

@interface IESLCPushMessageReceiver : TTPushMessageReceiver <IESLCPushMessageReceiverProtocol> {
    id<IESLCPushMessageReceiverDelegate> _delegate;
}

@property (weak, nonatomic) id<IESLCPushMessageReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)dispatch:(int)arg0 method:(int)arg1 payloadEncoding:(const void *)arg2 payloadType:(const void *)arg3 payload:(const void *)arg4 seqid:(unsigned long long)arg5 logid:(unsigned long long)arg6 headers:(struct shared_ptr<std::map<std::string, std::string>> { void *x0; struct __shared_weak_count *x1; })arg7;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
