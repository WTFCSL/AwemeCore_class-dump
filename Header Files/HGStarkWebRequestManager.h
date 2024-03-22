//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSRecursiveLock;

@interface HGStarkWebRequestManager : NSObject {
    long long _lastestTaskID;
    NSRecursiveLock *_taskLock;
    NSMutableDictionary *_taskIdMapTask;
}

@property (nonatomic) long long lastestTaskID;
@property (retain, nonatomic) NSMutableDictionary *taskIdMapTask;

+ (id)shareManager;

- (void)setTaskIdMapTask:(id)arg0;
- (void)setLastestTaskID:(long long)arg0;
- (id)taskIdMapTask;
- (long long)lastestTaskID;
- (void)request:(id)arg0 completionHandler:(id /* block */)arg1 headers:(id)arg2;
- (void).cxx_destruct;

@end
