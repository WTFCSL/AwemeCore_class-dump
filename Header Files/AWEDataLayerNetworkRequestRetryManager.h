//
//     Generated by private class-dump
//

@class NSMutableDictionary;
@protocol AWEDataLayerNetworkRequestRetryManagerDelegate;

@interface AWEDataLayerNetworkRequestRetryManager : NSObject {
    id<AWEDataLayerNetworkRequestRetryManagerDelegate> _delegate;
    NSMutableDictionary *_requestsMap;
}

@property (retain, nonatomic) NSMutableDictionary *requestsMap;
@property (weak, nonatomic) id<AWEDataLayerNetworkRequestRetryManagerDelegate> delegate;

+ (id)sharedManager;

- (id)requestsMap;
- (void)setRequestsMap:(id)arg0;
- (void)enqueueRetryRequest:(id)arg0;
- (void)retryTimerTrigger:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
