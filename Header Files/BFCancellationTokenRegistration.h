//
//     Generated by private class-dump
//

@class BFCancellationToken, NSObject;

@interface BFCancellationTokenRegistration : NSObject {
    BOOL _disposed;
    BFCancellationToken *_token;
    id /* block */ _cancellationObserverBlock;
    NSObject *_lock;
}

@property (weak, nonatomic) BFCancellationToken *token;
@property (copy, nonatomic) id /* block */ cancellationObserverBlock;
@property (retain, nonatomic) NSObject *lock;
@property (nonatomic) BOOL disposed;

+ (id)registrationWithToken:(id)arg0 delegate:(id /* block */)arg1;

- (void)throwIfDisposed;
- (void)setDisposed:(BOOL)arg0;
- (void)setCancellationObserverBlock:(id /* block */)arg0;
- (id /* block */)cancellationObserverBlock;
- (void)dispose;
- (id)init;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;
- (id)lock;
- (void)setLock:(id)arg0;
- (void)notifyDelegate;
- (BOOL)disposed;

@end