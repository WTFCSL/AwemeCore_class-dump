//
//     Generated by private class-dump
//

@class NSSet;

@interface RTVSetDifference : NSObject {
    NSSet *_insertions;
    NSSet *_removals;
}

@property (copy, nonatomic) NSSet *insertions;
@property (copy, nonatomic) NSSet *removals;

- (void)setRemovals:(id)arg0;
- (id)initWithInsertedObjects:(id)arg0 removedObjects:(id)arg1;
- (BOOL)hasChanges;
- (void).cxx_destruct;
- (id)insertions;
- (id)removals;
- (void)setInsertions:(id)arg0;

@end