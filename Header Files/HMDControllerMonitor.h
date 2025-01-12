//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, HMDControllerMonitorDelegate;

@interface HMDControllerMonitor : NSObject {
    id<HMDControllerMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_pageQueue;
    NSMutableDictionary *_pageTimeDictionary;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pageQueue;
@property (retain, nonatomic) NSMutableDictionary *pageTimeDictionary;
@property (weak, nonatomic) id<HMDControllerMonitorDelegate> delegate;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (id)getControllerMonitorBlockList;
- (void)addControllerMonitorWithPageName:(id)arg0 methodSelector:(id)arg1 timeInterval:(double)arg2 isFirstOpen:(long long)arg3;
- (id)pageQueue;
- (void)setPageQueue:(id)arg0;
- (id)pageTimeDictionary;
- (void)setPageTimeDictionary:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
