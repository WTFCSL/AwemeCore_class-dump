//
//     Generated by private class-dump
//

@protocol CJPayChannelManagerModule <CJPayWakeByUniversalPayDeskProtocol>

- (id)i_wxH5PayReferUrlStr;
- (void)i_registerWXH5PayReferUrlStr:(id)arg0;
- (void)i_registerWXUniversalLink:(id)arg0;
- (BOOL)i_canProcessURL:(id)arg0;
- (BOOL)i_canProcessUserActivity:(id)arg0;
- (void)i_payActionWithChannel:(unsigned long long)arg0 dataDict:(id)arg1 completionBlock:(id /* block */)arg2;

@end
