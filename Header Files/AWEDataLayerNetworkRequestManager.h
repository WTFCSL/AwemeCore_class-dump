//
//     Generated by private class-dump
//

@class NSMapTable, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, AWEDataLayerNetworkProtocol;

@interface AWEDataLayerNetworkRequestManager : NSObject <AWEDataLayerNetworkRequestRetryManagerDelegate> {
    NSMutableDictionary *_requestsMap;
    id<AWEDataLayerNetworkProtocol> _networkImpl;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSMapTable *_tokenToRequestMapTable;
}

@property (retain, nonatomic) NSMutableDictionary *requestsMap;
@property (retain, nonatomic) id<AWEDataLayerNetworkProtocol> networkImpl;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSMapTable *tokenToRequestMapTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setupNetworkImpl:(id)arg0;
- (void)requestWithNetworkProvider:(id)arg0 token:(id)arg1 config:(id)arg2 completion:(id /* block */)arg3;
- (void)setTokenToRequestMapTable:(id)arg0;
- (void)setNetworkImpl:(id)arg0;
- (id)requestsMap;
- (void)setRequestsMap:(id)arg0;
- (id)tokenToRequestMapTable;
- (void)startRequest:(id)arg0;
- (void)finishRequest:(id)arg0 response:(id)arg1;
- (BOOL)enqueueRetryRequest:(id)arg0;
- (id)networkImpl;
- (void)handleWaitingRequestsWithRequest:(id)arg0;
- (void)manager:(id)arg0 handleRetryRequest:(id)arg1;
- (id)requestQueue;
- (void)setRequestQueue:(id)arg0;
- (void).cxx_destruct;

@end
