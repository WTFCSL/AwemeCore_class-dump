//
//     Generated by private class-dump
//

@class NSMutableArray, AWEAwemeModel;

@interface AWEPlayInteractionSocialTagsViewModel : NSObject {
    double _leftContainerWidth;
    NSMutableArray *_cellWidthList;
    AWEAwemeModel *_awemeModel;
}

@property (retain, nonatomic) NSMutableArray *cellWidthList;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) double leftContainerWidth;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (double)leftContainerWidth;
- (void)setLeftContainerWidth:(double)arg0;
- (void)onSocialTagShow;
- (BOOL)updateTagConfigWithAwemeModel:(id)arg0;
- (id)iconImageURLWithIndex:(long long)arg0;
- (id)tagTextWithIndex:(long long)arg0;
- (BOOL)shouldShowArrowWithIndex:(long long)arg0;
- (id)schemaWithIndex:(long long)arg0;
- (void)onSocialTagClickWithIndex:(long long)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemWithIndex:(long long)arg0;
- (id)cellWidthList;
- (void)__configCellSize;
- (void)trackSocialTagShowWithIndex:(long long)arg0;
- (void)trackSocialTagClickWithIndex:(long long)arg0;
- (void)setCellWidthList:(id)arg0;
- (long long)numberOfItems;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end