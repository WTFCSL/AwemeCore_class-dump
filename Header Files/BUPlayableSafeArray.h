//
//     Generated by private class-dump
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BUPlayableSafeArray : NSMutableArray {
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableArray *_array;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableArray *array;

- (id)syncQueue;
- (id)initCommon;
- (id)array;
- (id)initWithContentsOfFile:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObject:(id)arg0;
- (BOOL)containsObject:(id)arg0;
- (void)insertObject:(id)arg0 atIndex:(unsigned long long)arg1;
- (id)objectEnumerator;
- (void)setSyncQueue:(id)arg0;
- (unsigned long long)count;
- (void)addObject:(id)arg0;
- (id)initWithCapacity:(unsigned long long)arg0;
- (void)setArray:(id)arg0;
- (void)removeLastObject;
- (id)initWithCoder:(id)arg0;
- (void)removeObjectAtIndex:(unsigned long long)arg0;
- (unsigned long long)indexOfObject:(id)arg0;
- (id)initWithObjects:(const id *)arg0 count:(unsigned long long)arg1;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)arg0;
- (void)replaceObjectAtIndex:(unsigned long long)arg0 withObject:(id)arg1;
- (void)removeAllObjects;

@end
