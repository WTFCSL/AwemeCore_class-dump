//
//     Generated by private class-dump
//

@class IESECCommentImpressionSectionLayout, NSString, IESECCommentListKitTagsModel;

@interface IESECCommentImpressionSectionController : IESECCommentSectionController <IESECCommentImpressionSectionLayoutDelegate> {
    IESECCommentListKitTagsModel *_model;
    IESECCommentImpressionSectionLayout *_sectionLayout;
}

@property (retain, nonatomic) IESECCommentListKitTagsModel *model;
@property (retain, nonatomic) IESECCommentImpressionSectionLayout *sectionLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (id)sectionLayout;
- (void)setSectionLayout:(id)arg0;
- (BOOL)stickyIndex:(long long)arg0;
- (BOOL)shouldSticky;
- (long long)currentStickyRow;
- (double)currentSectionHeight;
- (long long)numberOfItems;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)didSelectItemAtIndex:(long long)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
