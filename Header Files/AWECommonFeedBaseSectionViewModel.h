//
//     Generated by private class-dump
//

@class AWECommonFeedCardModel, NSArray, NSString;

@interface AWECommonFeedBaseSectionViewModel : AWEBaseListSectionViewModel <AWECommonFeedSectionViewModelProtocol> {
    NSArray *cellClassList;
    NSArray *cellModelList;
    AWECommonFeedCardModel *cardModel;
    id /* block */ headerClassBlock;
    id /* block */ footerClassBlock;
    id /* block */ headerHeightBlock;
    id /* block */ footerHeightBlock;
    id /* block */ configHeaderViewBlock;
    id /* block */ configFooterViewBlock;
    id /* block */ supplementaryViewWillDisplayBlock;
    id /* block */ supplementaryViewDidEndDisplayingBlock;
}

@property (retain, nonatomic) AWECommonFeedCardModel *cardModel;
@property (retain, nonatomic) NSArray *cellModelList;
@property (retain, nonatomic) NSArray *cellClassList;
@property (copy, nonatomic) id /* block */ headerClassBlock;
@property (copy, nonatomic) id /* block */ footerClassBlock;
@property (copy, nonatomic) id /* block */ headerHeightBlock;
@property (copy, nonatomic) id /* block */ footerHeightBlock;
@property (copy, nonatomic) id /* block */ configHeaderViewBlock;
@property (copy, nonatomic) id /* block */ configFooterViewBlock;
@property (copy, nonatomic) id /* block */ supplementaryViewWillDisplayBlock;
@property (copy, nonatomic) id /* block */ supplementaryViewDidEndDisplayingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void).cxx_destruct;

@end
