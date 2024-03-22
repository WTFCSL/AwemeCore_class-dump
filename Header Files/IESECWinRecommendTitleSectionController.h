//
//     Generated by private class-dump
//

@class IESECWinContext, IESECWinRecommendTitleObject, IESECCollectionViewSectionLayout;

@interface IESECWinRecommendTitleSectionController : IESECWinListKitCellController {
    IESECWinContext *_context;
    IESECWinRecommendTitleObject *_object;
    IESECCollectionViewSectionLayout *_sectionLayout;
}

@property (retain, nonatomic) IESECCollectionViewSectionLayout *sectionLayout;

- (void)showTrack;
- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (id)sectionLayout;
- (void)setSectionLayout:(id)arg0;
- (long long)numberOfItems;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end