//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface __RxDiffableDataSourceOrderedSetI : NSOrderedSet {
    struct __RxCowStorage { struct __CFSet *set; NSMutableArray *ordered; } _storage;
}

- (id)init;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)count;
- (unsigned long long)indexOfObject:(id)arg0;
- (id)initWithObjects:(const id *)arg0 count:(unsigned long long)arg1;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end