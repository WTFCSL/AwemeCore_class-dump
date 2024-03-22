//
//     Generated by private class-dump
//

@class IESLiveInnerFeedContext, NSString;
@protocol IESLiveInnerFeedDataDidChangeObserver, IESLiveInnerFeedDataProvider;

@interface IESLiveInnerFeedMixURLAndListDataProviderImpl : NSObject <IESLiveInnerFeedDataDidChangeObserver, IESLiveInnerFeedDataProvider> {
    id<IESLiveInnerFeedDataDidChangeObserver> _innerFeedDataObserver;
    id<IESLiveInnerFeedDataProvider> _specificURLDataProvider;
    id<IESLiveInnerFeedDataProvider> _specificListDataProvider;
    IESLiveInnerFeedContext *_context;
}

@property (retain, nonatomic) id<IESLiveInnerFeedDataProvider> specificURLDataProvider;
@property (retain, nonatomic) id<IESLiveInnerFeedDataProvider> specificListDataProvider;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveInnerFeedDataDidChangeObserver> innerFeedDataObserver;

- (void)didSetAttachingDIContext;
- (void)refreshWithPullId:(id)arg0;
- (id)initWithRoomAisle:(id)arg0 context:(id)arg1;
- (void)setInnerFeedDataObserver:(id)arg0;
- (BOOL)innerFeedCanLoadMore;
- (void)innerFeedLoadMore;
- (void)innerFeedInitialFetch;
- (void)provider:(id)arg0 dataDidChangeWithType:(unsigned long long)arg1 datas:(id)arg2 hasMore:(BOOL)arg3 extraParams:(id)arg4;
- (void)provider:(id)arg0 failToFetchData:(unsigned long long)arg1 error:(id)arg2 extraParams:(id)arg3;
- (void)_initData:(id)arg0;
- (id)innerFeedDataObserver;
- (id)specificURLDataProvider;
- (id)specificListDataProvider;
- (void)setSpecificURLDataProvider:(id)arg0;
- (void)setSpecificListDataProvider:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (long long)providerType;
- (id)context;
- (long long)defaultIndex;

@end