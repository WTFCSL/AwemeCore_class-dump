//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol OS_dispatch_queue, HMDTTMonitorInterceptor;

@interface HMDTTMonitorBlacklistInterceptor : NSObject <HMDTTMonitorInterceptor> {
    id<HMDTTMonitorInterceptor> _nextInterceptor;
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) id<HMDTTMonitorInterceptor> nextInterceptor;
@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceTypeBlacklist;
+ (id)logTypeBlacklist;

- (void)configDidUpdate:(id)arg0;
- (id)nextInterceptor;
- (void)setNextInterceptor:(id)arg0;
- (void)updateBlacklist;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;
- (id)initWithQueue:(id)arg0;
- (id)appID;
- (void)dealloc;
- (void)handleRequest:(id)arg0;

@end
