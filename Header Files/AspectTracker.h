//
//     Generated by private class-dump
//

@class NSMutableSet;

@interface AspectTracker : NSObject {
    Class _trackedClass;
    NSMutableSet *_selectorNames;
    AspectTracker *_parentEntry;
}

@property (retain, nonatomic) Class trackedClass;
@property (retain, nonatomic) NSMutableSet *selectorNames;
@property (weak, nonatomic) AspectTracker *parentEntry;

- (Class)trackedClass;
- (id)selectorNames;
- (id)initWithTrackedClass:(Class)arg0 parent:(id)arg1;
- (void)setTrackedClass:(Class)arg0;
- (void)setSelectorNames:(id)arg0;
- (void).cxx_destruct;
- (id)description;
- (id)parentEntry;
- (void)setParentEntry:(id)arg0;

@end