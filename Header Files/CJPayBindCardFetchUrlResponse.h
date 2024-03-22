//
//     Generated by private class-dump
//

@class CJPaySignCardMap, NSString, CJPayBindPageInfoResponse, CJPayBizAuthInfoModel;

@interface CJPayBindCardFetchUrlResponse : CJPayBaseResponse {
    CJPaySignCardMap *_signCardMap;
    CJPayBizAuthInfoModel *_bizAuthInfoModel;
    CJPayBindPageInfoResponse *_bindPageInfoResponse;
    NSString *_endPageUrl;
}

@property (retain, nonatomic) CJPaySignCardMap *signCardMap;
@property (retain, nonatomic) CJPayBizAuthInfoModel *bizAuthInfoModel;
@property (retain, nonatomic) CJPayBindPageInfoResponse *bindPageInfoResponse;
@property (copy, nonatomic) NSString *endPageUrl;

+ (id)keyMapper;

- (BOOL)propertyIsOptional:(id)arg0;
- (id)bizAuthInfoModel;
- (id)bindPageInfoResponse;
- (id)signCardMap;
- (void)setSignCardMap:(id)arg0;
- (void)setBizAuthInfoModel:(id)arg0;
- (void)setBindPageInfoResponse:(id)arg0;
- (id)endPageUrl;
- (void)setEndPageUrl:(id)arg0;
- (void).cxx_destruct;

@end
