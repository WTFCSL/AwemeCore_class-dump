//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEPayTransferAccountsNotifyResponseModel : AWEBaseApiModel {
    NSString *_bizCode;
    NSString *_bizMsg;
    NSNumber *_notifyStatus;
}

@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *bizMsg;
@property (retain, nonatomic) NSNumber *notifyStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (id)bizCode;
- (void)setBizCode:(id)arg0;
- (id)bizMsg;
- (void)setBizMsg:(id)arg0;
- (void)setNotifyStatus:(id)arg0;
- (void).cxx_destruct;
- (id)notifyStatus;

@end