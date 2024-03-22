//
//     Generated by private class-dump
//

@class NSString, TabItem, IESLiveFeedDrawRoomItemModel;

@interface IESLiveFeedDrawerRoomSectionController : IESLiveFeedDrawerListItemSectionController <IGListDisplayDelegate, IGListDiffable> {
    TabItem *_tabConfig;
    IESLiveFeedDrawRoomItemModel *_item;
}

@property (retain, nonatomic) IESLiveFeedDrawRoomItemModel *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)cellForItemAtIndex:(long long)arg0;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)didUpdateToObject:(id)arg0;
- (void)setTabConfig:(id)arg0;
- (id)tabConfig;
- (void)refreshLayout:(BOOL)arg0;
- (void)trackCellWillShow;
- (id)item;
- (id)init;
- (void).cxx_destruct;
- (id)currentItem;
- (void)setItem:(id)arg0;
- (void)didSelectItemAtIndex:(long long)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
