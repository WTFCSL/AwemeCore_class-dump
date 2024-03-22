//
//     Generated by private class-dump
//

@class NSString, AWEVideoHallPopupInfoModel;

@interface AWEVideoHallSendCouponResponseModel : AWEBaseApiModel {
    BOOL _success;
    long long _couponShowType;
    long long _failCode;
    AWEVideoHallPopupInfoModel *_popupInfo;
    NSString *_toastText;
    NSString *_couponMetaNo;
}

@property (nonatomic) BOOL success;
@property (nonatomic) long long couponShowType;
@property (nonatomic) long long failCode;
@property (retain, nonatomic) AWEVideoHallPopupInfoModel *popupInfo;
@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSString *couponMetaNo;

+ (id)popupInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)toastText;
- (void)setToastText:(id)arg0;
- (id)popupInfo;
- (id)couponMetaNo;
- (void)setCouponMetaNo:(id)arg0;
- (long long)couponShowType;
- (void)setCouponShowType:(long long)arg0;
- (long long)failCode;
- (void)setFailCode:(long long)arg0;
- (void)setPopupInfo:(id)arg0;
- (void).cxx_destruct;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg0;

@end