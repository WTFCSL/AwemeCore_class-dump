//
//     Generated by private class-dump
//

@class IESECRelationSlideshowContainer, IESECGoodsPriceLabel;
@protocol IESECStoreNewFlexGoodsCellDelegate;

@protocol IESECShopGoodsCellProtocol <NSObject>

@property (weak, nonatomic) id<IESECStoreNewFlexGoodsCellDelegate> delegate;
@property (retain, nonatomic) IESECGoodsPriceLabel *cachedCalculateLabel;
@property (readonly, nonatomic) IESECRelationSlideshowContainer *slideshowContainer;

- (id)cardViewModel;
- (void)bindObject:(id)arg0;
- (id)cachedCalculateLabel;
- (void)setCachedCalculateLabel:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@optional

- (id)currentCoverImageView;
- (void)bindObject:(id)arg0 itemWidth:(double)arg1;
- (id)slideshowContainer;

@end
