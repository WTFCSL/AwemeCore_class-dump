//
//     Generated by private class-dump
//

@class NSString, CJPayUnionPaySignInfo;

@interface CJPayUnionBindCardCommonModel : JSONModel {
    BOOL _isShowMask;
    BOOL _isAliveCheck;
    NSString *_promotionTips;
    CJPayUnionPaySignInfo *_unionPaySignInfo;
    NSString *_unionIconUrl;
}

@property (copy, nonatomic) NSString *promotionTips;
@property (nonatomic) BOOL isShowMask;
@property (nonatomic) BOOL isAliveCheck;
@property (retain, nonatomic) CJPayUnionPaySignInfo *unionPaySignInfo;
@property (copy, nonatomic) NSString *unionIconUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (BOOL)isShowMask;
- (id)unionIconUrl;
- (id)unionPaySignInfo;
- (void)setIsShowMask:(BOOL)arg0;
- (BOOL)isAliveCheck;
- (id)promotionTips;
- (void)setPromotionTips:(id)arg0;
- (void)setIsAliveCheck:(BOOL)arg0;
- (void)setUnionPaySignInfo:(id)arg0;
- (void)setUnionIconUrl:(id)arg0;
- (void).cxx_destruct;

@end