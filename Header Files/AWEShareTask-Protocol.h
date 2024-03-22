//
//     Generated by private class-dump
//

@class NSError, AWEShareContext;
@protocol AWEShareView, AWEShareChannel;

@protocol AWEShareTask <NSObject>

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long result;
@property (readonly, nonatomic) NSError *error;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, nonatomic) AWEShareContext *context;
@property (readonly, nonatomic) id<AWEShareChannel> channel;

- (void)addPreparedHandler:(id /* block */)arg0;
- (id)shareView;
- (void)prepareWithChannel:(id)arg0 inView:(id)arg1;
- (BOOL)enablePrepareWithChannel:(id)arg0 inView:(id)arg1;
- (id)channel;
- (void)execute;
- (unsigned long long)state;
- (unsigned long long)result;
- (void)addCompletedHandler:(id /* block */)arg0;
- (id)context;
- (id)error;

@end