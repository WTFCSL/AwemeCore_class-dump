//
//     Generated by private class-dump
//

@class NSArray, __RxDiffableDataSourceOrderedSetI, __RxDataSourceSnapshotter;

@interface RxDiffingStagedChangeset : NSObject {
    __RxDiffableDataSourceOrderedSetI *_sectionIdentifiers;
    __RxDiffableDataSourceOrderedSetI *_itemIdentifiers;
    NSArray *_updateItems;
    __RxDataSourceSnapshotter *_snapshotter;
}

@property (readonly, nonatomic) __RxDiffableDataSourceOrderedSetI *sectionIdentifiers;
@property (readonly, nonatomic) __RxDiffableDataSourceOrderedSetI *itemIdentifiers;
@property (readonly, nonatomic) NSArray *updateItems;
@property (readonly, nonatomic) __RxDataSourceSnapshotter *snapshotter;

+ (id)changesetsWithBeforeDataSourceInfo:(id)arg0 afterDataSourceInfo:(id)arg1;

- (id)initWithSectionIdentifiers:(id)arg0 itemIdentifiers:(id)arg1 updateItems:(id)arg2 snapshotter:(id)arg3;
- (id)itemIdentifiers;
- (id)sectionIdentifiers;
- (void).cxx_destruct;
- (id)updateItems;
- (id)snapshotter;

@end
