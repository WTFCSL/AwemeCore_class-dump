//
//     Generated by private class-dump
//

@class NSString, BDUGPushNotice;

@interface BDUGUploadSwitchRequestParam : BDUGBaseRequestParam {
    long long _uploadSwitchType;
    NSString *_notice;
    BDUGPushNotice *_subdividedNotice;
    NSString *_outAppChangeStatus;
    NSString *_inAppChangeStatus;
}

@property (nonatomic) long long uploadSwitchType;
@property (copy, nonatomic) NSString *notice;
@property (retain, nonatomic) BDUGPushNotice *subdividedNotice;
@property (copy, nonatomic) NSString *outAppChangeStatus;
@property (copy, nonatomic) NSString *inAppChangeStatus;

- (long long)uploadSwitchType;
- (void)setUploadSwitchType:(long long)arg0;
- (id)subdividedNotice;
- (void)setSubdividedNotice:(id)arg0;
- (id)outAppChangeStatus;
- (void)setOutAppChangeStatus:(id)arg0;
- (id)inAppChangeStatus;
- (void)setInAppChangeStatus:(id)arg0;
- (void).cxx_destruct;
- (id)notice;
- (void)setNotice:(id)arg0;

@end
