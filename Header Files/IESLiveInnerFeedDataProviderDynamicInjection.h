//
//     Generated by private class-dump
//

@class NSString, NSMutableSet;
@protocol IESLiveInnerFeedDataProviderInjectionProtocol;

@interface IESLiveInnerFeedDataProviderDynamicInjection : NSObject <IESLiveInnnerFeedDataSourceDynamicInjectionProvider, IESLiveInnerFeedDataProviderInjectionProtocol> {
    NSMutableSet<IESLiveInnerFeedDataProviderInjectionProtocol> *_injections;
    NSMutableSet<IESLiveInnerFeedDataProviderInjectionProtocol> *_waitingInjections;
}

@property (retain, nonatomic) NSMutableSet<IESLiveInnerFeedDataProviderInjectionProtocol> *injections;
@property (retain, nonatomic) NSMutableSet<IESLiveInnerFeedDataProviderInjectionProtocol> *waitingInjections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willFetchWithURL:(id)arg0 withDataChangedType:(unsigned long long)arg1 parameters:(id)arg2 updateBlock:(id /* block */)arg3;
- (void)didFetchWithResponse:(id)arg0 error:(id)arg1;
- (long long)injectionPriority;
- (BOOL)registerInjection:(id)arg0;
- (void)unregisterInjection:(id)arg0;
- (id)waitingInjections;
- (id)injections;
- (void)setInjections:(id)arg0;
- (void)setWaitingInjections:(id)arg0;
- (void).cxx_destruct;

@end