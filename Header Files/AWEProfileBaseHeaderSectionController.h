//
//     Generated by private class-dump
//

@class AWEProfileBaseHeaderCell;

@interface AWEProfileBaseHeaderSectionController : AWEBaseListSectionController {
    double _fitHeight;
    AWEProfileBaseHeaderCell *_currentCell;
}

@property (class, nonatomic) BOOL enableUserPageSplitScreen;

@property (nonatomic) double fitHeight;
@property (weak, nonatomic) AWEProfileBaseHeaderCell *currentCell;

+ (BOOL)enableUserPageSplitScreen;
+ (void)setEnableUserPageSplitScreen:(BOOL)arg0;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (void)didBindSectionViewModel;
- (void)setFitHeight:(double)arg0;
- (double)fitHeight;
- (void)reloadRightFixedAreaWithViewsArray:(id)arg0;
- (id)separatorColor;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)currentCell;
- (void)setCurrentCell:(id)arg0;

@end
