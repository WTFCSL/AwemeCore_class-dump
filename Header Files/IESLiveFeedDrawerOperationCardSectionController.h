//
//     Generated by private class-dump
//

@class IESLiveFeedDrawerOperationCardItemModel, UICollectionViewCell, NSString;
@protocol IESLiveFeedDrawerOperationCellProtocol;

@interface IESLiveFeedDrawerOperationCardSectionController : IESLiveFeedDrawerListItemSectionController <IGListDisplayDelegate> {
    IESLiveFeedDrawerOperationCardItemModel *_item;
    UICollectionViewCell<IESLiveFeedDrawerOperationCellProtocol> *_cell;
}

@property (retain, nonatomic) IESLiveFeedDrawerOperationCardItemModel *item;
@property (retain, nonatomic) UICollectionViewCell<IESLiveFeedDrawerOperationCellProtocol> *cell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)didUpdateToObject:(id)arg0;
- (void)trackCellWillShow;
- (id)item;
- (id)init;
- (void).cxx_destruct;
- (void)setItem:(id)arg0;
- (id)cell;
- (void)setCell:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
