//
//     Generated by private class-dump
//

@class NSString;

@interface TTAAccountVerfiyAccountRespDataModel : TTADataRespModel {
    NSString *_error_description;
    long long _error_code;
    NSString *_ticket;
}

@property (copy, nonatomic) NSString *error_description;
@property (nonatomic) long long error_code;
@property (copy, nonatomic) NSString *ticket;

- (id)error_description;
- (void)setError_description:(id)arg0;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:(id)arg0;
- (long long)error_code;
- (void)setError_code:(long long)arg0;

@end
