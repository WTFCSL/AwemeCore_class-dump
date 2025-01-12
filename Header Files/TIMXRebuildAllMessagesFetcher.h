//
//     Generated by private class-dump
//

@class NSOperationQueue, TIMXSDKInstance;

@interface TIMXRebuildAllMessagesFetcher : NSObject {
    TIMXSDKInstance *_r;
    NSOperationQueue *_fetcherQueue;
}

@property (retain, nonatomic) NSOperationQueue *fetcherQueue;

- (id)fetchAllMessagesFromConversationIdentifier:(id)arg0 minIndexV2:(long long)arg1 maxIndexV2:(long long)arg2 completion:(id /* block */)arg3;
- (id)fetcherQueue;
- (void)setFetcherQueue:(id)arg0;
- (void)cancelAllOperations;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg0;

@end
