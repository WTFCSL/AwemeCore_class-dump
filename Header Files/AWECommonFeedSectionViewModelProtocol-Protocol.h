//
//     Generated by private class-dump
//

@class AWECommonFeedCardModel, NSArray;

@protocol AWECommonFeedSectionViewModelProtocol <NSObject>

@property (nonatomic, retain) AWECommonFeedCardModel *cardModel;
@property (nonatomic, copy) NSArray *cellModelList;
@property (nonatomic, copy) NSArray *cellClassList;
@property (nonatomic, copy) id /* block */ headerClassBlock;
@property (nonatomic, copy) id /* block */ footerClassBlock;
@property (nonatomic, copy) id /* block */ headerHeightBlock;
@property (nonatomic, copy) id /* block */ footerHeightBlock;
@property (nonatomic, copy) id /* block */ configHeaderViewBlock;
@property (nonatomic, copy) id /* block */ configFooterViewBlock;
@property (nonatomic, copy) id /* block */ supplementaryViewWillDisplayBlock;
@property (nonatomic, copy) id /* block */ supplementaryViewDidEndDisplayingBlock;

- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (id)cellModelList;
- (void)setCellModelList:(id)arg0;
- (id)cellClassList;
- (void)setCellClassList:(id)arg0;
- (id /* block */)headerClassBlock;
- (void)setHeaderClassBlock:(id /* block */)arg0;
- (id /* block */)footerClassBlock;
- (void)setFooterClassBlock:(id /* block */)arg0;
- (id /* block */)headerHeightBlock;
- (void)setHeaderHeightBlock:(id /* block */)arg0;
- (id /* block */)footerHeightBlock;
- (void)setFooterHeightBlock:(id /* block */)arg0;
- (id /* block */)configHeaderViewBlock;
- (void)setConfigHeaderViewBlock:(id /* block */)arg0;
- (id /* block */)configFooterViewBlock;
- (void)setConfigFooterViewBlock:(id /* block */)arg0;
- (id /* block */)supplementaryViewWillDisplayBlock;
- (void)setSupplementaryViewWillDisplayBlock:(id /* block */)arg0;
- (id /* block */)supplementaryViewDidEndDisplayingBlock;
- (void)setSupplementaryViewDidEndDisplayingBlock:(id /* block */)arg0;
- (id)initWithCardModel:(id)arg0;
- (void)configCellModels;

@end