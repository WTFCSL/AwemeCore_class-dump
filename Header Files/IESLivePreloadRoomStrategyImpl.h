//
//     Generated by private class-dump
//

@interface IESLivePreloadRoomStrategyImpl : IESLiveBackendRequestBaseImpl

+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;

- (id)bizParams;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:(id)arg0;
- (BOOL)pbParserWithOutBody;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
