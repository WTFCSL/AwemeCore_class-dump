//
//     Generated by private class-dump
//

@protocol RTVJetRequestRetryObserverProtocol <NSObject>

@optional

- (void)urlRequestWillStart:(id)arg0 retryWithTimes:(unsigned long long)arg1;
- (void)urlRequestDidCompletion:(id)arg0 retryTimes:(unsigned long long)arg1 response:(id)arg2 error:(id)arg3;
- (void)wsRequestWillStart:(id)arg0 retryWithTimes:(unsigned long long)arg1;
- (void)wsRequestDidCompletion:(id)arg0 retryTimes:(unsigned long long)arg1 response:(id)arg2 error:(id)arg3;

@end
