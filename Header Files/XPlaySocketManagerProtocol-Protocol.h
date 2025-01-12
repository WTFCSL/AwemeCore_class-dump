//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol XPlaySocketManagerProtocol <NSObject>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *socketQueue;

- (id)cloudBusinessHandlerWithItem:(id)arg0;
- (void)removeHandler:(id)arg0 forItemId:(id)arg1 needForceDisconnect:(BOOL)arg2;
- (void)cancelCloudBusiness:(id)arg0;
- (void)addSocketHandler:(id)arg0 forItemId:(id)arg1;
- (void)removeHandler:(id)arg0 forItemId:(id)arg1;
- (void)removeAllHandler;
- (void)sendInstruction:(id)arg0;
- (void)connect;
- (void)disconnect;
- (long long)state;
- (BOOL)isConnected;
- (id)socketQueue;

@end
