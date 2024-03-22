//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface TTAirPlayMessageTransfer : NSObject <TTAirPlayMessageCallback> {
    NSMutableDictionary *_midToCallbackDic;
    NSObject<OS_dispatch_semaphore> *_callbackDicLock;
}

@property (retain, nonatomic) NSMutableDictionary *midToCallbackDic;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *callbackDicLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onReceiveMessage:(id)arg0;
- (void)didMessageSendTimeout:(id)arg0;
- (void)onReceiveBinaryMessage:(id)arg0;
- (id)callbackDicLock;
- (id)midToCallbackDic;
- (id)sendMessage:(id)arg0 callback:(id /* block */)arg1;
- (void)setMidToCallbackDic:(id)arg0;
- (void)setCallbackDicLock:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
