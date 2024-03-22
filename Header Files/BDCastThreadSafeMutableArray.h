//
//     Generated by private class-dump
//

@class NSLock, NSMutableArray;

@interface BDCastThreadSafeMutableArray : NSObject {
    NSLock *_lock;
    NSMutableArray *_array;
}

@property (readonly, nonatomic) id lastObject;
@property (readonly, nonatomic) id firstObject;

- (void)addObjectWithoutContain:(id)arg0;
- (void)performLockWithArray:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithArray:(id)arg0;
- (void)removeObject:(id)arg0;
- (BOOL)containsObject:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)addObjectsFromArray:(id)arg0;
- (void)replaceObjectsAtIndexes:(id)arg0 withObjects:(id)arg1;
- (unsigned long long)count;
- (void)addObject:(id)arg0;
- (id)initWithCapacity:(unsigned long long)arg0;
- (void)removeLastObject;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)arg0 objects:(id *)arg1 count:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg0;
- (id)lastObject;
- (unsigned long long)indexOfObject:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (id)firstObject;
- (id)objectAtIndex:(unsigned long long)arg0;
- (void)replaceObjectAtIndex:(unsigned long long)arg0 withObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (void)removeAllObjects;

@end