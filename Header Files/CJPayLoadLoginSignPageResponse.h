//
//     Generated by private class-dump
//

@class CJPayLoginSignInformation, NSDictionary;

@interface CJPayLoadLoginSignPageResponse : CJPayQueryLoginInfoResponse {
    CJPayLoginSignInformation *_signInformation;
    NSDictionary *_traceParams;
}

@property (retain, nonatomic) CJPayLoginSignInformation *signInformation;
@property (copy, nonatomic) NSDictionary *traceParams;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)traceParams;
- (void)setTraceParams:(id)arg0;
- (id)signInformation;
- (void)setSignInformation:(id)arg0;
- (void).cxx_destruct;
- (long long)resultStatus;

@end
