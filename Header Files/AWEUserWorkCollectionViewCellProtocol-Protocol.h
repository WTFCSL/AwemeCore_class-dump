//
//     Generated by private class-dump
//

@protocol AWEUserWorkCollectionViewCellProtocol <AWEUserWorkCollectionViewComponentCellProtocol>

+ (id)identifier;

- (void)configWithModel:(id)arg0 isMine:(BOOL)arg1;
- (void)hideIconShowLayer;
- (void)hideIconHideLayer;
- (void)configWithType:(long long)arg0;
- (void)configWithType:(long long)arg0 scene:(long long)arg1;
- (void)configWithModel:(id)arg0 isMine:(BOOL)arg1 waterFallCellType:(long long)arg2;
- (void)hideIconHideLayerHideMask;
- (void)updateLikeViewWithModel:(id)arg0;
- (void)markCurrentVideo:(BOOL)arg0;
- (void)isCellChoose:(id)arg0 withManageMode:(BOOL)arg1;
- (void)setChooseButtonClickCallback:(id /* block */)arg0;
- (void)setPreferImageViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)showDateView:(BOOL)arg0;
- (id)iconView;
- (id)countLabel;

@optional

- (void)configWithModel:(id)arg0 isMine:(BOOL)arg1 disableDynamicCover:(BOOL)arg2;
- (void)highlightJustCollectedCell:(BOOL)arg0;
- (void)updateMarkViewTitle:(id)arg0;
- (void)updateJustCollectedLabel:(BOOL)arg0;

@end