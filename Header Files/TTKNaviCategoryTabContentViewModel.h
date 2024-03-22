//
//     Generated by private class-dump
//

@class NSArray, NSString, AWENaviReplayBinding, NSMutableDictionary;

@interface TTKNaviCategoryTabContentViewModel : NSObject {
    NSMutableDictionary *_paletteCollectionViewOffsetCache;
    NSString *_categoryTabKey;
    NSString *_highTab;
    NSArray *_sectionViewModelArray;
    AWENaviReplayBinding *_didSelectInspirationBinding;
    AWENaviReplayBinding *_didSelectEffectBinding;
    AWENaviReplayBinding *_didSelectColorBinding;
}

@property (retain, nonatomic) NSArray *sectionViewModelArray;
@property (retain, nonatomic) AWENaviReplayBinding *didSelectEffectBinding;
@property (retain, nonatomic) AWENaviReplayBinding *didSelectInspirationBinding;
@property (retain, nonatomic) AWENaviReplayBinding *didSelectColorBinding;
@property (readonly, nonatomic) NSString *categoryTabKey;
@property (readonly, nonatomic) NSString *highTab;

- (id)highTab;
- (id)categoryTabKey;
- (id)initWithInputData:(id)arg0;
- (id)sectionViewModelArray;
- (double)heightForIndexPath:(id)arg0;
- (id)indexPathForEffectTableViewCellInSection:(long long)arg0;
- (id)indexPathForPaletteTableViewCellInSection:(long long)arg0;
- (id)indexPathForInspirationTableViewCellInSection:(long long)arg0;
- (id)indexPathForColorTabTableViewCellInSection:(long long)arg0;
- (id)indexPathForCollectionLookTableViewCellInSection:(long long)arg0;
- (void)cacheOffsetForPaletteCollectionViewInSection:(long long)arg0 offset:(struct CGPoint { double x0; double x1; })arg1;
- (struct CGPoint { double x0; double x1; })offsetForPaletteCollectionViewInSection:(long long)arg0;
- (void)p_setupSectionViewModelArrayWithInputData:(id)arg0;
- (double)heightForEmotion:(long long)arg0;
- (double)heightForCollectionWithItemCount:(long long)arg0 containsPalette:(BOOL)arg1;
- (double)heightForPalette:(long long)arg0 hasHeader:(BOOL)arg1;
- (id)p_generateSectionInputDataFromTabContentInputData:(id)arg0 category:(id)arg1;
- (void)setSectionViewModelArray:(id)arg0;
- (void)p_bindViewModel:(id)arg0;
- (id)didSelectEffectBinding;
- (id)didSelectInspirationBinding;
- (id)didSelectColorBinding;
- (id)categoryForSection:(long long)arg0;
- (id)indexPathForColorPickerTableViewCellInSection:(long long)arg0;
- (id)indexPathForEmotionTableViewCellInSection:(long long)arg0;
- (void)cacheOffsetForPaletteCollectionViewForIndexPath:(id)arg0 offset:(struct CGPoint { double x0; double x1; })arg1;
- (struct CGPoint { double x0; double x1; })offsetForPaletteCollectionViewWithIndexPath:(id)arg0;
- (void)setDidSelectInspirationBinding:(id)arg0;
- (void)setDidSelectEffectBinding:(id)arg0;
- (void)setDidSelectColorBinding:(id)arg0;
- (void).cxx_destruct;
- (long long)numberOfRowsInSection:(long long)arg0;
- (void)dealloc;
- (id)titleForSection:(long long)arg0;

@end
