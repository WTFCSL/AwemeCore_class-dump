//
//     Generated by private class-dump
//

@class NSString, __RxDataSourceSnapshotter;

@interface __RxDataSourceSnapshot : NSObject <__RxDataSourceSnapshot> {
    __RxDataSourceSnapshotter *_snapshotter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)globalIndexForSection:(long long)arg0 item:(long long)arg1;
- (long long)indexPathItemForGlobalIndex:(long long)arg0 section:(long long *)arg1;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)arg0;
- (BOOL)_decrementSectionCount:(long long)arg0 byCount:(long long)arg1;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForSection:(long long)arg0;
- (long long)numberOfSections;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)_deleteSection:(long long)arg0;
- (void)_recomputeRangeLocations;
- (id)indexPathForGlobalIndex:(long long)arg0;
- (BOOL)_insertSection:(long long)arg0 withInitialCount:(long long)arg1;
- (BOOL)_incrementSectionCount:(long long)arg0;
- (BOOL)_decrementSectionCount:(long long)arg0;
- (long long)numberOfItemsBeforeSection:(long long)arg0;
- (BOOL)_incrementSectionCount:(long long)arg0 byCount:(long long)arg1;
- (long long)sectionForGlobalIndex:(long long)arg0;
- (id)initWithDataSourceSnapshotter:(id)arg0;

@end