//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface _BTDObserver : NSObject {
    BOOL _isObserving;
    int _context;
    id _observee;
    NSMutableArray *_keyPaths;
    id _task;
}

@property (readonly, nonatomic) id observee;
@property (readonly, nonatomic) NSMutableArray *keyPaths;
@property (readonly, nonatomic) id task;
@property (readonly, nonatomic) int context;

- (id)observee;
- (void)_stopObservingLocked;
- (id)initWithObservee:(id)arg0 keyPaths:(id)arg1 context:(int)arg2 task:(id)arg3;
- (void)stopObserving;
- (void)startObservingWithOptions:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)keyPaths;
- (int)context;
- (void)dealloc;
- (id)task;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (void)stopObservingKeyPath:(id)arg0;

@end
