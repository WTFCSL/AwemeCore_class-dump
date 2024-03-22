//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface BDPThreadSafeArray : NSMutableArray {
    NSMutableArray *_arr;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct _opaque_pthread_mutexattr_t { long long __sig; char __opaque[8]; } _attr;
}

+ (void)initialize;

- (void)unlock;
- (id)initWithContentsOfFile:(id)arg0;
- (id)init;
- (void)sortUsingSelector:(SEL)arg0;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg0;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void).cxx_destruct;
- (id)arrayByAddingObject:(id)arg0;
- (void)exchangeObjectAtIndex:(unsigned long long)arg0 withObjectAtIndex:(unsigned long long)arg1;
- (id)descriptionWithLocale:(id)arg0;
- (id)descriptionWithLocale:(id)arg0 indent:(unsigned long long)arg1;
- (id)initWithArray:(id)arg0;
- (void)removeObjectsInArray:(id)arg0;
- (void)removeObject:(id)arg0;
- (unsigned long long)indexOfObject:(id)arg0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (BOOL)containsObject:(id)arg0;
- (void)makeObjectsPerformSelector:(SEL)arg0;
- (void)insertObject:(id)arg0 atIndex:(unsigned long long)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg0 usingComparator:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)insertObjects:(id)arg0 atIndexes:(id)arg1;
- (void)sortWithOptions:(unsigned long long)arg0 usingComparator:(id /* block */)arg1;
- (void)addObjectsFromArray:(id)arg0;
- (id)arrayByAddingObjectsFromArray:(id)arg0;
- (void)replaceObjectsAtIndexes:(id)arg0 withObjects:(id)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg0 passingTest:(id /* block */)arg1;
- (id)objectEnumerator;
- (id)indexesOfObjectsAtIndexes:(id)arg0 options:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg0;
- (void)sortUsingComparator:(id /* block */)arg0;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg0 passingTest:(id /* block */)arg1;
- (id)sortedArrayUsingFunction:(void /* function */ *)arg0 context:(void *)arg1;
- (unsigned long long)count;
- (void)makeObjectsPerformSelector:(SEL)arg0 withObject:(id)arg1;
- (void)addObject:(id)arg0;
- (id)initWithCapacity:(unsigned long long)arg0;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg0 usingBlock:(id /* block */)arg1;
- (void)setArray:(id)arg0;
- (void)lock;
- (void)removeLastObject;
- (void)setObject:(id)arg0 atIndexedSubscript:(unsigned long long)arg1;
- (id)sortedArrayUsingFunction:(void /* function */ *)arg0 context:(void *)arg1 hint:(id)arg2;
- (unsigned long long)hash;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)arg0 objects:(id *)arg1 count:(unsigned long long)arg2;
- (id)sortedArrayUsingComparator:(id /* block */)arg0;
- (id)sortedArrayUsingSelector:(SEL)arg0;
- (void)removeObjectAtIndex:(unsigned long long)arg0;
- (id)lastObject;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg0 options:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (unsigned long long)indexOfObject:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (BOOL)isEqualToArray:(id)arg0;
- (void)removeObjectsAtIndexes:(id)arg0;
- (id)description;
- (id)objectAtIndexedSubscript:(unsigned long long)arg0;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (id)firstObject;
- (id)initWithContentsOfURL:(id)arg0;
- (id)initWithObjects:(const id *)arg0 count:(unsigned long long)arg1;
- (void)getObjects:(id *)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)arg0;
- (void)replaceObjectAtIndex:(unsigned long long)arg0 withObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (void)enumerateObjectsAtIndexes:(id)arg0 options:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)objectsAtIndexes:(id)arg0;
- (void)removeAllObjects;
- (id)componentsJoinedByString:(id)arg0;
- (id)indexesOfObjectsPassingTest:(id /* block */)arg0;
- (unsigned long long)indexOfObjectPassingTest:(id /* block */)arg0;
- (id)reverseObjectEnumerator;
- (id)sortedArrayHint;
- (void)sortUsingFunction:(void /* function */ *)arg0 context:(void *)arg1;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 withObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2;
- (void)removeObjectIdenticalTo:(id)arg0;
- (void)removeObject:(id)arg0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 withObjectsFromArray:(id)arg1;
- (id)firstObjectCommonWithArray:(id)arg0;
- (unsigned long long)indexOfObject:(id)arg0 inSortedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;
- (void)removeObjectIdenticalTo:(id)arg0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;

@end
