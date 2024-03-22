//
//     Generated by private class-dump
//

@class NSString, IESECGoodsFeedLargeCardViewModel;

@interface IESECGoodsFeedLargeCardSectionController : IGListSectionController <IGListSupplementaryViewSource, IGListWorkingRangeDelegate> {
    BOOL _fullMode;
    BOOL _isActivatedStyleChange;
    unsigned long long _listStyle;
    IESECGoodsFeedLargeCardViewModel *_viewModel;
    long long _resourceCardBeyondRecommendCount;
    long long _goodsCardCount;
}

@property (nonatomic) BOOL fullMode;
@property (nonatomic) BOOL isActivatedStyleChange;
@property (nonatomic) unsigned long long listStyle;
@property (readonly, nonatomic) IESECGoodsFeedLargeCardViewModel *viewModel;
@property (nonatomic) long long resourceCardBeyondRecommendCount;
@property (nonatomic) long long goodsCardCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)arg0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)arg0 atIndex:(long long)arg1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)arg0 atIndex:(long long)arg1;
- (void)listAdapter:(id)arg0 sectionControllerWillEnterWorkingRange:(id)arg1;
- (void)listAdapter:(id)arg0 sectionControllerDidExitWorkingRange:(id)arg1;
- (void)didUpdateToObject:(id)arg0;
- (id)supplementaryViewSource;
- (id)workingRangeDelegate;
- (long long)goodsCardCount;
- (id)_exposedMessageForParameters:(id)arg0;
- (id)_indemnificationMessageWithParams:(id)arg0;
- (BOOL)isActivatedStyleChange;
- (void)setFullMode:(BOOL)arg0;
- (void)setIsActivatedStyleChange:(BOOL)arg0;
- (long long)resourceCardBeyondRecommendCount;
- (void)setResourceCardBeyondRecommendCount:(long long)arg0;
- (void)setGoodsCardCount:(long long)arg0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)viewModel;
- (BOOL)fullMode;
- (unsigned long long)listStyle;
- (void)setListStyle:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end