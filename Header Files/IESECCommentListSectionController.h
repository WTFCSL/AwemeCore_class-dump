//
//     Generated by private class-dump
//

@class IESECCommentListSectionLayout, IESECCommentListKitCommentsModel;

@interface IESECCommentListSectionController : IESECCommentSectionController {
    IESECCommentListKitCommentsModel *_model;
    IESECCommentListSectionLayout *_sectionLayout;
}

@property (retain, nonatomic) IESECCommentListKitCommentsModel *model;
@property (retain, nonatomic) IESECCommentListSectionLayout *sectionLayout;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (id)sectionLayout;
- (void)setSectionLayout:(id)arg0;
- (void)showCommentGuestWindowViewWithDetailModel:(id)arg0;
- (long long)numberOfItems;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
