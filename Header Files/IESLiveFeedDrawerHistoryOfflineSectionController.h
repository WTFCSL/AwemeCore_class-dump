//
//     Generated by private class-dump
//

@class NSString, IESLiveFeedDrawerHistoryOfflineModel, IESLiveFeedDrawerViewControllerContext;

@interface IESLiveFeedDrawerHistoryOfflineSectionController : IGListSectionController <IGListDisplayDelegate, IESLiveFeedDrawerHistorySectionControllerProtocol> {
    id /* block */ _deleteHistoryBlock;
    IESLiveFeedDrawerViewControllerContext *_context;
    IESLiveFeedDrawerHistoryOfflineModel *_item;
}

@property (retain, nonatomic) IESLiveFeedDrawerHistoryOfflineModel *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;
@property (copy, nonatomic) id /* block */ deleteHistoryBlock;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)didUpdateToObject:(id)arg0;
- (id)commonTrackParams;
- (void)trackCellClick;
- (void)trackCellWillShow;
- (id /* block */)deleteHistoryBlock;
- (void)trackCellDelete;
- (void)setDeleteHistoryBlock:(id /* block */)arg0;
- (id)item;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)setItem:(id)arg0;
- (void)didSelectItemAtIndex:(long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
