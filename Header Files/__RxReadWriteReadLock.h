//
//     Generated by private class-dump
//

@interface __RxReadWriteReadLock : NSObject <RxLocking> {
    struct SharedPtr<Rx::ReadWriteLock, Rx::ESPMode::Fast> { struct ReadWriteLock *Object; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *ReferenceController; } SharedReferenceCount; } _rwl;
}

- (void)withCriticalScope:(id /* block */)arg0;
- (id)initWithImp:(struct SharedPtr<Rx::ReadWriteLock, Rx::ESPMode::Fast> { struct ReadWriteLock *x0; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *x0; } x1; })arg0;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (BOOL)tryLock;
- (id).cxx_construct;

@end
