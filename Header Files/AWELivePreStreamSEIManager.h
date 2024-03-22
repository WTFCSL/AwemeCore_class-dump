//
//     Generated by private class-dump
//

@class NSString, NSHashTable;

@interface AWELivePreStreamSEIManager : NSObject <AWELivePreStreamSEIProvider> {
    NSHashTable *_subscribersForAll;
}

@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribersForAll;
- (void)setSubscribersForAll:(id)arg0;
- (void)addPreViewSubscrber:(id)arg0;
- (void)removePreViewSubscrber:(id)arg0;
- (void)dispatchSEI:(id)arg0;
- (void)enumerate:(id)arg0 sendSEI:(id)arg1;
- (void)onReceivePlayerSEI:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end