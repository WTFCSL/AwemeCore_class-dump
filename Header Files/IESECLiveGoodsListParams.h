//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface IESECLiveGoodsListParams : NSObject {
    NSDictionary *_rawParams;
    NSDictionary *_params;
    NSString *_productID;
    NSString *_promotionID;
    long long _autoApplyCouponType;
    NSString *_couponID;
    NSString *_relatedInfo;
    NSString *_couponCategory;
    NSString *_enterFrom;
    NSString *_previewCouponID;
    NSString *_previewExtraInfo;
    NSString *_liveListChannel;
    NSString *_linkMicCardExplainStatus;
}

@property (readonly, copy, nonatomic) NSDictionary *rawParams;
@property (readonly, copy, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) NSString *productID;
@property (readonly, nonatomic) NSString *promotionID;
@property (readonly, nonatomic) long long autoApplyCouponType;
@property (readonly, copy, nonatomic) NSString *couponID;
@property (readonly, copy, nonatomic) NSString *relatedInfo;
@property (readonly, copy, nonatomic) NSString *couponCategory;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *previewCouponID;
@property (readonly, copy, nonatomic) NSString *previewExtraInfo;
@property (readonly, copy, nonatomic) NSString *liveListChannel;
@property (readonly, copy, nonatomic) NSString *linkMicCardExplainStatus;
@property (readonly, nonatomic) BOOL fromShopCart;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)promotionID;
- (id)rawParams;
- (void)setupWithParams:(id)arg0;
- (id)couponID;
- (id)relatedInfo;
- (long long)autoApplyCouponType;
- (id)previewCouponID;
- (BOOL)fromShopCart;
- (id)couponCategory;
- (id)previewExtraInfo;
- (id)liveListChannel;
- (id)linkMicCardExplainStatus;
- (id)productID;
- (void).cxx_destruct;
- (id)params;
- (id)initWithParams:(id)arg0;

@end
