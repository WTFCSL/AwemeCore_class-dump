//
//     Generated by private class-dump
//

@class AWEFeedCollectionContainerContext;

@interface AWEVideoDescriptionMaskSingleFeedCoverGuideSectionController : AWEBaseListSectionController {
    AWEFeedCollectionContainerContext *_containerContext;
}

@property (retain, nonatomic) AWEFeedCollectionContainerContext *containerContext;

- (void)configCell:(id)arg0 index:(long long)arg1 model:(id)arg2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (id)init;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)containerContext;
- (void)setContainerContext:(id)arg0;

@end
