//
//     Generated by private class-dump
//

@class NSArray, NSString, CJPayUnionCopywritingInfo;
@protocol CJPayUnionCardInfoModel;

@interface CJPayUnionBindCardListResponse : CJPayBaseResponse {
    NSArray<CJPayUnionCardInfoModel> *_cardList;
    NSString *_hasBindableCard;
    CJPayUnionCopywritingInfo *_unionCopywritingInfo;
}

@property (copy, nonatomic) NSArray<CJPayUnionCardInfoModel> *cardList;
@property (copy, nonatomic) NSString *hasBindableCard;
@property (retain, nonatomic) CJPayUnionCopywritingInfo *unionCopywritingInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)cardList;
- (void)setCardList:(id)arg0;
- (id)hasBindableCard;
- (void)setHasBindableCard:(id)arg0;
- (id)unionCopywritingInfo;
- (void)setUnionCopywritingInfo:(id)arg0;
- (void).cxx_destruct;

@end
