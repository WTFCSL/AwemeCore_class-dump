//
//     Generated by private class-dump
//

@class NSString, CJPaySubPayTypeInfoModel;

@interface CJPayZoneSplitInfoModel : JSONModel {
    BOOL _isShowCombineTitle;
    long long _zoneIndex;
    NSString *_zoneTitle;
    NSString *_combineZoneTitle;
    CJPaySubPayTypeInfoModel *_otherCardInfo;
}

@property (nonatomic) long long zoneIndex;
@property (copy, nonatomic) NSString *zoneTitle;
@property (copy, nonatomic) NSString *combineZoneTitle;
@property (retain, nonatomic) CJPaySubPayTypeInfoModel *otherCardInfo;
@property (nonatomic) BOOL isShowCombineTitle;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (void)setIsShowCombineTitle:(BOOL)arg0;
- (long long)zoneIndex;
- (BOOL)isShowCombineTitle;
- (id)combineZoneTitle;
- (id)zoneTitle;
- (void)setZoneIndex:(long long)arg0;
- (void)setZoneTitle:(id)arg0;
- (void)setCombineZoneTitle:(id)arg0;
- (id)otherCardInfo;
- (void)setOtherCardInfo:(id)arg0;
- (void).cxx_destruct;

@end
