//
//     Generated by private class-dump
//

@class UIView;

@interface AWEMusicDetailEmptyTipSectionController : AWEBaseDetailHeaderSectionController {
    UIView *_emptyTipView;
    double _emptySectionHeight;
    double _labelTopset;
}

@property (retain, nonatomic) UIView *emptyTipView;
@property (nonatomic) double emptySectionHeight;
@property (nonatomic) double labelTopset;

- (void)didBindSectionViewModel;
- (id)detailHeaderView;
- (void)updateHeaderViewWithModel:(id)arg0;
- (void)setEmptySectionHeight:(double)arg0;
- (void)setLabelTopset:(double)arg0;
- (id)emptyTipView;
- (double)emptySectionHeight;
- (double)labelTopset;
- (void)setEmptyTipView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)sectionHeight;

@end
