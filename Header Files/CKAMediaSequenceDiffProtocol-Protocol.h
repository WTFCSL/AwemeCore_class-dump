//
//     Generated by private class-dump
//

@class NSIndexSet;

@protocol CKAMediaSequenceDiffProtocol

@property (nonatomic, readonly) NSIndexSet *removedIndexes;
@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) NSIndexSet *changedIndexes;

- (void)iterateMoves:(id /* block */)arg0;
- (id)changedIndexes;
- (id)removedIndexes;
- (id)insertedIndexes;

@end
