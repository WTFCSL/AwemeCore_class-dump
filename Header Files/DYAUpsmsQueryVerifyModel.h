//
//     Generated by private class-dump
//

@class NSString;

@interface DYAUpsmsQueryVerifyModel : DYAPassportResponseModel {
    NSString *_mobileLoginTicket;
    NSString *_resultAction;
}

@property (copy, nonatomic) NSString *mobileLoginTicket;
@property (copy, nonatomic) NSString *resultAction;

+ (id)JSONKeyPathsByPropertyKey;

- (id)resultAction;
- (id)mobileLoginTicket;
- (BOOL)isPollingSuccess;
- (void)setMobileLoginTicket:(id)arg0;
- (void)setResultAction:(id)arg0;
- (void).cxx_destruct;
- (BOOL)shouldRetry;

@end
