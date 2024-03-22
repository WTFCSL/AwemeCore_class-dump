//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface LVDependencyInjector : NSObject {
    BOOL _ioOptimizeEnabled;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (nonatomic) BOOL ioOptimizeEnabled;

+ (void)setBundleDataSource:(Class)arg0;
+ (void)registerTemplateIOQueue:(id)arg0;
+ (id)templateIOQueue;
+ (id)shared;

- (void)setIoOptimizeEnabled:(BOOL)arg0;
- (BOOL)ioOptimizeEnabled;
- (void).cxx_destruct;
- (id)ioQueue;
- (void)setIoQueue:(id)arg0;

@end