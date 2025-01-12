//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchCachalotMessageHandler : NSObject <CachalotMessageHandler> {
    NSString *_messageID;
    id /* block */ _callBack;
}

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) id /* block */ callBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerWithMessageID:(id)arg0 callBack:(id /* block */)arg1;

- (id /* block */)callBack;
- (void)setCallBack:(id /* block */)arg0;
- (void)handleMessage:(id)arg0 callback:(id /* block */)arg1;
- (id)messageID;
- (void).cxx_destruct;
- (void)setMessageID:(id)arg0;

@end
