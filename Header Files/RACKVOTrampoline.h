//
//     Generated by private class-dump
//

@class NSString, NSObject;

@interface RACKVOTrampoline : RACDisposable {
    NSString *_keyPath;
    id /* block */ _block;
    NSObject *_unsafeTarget;
    NSObject *_weakTarget;
    NSObject *_observer;
}

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) NSObject *unsafeTarget;
@property (readonly, weak, nonatomic) NSObject *weakTarget;
@property (readonly, weak, nonatomic) NSObject *observer;

- (void)live_takeover_dispose;
- (id)unsafeTarget;
- (id)initWithTarget:(id)arg0 observer:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)keyPath;
- (void)dispose;
- (id)observer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id /* block */)block;
- (id)weakTarget;

@end
