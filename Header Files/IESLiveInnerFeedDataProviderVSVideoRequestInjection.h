//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveInnerFeedDataProviderVSVideoRequestInjection : NSObject <IESLiveInnerFeedDataProviderInjectionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willFetchWithURL:(id)arg0 withDataChangedType:(unsigned long long)arg1 parameters:(id)arg2 updateBlock:(id /* block */)arg3;
- (void)didFetchWithResponse:(id)arg0 error:(id)arg1;
- (long long)injectionPriority;

@end