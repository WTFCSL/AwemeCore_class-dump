//
//     Generated by private class-dump
//

@class IESLiveInnerFeedContext, NSString;
@protocol IESLiveInnerFeedDataOuterProvider, IESLiveInnerFeedDataDidChangeObserver;

@interface IESLiveInnerFeedInOutSyncDataProviderImpl : NSObject <IESLiveInnerFeedDataProvider> {
    id<IESLiveInnerFeedDataDidChangeObserver> _innerFeedDataObserver;
    id<IESLiveInnerFeedDataOuterProvider> _outerProvider;
    IESLiveInnerFeedContext *_context;
}

@property (retain, nonatomic) id<IESLiveInnerFeedDataOuterProvider> outerProvider;
@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (weak, nonatomic) id<IESLiveInnerFeedDataDidChangeObserver> innerFeedDataObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)outerProvider;
- (void)setOuterProvider:(id)arg0;
- (id)initWithRoomAisle:(id)arg0 context:(id)arg1;
- (void)setInnerFeedDataObserver:(id)arg0;
- (BOOL)innerFeedCanLoadMore;
- (void)innerFeedLoadMore;
- (void)innerFeedInitialFetch;
- (void)_initData:(id)arg0;
- (id)innerFeedDataObserver;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (long long)providerType;
- (id)context;
- (long long)defaultIndex;

@end
