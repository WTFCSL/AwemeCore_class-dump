//
//     Generated by private class-dump
//

@class IESECCommentTagSectionLayout, IESECCommentListKitStatsModel;

@interface IESECCommentTagSectionController : IESECCommentSectionController {
    IESECCommentListKitStatsModel *_model;
    IESECCommentTagSectionLayout *_sectionLayout;
}

@property (retain, nonatomic) IESECCommentListKitStatsModel *model;
@property (retain, nonatomic) IESECCommentTagSectionLayout *sectionLayout;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (id)sectionLayout;
- (void)setSectionLayout:(id)arg0;
- (void)setupAllCommentSectionSelectedTagID:(id)arg0 isImpressionTag:(BOOL)arg1;
- (void)setupAllCommentSectionSelectedTagID:(id)arg0;
- (long long)numberOfItems;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
