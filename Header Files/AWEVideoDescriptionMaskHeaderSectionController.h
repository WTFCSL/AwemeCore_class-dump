//
//     Generated by private class-dump
//

@class AWEVideoDescriptionMaskHeaderView;

@interface AWEVideoDescriptionMaskHeaderSectionController : AWEBaseListSectionController {
    AWEVideoDescriptionMaskHeaderView *_headerView;
}

@property (retain, nonatomic) AWEVideoDescriptionMaskHeaderView *headerView;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)viewControllerWillAppear:(BOOL)arg0 isBeingPresented:(BOOL)arg1 isMovingToParentViewController:(BOOL)arg2;
- (id)init;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)setHeaderView:(id)arg0;
- (id)headerView;

@end