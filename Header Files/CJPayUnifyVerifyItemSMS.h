//
//     Generated by private class-dump
//

@class CJPayUnifyHalfSMSVerifyViewController, NSString, NSDictionary;

@interface CJPayUnifyVerifyItemSMS : CJPayUnifyBaseVerifyItem {
    CJPayUnifyHalfSMSVerifyViewController *_smsVerifyVC;
    NSString *_appID;
    NSString *_merchantID;
    NSString *_memberBizOrderNo;
    NSDictionary *_params;
}

@property (retain, nonatomic) CJPayUnifyHalfSMSVerifyViewController *smsVerifyVC;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *merchantID;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) NSDictionary *params;

- (id)memberBizOrderNo;
- (void)setMemberBizOrderNo:(id)arg0;
- (id)getTrackExtraParams;
- (void)startVerifyWithParams:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)p_startVerifySMS:(id)arg0;
- (void)setSmsVerifyVC:(id)arg0;
- (id)smsVerifyVC;
- (id)p_buttonInfoActions:(id)arg0;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)appID;
- (id)params;
- (id)merchantID;
- (void)setParams:(id)arg0;
- (void)setMerchantID:(id)arg0;

@end
