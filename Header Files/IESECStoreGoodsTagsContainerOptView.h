//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESECGoodsActivityIconTagButton, NSMutableDictionary, NSMutableArray;

@interface IESECStoreGoodsTagsContainerOptView : UIView <IESECStoreGoodsTagsContainerProtocol> {
    NSMutableDictionary *_showedTagsMapM;
    BOOL _newLineDashPattern;
    unsigned long long _totalTagsLimit;
    unsigned long long _discountTagsLimit;
    double _tagSpacing;
    id /* block */ clickFanCouponBlock;
    NSDictionary *showedTagsMap;
    IESECGoodsActivityIconTagButton *_secKillBtn;
    NSMutableArray *_otherTags;
    long long _visibleTags;
}

@property (retain, nonatomic) IESECGoodsActivityIconTagButton *secKillBtn;
@property (retain, nonatomic) NSMutableArray *otherTags;
@property (nonatomic) long long visibleTags;
@property (readonly, copy, nonatomic) NSDictionary *showedTagsMap;
@property (nonatomic) unsigned long long totalTagsLimit;
@property (nonatomic) unsigned long long discountTagsLimit;
@property (nonatomic) double tagSpacing;
@property (nonatomic) BOOL newLineDashPattern;
@property (copy, nonatomic) id /* block */ clickFanCouponBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTagSpacing:(double)arg0;
- (double)tagSpacing;
- (void)setDiscountTags:(id)arg0 isSecKill:(BOOL)arg1 ritTags:(id)arg2;
- (id)showedTagsMap;
- (void)setTotalTagsLimit:(unsigned long long)arg0;
- (void)setDiscountTagsLimit:(unsigned long long)arg0;
- (void)setDiscountTags:(id)arg0 isSecKill:(BOOL)arg1 ritTags:(id)arg2 privilegeTags:(id)arg3;
- (void)setClickFanCouponBlock:(id /* block */)arg0;
- (void)setNewLineDashPattern:(BOOL)arg0;
- (void)preloadCreateTagsWithUpdate:(BOOL)arg0;
- (void)p_hideTagButtonIfNeeded;
- (void)p_setupTagButtonConstraints:(id)arg0;
- (id)otherTags;
- (id)secKillBtn;
- (unsigned long long)discountTagsLimit;
- (void)setPreviledgeTag:(id)arg0 curIdx:(long long)arg1;
- (void)setupDiscountTag:(id)arg0 curIdx:(long long)arg1;
- (unsigned long long)totalTagsLimit;
- (void)setupRitTag:(id)arg0 curIdx:(long long)arg1;
- (void)setVisibleTags:(long long)arg0;
- (void)p_updateTagButtonConstraints;
- (long long)visibleTags;
- (void)didTapFanCoupon;
- (id /* block */)clickFanCouponBlock;
- (BOOL)newLineDashPattern;
- (void)setSecKillBtn:(id)arg0;
- (void)setOtherTags:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;

@end