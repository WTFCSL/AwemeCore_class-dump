//
//     Generated by private class-dump
//

@class UIColor, UICollectionViewFlowLayout;

@protocol ACCBeautyUIConfigProtocol <NSObject, ACCBeautyTopBarUIConfigProtocol>

@property (nonatomic) double topBarHeight;
@property (nonatomic) double contentCollectionViewTopOffset;
@property (nonatomic) double contentCollectionViewHeight;
@property (nonatomic) double panelContentHeight;
@property (retain, nonatomic) UIColor *effectCellSelectedBorderColor;
@property (readonly, nonatomic) UICollectionViewFlowLayout *effectItemsCollectionViewLayout;
@property (retain, nonatomic) Class effectItemCellClass;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic) BOOL enableBeautyCategorySwitch;
@property (nonatomic) unsigned long long headerStyle;

- (id)effectCellSelectedBorderColor;
- (double)panelContentHeight;
- (id)makeNewSlider;
- (double)contentCollectionViewTopOffset;
- (void)setContentCollectionViewTopOffset:(double)arg0;
- (double)contentCollectionViewHeight;
- (void)setContentCollectionViewHeight:(double)arg0;
- (void)setPanelContentHeight:(double)arg0;
- (void)setEffectCellSelectedBorderColor:(id)arg0;
- (id)effectItemsCollectionViewLayout;
- (Class)effectItemCellClass;
- (void)setEffectItemCellClass:(Class)arg0;
- (BOOL)enableBeautyCategorySwitch;
- (void)setEnableBeautyCategorySwitch:(BOOL)arg0;
- (double)topBarHeight;
- (void)setHeaderStyle:(unsigned long long)arg0;
- (unsigned long long)headerStyle;
- (unsigned long long)iconStyle;
- (void)setIconStyle:(unsigned long long)arg0;
- (void)setTopBarHeight:(double)arg0;

@end