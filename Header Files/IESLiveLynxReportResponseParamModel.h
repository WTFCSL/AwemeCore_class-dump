//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESLiveLynxReportResponseParamModel : IESLiveBridgeModel {
    NSString *_requestName;
    NSNumber *_responseResult;
}

@property (copy, nonatomic) NSString *requestName;
@property (retain, nonatomic) NSNumber *responseResult;

+ (id)modelCustomPropertyMapper;

- (void)setRequestName:(id)arg0;
- (id)responseResult;
- (void)setResponseResult:(id)arg0;
- (void).cxx_destruct;
- (id)requestName;

@end
