//
//     Generated by private class-dump
//

@class CJPayMemCreateBizOrderResponse, CJPayBizAuthInfoModel, CJPayUserInfo;

@interface CJPayBizAuthVerifyModel : CJPayBindCardPageBaseModel {
    CJPayUserInfo *_userInfo;
    CJPayMemCreateBizOrderResponse *_memCreatOrderResponse;
    CJPayBizAuthInfoModel *_bizAuthInfo;
    unsigned long long _bizAuthType;
}

@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (retain, nonatomic) CJPayMemCreateBizOrderResponse *memCreatOrderResponse;
@property (retain, nonatomic) CJPayBizAuthInfoModel *bizAuthInfo;
@property (nonatomic) unsigned long long bizAuthType;

+ (BOOL)propertyIsOptional:(id)arg0;
+ (id)keyMapperDict;

- (id)memCreatOrderResponse;
- (void)setMemCreatOrderResponse:(id)arg0;
- (id)bizAuthInfo;
- (void)setBizAuthInfo:(id)arg0;
- (unsigned long long)bizAuthType;
- (void)setBizAuthType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (id)userInfo;

@end
