//
//     Generated by private class-dump
//

@class BUQueueManagerConfig;

@interface BUQueueManager : NSObject {
    BUQueueManagerConfig *_config;
}

@property (retain, nonatomic) BUQueueManagerConfig *config;

+ (id)sharedInstance;

- (void)updateConfig:(id)arg0;
- (id)serialQueueWithHierarchy:(long long)arg0 suffixLabel:(id)arg1 outQueueName:(id *)arg2;
- (id)_pbu_hierarchyStringWithHierarchy:(long long)arg0;
- (id)concurrentQueueWithHierarchy:(long long)arg0 suffixLabel:(id)arg1 outQueueName:(id *)arg2;
- (id)concurrentQueueWithHierarchy:(long long)arg0 suffixLabel:(id)arg1;
- (id)serialQueueWithHierarchy:(long long)arg0 suffixLabel:(id)arg1;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end
