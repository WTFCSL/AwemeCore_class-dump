//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayIntergratedBaseResponse : JSONModel {
    NSString *_code;
    NSString *_errorType;
    NSString *_msg;
    NSString *_innerMsg;
    NSString *_typecnt;
    NSString *_errorData;
    NSString *_processStr;
    double _responseDuration;
}

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *errorType;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *innerMsg;
@property (copy, nonatomic) NSString *typecnt;
@property (copy, nonatomic) NSString *errorData;
@property (copy, nonatomic) NSString *processStr;
@property (nonatomic) double responseDuration;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;
+ (id)basicMapperWith:(id)arg0;

- (id)processStr;
- (void)setProcessStr:(id)arg0;
- (id)typecnt;
- (id)innerMsg;
- (void)setInnerMsg:(id)arg0;
- (void)setTypecnt:(id)arg0;
- (void)setCode:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (id)code;
- (void).cxx_destruct;
- (BOOL)isSuccess;
- (double)responseDuration;
- (id)errorType;
- (void)setResponseDuration:(double)arg0;
- (void)setErrorType:(id)arg0;
- (id)errorData;
- (void)setErrorData:(id)arg0;
- (id)msg;
- (void)setMsg:(id)arg0;

@end
