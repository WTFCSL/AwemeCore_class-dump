//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, NSString, ARTBusiness;

@interface ARTBusinessOutput : NSObject {
    int _result;
    float _confidence;
    int _errorCode;
    ARTBusiness *_session;
    id _data;
    NSDictionary *_extraInfo;
    NSString *_errorMsg;
    NSMutableDictionary *_innerOutExtraInfo;
}

@property (weak, nonatomic) ARTBusiness *session;
@property (retain, nonatomic) NSMutableDictionary *innerOutExtraInfo;
@property (nonatomic) int result;
@property (nonatomic) float confidence;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) int errorCode;
@property (copy, nonatomic) NSString *errorMsg;

- (void)setExtraInfo:(id)arg0;
- (void)setErrorMsg:(id)arg0;
- (id)errorMsg;
- (id)innerOutExtraInfo;
- (void)setInnerOutExtraInfo:(id)arg0;
- (float)confidence;
- (void)setConfidence:(float)arg0;
- (id)data;
- (void)setResult:(int)arg0;
- (void).cxx_destruct;
- (void)setSession:(id)arg0;
- (id)session;
- (void)setData:(id)arg0;
- (int)result;
- (void)setErrorCode:(int)arg0;
- (int)errorCode;
- (id)initWithBusiness:(id)arg0;
- (id)extraInfo;

@end