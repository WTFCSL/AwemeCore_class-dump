//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary;

@interface AWEPayTransferAccountsPayManager : NSObject <CJPayAPIDelegate> {
    id /* block */ _completionBlock;
    NSMutableDictionary *_checkPayStatusRetryTimesMap;
    NSString *_orderId;
    NSString *_clientMsgId;
    NSString *_conversationID;
    NSString *_conversationLongID;
    NSDictionary *_params;
}

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSMutableDictionary *checkPayStatusRetryTimesMap;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *clientMsgId;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *conversationLongID;
@property (retain, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)orderId;
- (void)setOrderId:(id)arg0;
- (void)callState:(BOOL)arg0 fromScene:(long long)arg1;
- (void)onResponse:(id)arg0;
- (id)checkPayStatusRetryTimesMap;
- (void)setCheckPayStatusRetryTimesMap:(id)arg0;
- (void)setClientMsgId:(id)arg0;
- (id)clientMsgId;
- (void)checkTransferAccountsPayStatus:(id)arg0 completion:(id /* block */)arg1;
- (void)setConversationLongID:(id)arg0;
- (id)conversationLongID;
- (void)sendTransferAccountsWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (id)conversationID;
- (id)params;
- (void)setConversationID:(id)arg0;
- (void)setParams:(id)arg0;

@end
