//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIProfileCouponResponseModel : AWEBaseApiModel {
    long long _shouldShowToast;
    NSString *_toastText;
}

@property (nonatomic) long long shouldShowToast;
@property (copy, nonatomic) NSString *toastText;

+ (id)shouldShowToastJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)toastText;
- (void)setToastText:(id)arg0;
- (long long)shouldShowToast;
- (void)setShouldShowToast:(long long)arg0;
- (void).cxx_destruct;

@end
