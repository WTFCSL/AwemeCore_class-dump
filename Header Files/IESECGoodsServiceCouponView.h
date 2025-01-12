//
//     Generated by private class-dump
//

@class NSArray, IESECTagsContainerView, UIImageView, UILabel;

@interface IESECGoodsServiceCouponView : UIView {
    BOOL _isHalfMode;
    BOOL _shouldUseHalfCouponBGImage;
    BOOL _isGoodsFeed;
    NSArray *_couponNameList;
    double _contentSizeWidth;
    IESECTagsContainerView *_tagStackContainerView;
    UILabel *_headlabel;
    UIImageView *_arrowIconImageView;
}

@property (copy, nonatomic) NSArray *couponNameList;
@property (nonatomic) double contentSizeWidth;
@property (nonatomic) BOOL isHalfMode;
@property (nonatomic) BOOL shouldUseHalfCouponBGImage;
@property (retain, nonatomic) IESECTagsContainerView *tagStackContainerView;
@property (retain, nonatomic) UILabel *headlabel;
@property (retain, nonatomic) UIImageView *arrowIconImageView;
@property (nonatomic) BOOL isGoodsFeed;

- (id)arrowIconImageView;
- (void)setArrowIconImageView:(id)arg0;
- (void)setIsHalfMode:(BOOL)arg0;
- (void)setContentSizeWidth:(double)arg0;
- (void)setShouldUseHalfCouponBGImage:(BOOL)arg0;
- (void)setIsGoodsFeed:(BOOL)arg0;
- (void)setCouponNameList:(id)arg0;
- (void)p_setupCurrentCouponView;
- (id)headlabel;
- (id)tagStackContainerView;
- (BOOL)isGoodsFeed;
- (id)couponNameList;
- (double)contentSizeWidth;
- (BOOL)isHalfMode;
- (BOOL)shouldUseHalfCouponBGImage;
- (void)setTagStackContainerView:(id)arg0;
- (void)setHeadlabel:(id)arg0;
- (void).cxx_destruct;

@end
