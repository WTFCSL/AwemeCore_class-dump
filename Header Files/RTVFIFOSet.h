//
//     Generated by private class-dump
//

@class NSMutableOrderedSet;

@interface RTVFIFOSet : RTVFIFOBaseCollection {
    NSMutableOrderedSet *_orderedSet;
}

@property (readonly, nonatomic) NSMutableOrderedSet *orderedSet;

- (void)appendObjects:(id)arg0;
- (id)popObjectsWithCount:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)insertObject:(id)arg0 atIndex:(unsigned long long)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)arg0;
- (void)removeObjectAtIndex:(unsigned long long)arg0;
- (id)lastObject;
- (id)firstObject;
- (id)allObjects;
- (id)orderedSet;

@end