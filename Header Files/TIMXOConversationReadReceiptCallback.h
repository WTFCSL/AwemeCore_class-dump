//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXOConversationReadReceiptCallback : NSObject <IESIMSDKConversationReadReceiptCallback> {
    id /* block */ _completion;
}

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completion;

+ (id)callbackWithCompletion:(id /* block */)arg0;

- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;

@end