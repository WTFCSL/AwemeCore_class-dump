//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWETrackerDeallocCallbacksExecutor : NSObject {
    NSMutableArray *_callbacks;
}

@property (retain, nonatomic) NSMutableArray *callbacks;

+ (void)addTrackerDeallocCallbackTo:(id)arg0 with:(id /* block */)arg1;

- (id)callbacks;
- (void).cxx_destruct;
- (void)addCallback:(id /* block */)arg0;
- (void)dealloc;
- (void)setCallbacks:(id)arg0;

@end
