//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayLarkAuthResponse : CJPayBaseResponse {
    NSString *_retCode;
    NSString *_retMsg;
}

@property (copy, nonatomic) NSString *retCode;
@property (copy, nonatomic) NSString *retMsg;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)retCode;
- (void)setRetCode:(id)arg0;
- (id)retMsg;
- (void)setRetMsg:(id)arg0;
- (void).cxx_destruct;

@end