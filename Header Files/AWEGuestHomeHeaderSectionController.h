//
//     Generated by private class-dump
//

@class AWEGuestHomeHeaderCell;

@interface AWEGuestHomeHeaderSectionController : AWEBaseListSectionController {
    AWEGuestHomeHeaderCell *_headerCell;
}

@property (weak, nonatomic) AWEGuestHomeHeaderCell *headerCell;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (void)sectionWillDisplayCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)networkingReachabilityDidChange:(id)arg0;
- (void)changeHeaderSectionAccessoriesIfNeeded;
- (void)handleClickNameEvent:(id)arg0 model:(id)arg1 userInfo:(id)arg2;
- (void)handleClickFollowNumEvent:(id)arg0 model:(id)arg1 userInfo:(id)arg2;
- (void)handleClickAvatarEvent:(id)arg0 model:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)dealloc;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (id)headerCell;
- (void)setHeaderCell:(id)arg0;

@end
