//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayNewIAPBaseResponseModel : NSObject {
    NSString *_code;
    NSString *_msg;
    NSString *_status;
}

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *status;

- (void)setCode:(id)arg0;
- (id)code;
- (void).cxx_destruct;
- (BOOL)isSuccess;
- (id)status;
- (void)setStatus:(id)arg0;
- (id)msg;
- (void)setMsg:(id)arg0;

@end