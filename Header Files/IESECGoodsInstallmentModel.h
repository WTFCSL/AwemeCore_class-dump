//
//     Generated by private class-dump
//

@class NSString, IESECGoodsInstallmentDiscountInfoModel, IESECGoodsInstallmentTermInfoModel, NSNumber, IESECGoodsInstallmentOpenInfoModel;

@interface IESECGoodsInstallmentModel : IESECBaseApiModel {
    IESECGoodsInstallmentOpenInfoModel *_openInfoModel;
    IESECGoodsInstallmentDiscountInfoModel *_discountModel;
    IESECGoodsInstallmentTermInfoModel *_termModel;
    NSString *_cacheInstallmentTrackerListString;
    NSNumber *_cacheInstallmentTrackerRecommendTermCount;
}

@property (copy, nonatomic) NSString *cacheInstallmentTrackerListString;
@property (retain, nonatomic) NSNumber *cacheInstallmentTrackerRecommendTermCount;
@property (retain, nonatomic) IESECGoodsInstallmentOpenInfoModel *openInfoModel;
@property (retain, nonatomic) IESECGoodsInstallmentDiscountInfoModel *discountModel;
@property (retain, nonatomic) IESECGoodsInstallmentTermInfoModel *termModel;

+ (id)JSONKeyPathsByPropertyKey;

- (id)discountModel;
- (void)setDiscountModel:(id)arg0;
- (id)termModel;
- (id)installmentTrackerListString;
- (id)installmentVoucherListTrackerString;
- (id)installmentTrackerRecommendTermCount;
- (id)openInfoModel;
- (void)setOpenInfoModel:(id)arg0;
- (void)setTermModel:(id)arg0;
- (id)cacheInstallmentTrackerListString;
- (void)setCacheInstallmentTrackerListString:(id)arg0;
- (id)cacheInstallmentTrackerRecommendTermCount;
- (void)setCacheInstallmentTrackerRecommendTermCount:(id)arg0;
- (void).cxx_destruct;

@end