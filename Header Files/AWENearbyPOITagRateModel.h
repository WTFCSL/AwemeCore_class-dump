//
//     Generated by private class-dump
//

@class NSString, AWEPOISimpleUserInfo;

@interface AWENearbyPOITagRateModel : AWEBaseApiModel {
    NSString *_rateId;
    NSString *_rateContent;
    AWEPOISimpleUserInfo *_userInfo;
}

@property (copy, nonatomic) NSString *rateId;
@property (copy, nonatomic) NSString *rateContent;
@property (retain, nonatomic) AWEPOISimpleUserInfo *userInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)rateId;
- (void)setRateId:(id)arg0;
- (id)rateContent;
- (void)setRateContent:(id)arg0;
- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (id)userInfo;

@end
