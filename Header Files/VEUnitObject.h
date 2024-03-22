//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, VEReadWriteLock;

@interface VEUnitObject : IESMMObject <IVEUnitObject> {
    VEReadWriteLock *_rwLock;
    NSMutableArray *_downStreams;
}

@property (retain, nonatomic) VEReadWriteLock *rwLock;
@property (retain, nonatomic) NSMutableArray *downStreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)downStreamsCopy;
- (id)downStreams;
- (void)removeDownStream:(id)arg0;
- (void)removeAllDownStreams;
- (void)addDownStream:(id)arg0;
- (void)setDownStreams:(id)arg0;
- (void)setRwLock:(id)arg0;
- (id)rwLock;
- (void)addDownStream:(id)arg0 atIndex:(long long)arg1;
- (void)removeDownStreamAtIndexs:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end