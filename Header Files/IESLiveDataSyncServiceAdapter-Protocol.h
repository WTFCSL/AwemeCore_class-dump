//
//     Generated by private class-dump
//

@protocol IESLiveDataSyncServiceAdapter <NSObject>

@optional

- (void)addSubscriber:(id)arg0 withSyncData:(Class)arg1;
- (void)addSubscriber:(id)arg0 withSyncDatas:(id)arg1;
- (void)getValueWithSyncData:(Class)arg0 expectedMinVersion:(long long)arg1 completion:(id /* block */)arg2;

@end
