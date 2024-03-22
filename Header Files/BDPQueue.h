//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray;

@interface BDPQueue : NSObject {
    NSMutableArray *_enqueueStack;
    NSMutableArray *_dequeueStack;
}

@property (retain, nonatomic) NSMutableArray *enqueueStack;
@property (retain, nonatomic) NSMutableArray *dequeueStack;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id lastObject;

- (void)insertObjectToHead:(id)arg0;
- (void)insertObjectsToHead:(id)arg0;
- (id)enqueueStack;
- (id)dequeueStack;
- (void)insertObject:(id)arg0 toIndex:(unsigned long long)arg1;
- (void)emptyQueue;
- (void)setEnqueueStack:(id)arg0;
- (void)setDequeueStack:(id)arg0;
- (void)enqueueObject:(id)arg0;
- (void)enqueueObjectsFromArray:(id)arg0;
- (void).cxx_destruct;
- (void)removeObject:(id)arg0;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg0;
- (unsigned long long)count;
- (id)removeLastObject;
- (void)setObject:(id)arg0 atIndexedSubscript:(unsigned long long)arg1;
- (id)removeObjectAtIndex:(unsigned long long)arg0;
- (id)lastObject;
- (id)dequeueObject;
- (id)objectAtIndexedSubscript:(unsigned long long)arg0;
- (id)firstObject;
- (id)allObjects;

@end
