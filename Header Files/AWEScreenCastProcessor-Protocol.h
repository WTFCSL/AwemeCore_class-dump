//
//     Generated by private class-dump
//

@protocol AWEScreenCastProcessorDelegate;

@protocol AWEScreenCastProcessor <NSObject>

@property (weak, nonatomic) id<AWEScreenCastProcessorDelegate> delegate;

- (BOOL)canContinuePlay;
- (void)prefetchPlayItemWithModel:(id)arg0;
- (void)fetchPlayItemWithModel:(id)arg0 withCompletion:(id /* block */)arg1;
- (id)filterUnSupportedModelsWith:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@optional

- (BOOL)supportCastWithModel:(id)arg0 isXsg:(BOOL)arg1;
- (void)prefetchPlayItemsWithModels:(id)arg0 fromVideoID:(id)arg1;
- (id)findNextSupportedModelWithModels:(id)arg0 isXsg:(BOOL)arg1 fromIndex:(long long)arg2;
- (BOOL)shouldPlayNextWhenPlayOver;
- (void)recordToWatchHistoryWithModel:(id)arg0;
- (void)fetchPlayItemsWithModels:(id)arg0 fromVideoID:(id)arg1 withCompletion:(id /* block */)arg2;

@end
