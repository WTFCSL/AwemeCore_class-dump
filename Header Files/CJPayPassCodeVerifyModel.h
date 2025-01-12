//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, CJPayProcessInfo, CJPayUserInfo;

@interface CJPayPassCodeVerifyModel : NSObject {
    BOOL _isIndependentBindCard;
    BOOL _isQuickBindCard;
    BOOL _isUnionBindCard;
    NSString *_appId;
    NSString *_merchantId;
    NSString *_smchId;
    NSString *_mobile;
    id /* block */ _backBlock;
    NSString *_source;
    NSString *_orderNo;
    NSString *_title;
    NSString *_subTitle;
    CJPayUserInfo *_userInfo;
    CJPayProcessInfo *_processInfo;
    NSArray *_activityInfo;
    NSDictionary *_trackParams;
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *smchId;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) id /* block */ backBlock;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *orderNo;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (nonatomic) BOOL isIndependentBindCard;
@property (nonatomic) BOOL isQuickBindCard;
@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (copy, nonatomic) NSArray *activityInfo;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isUnionBindCard;

- (id)trackParams;
- (void)setActivityInfo:(id)arg0;
- (void)setTrackParams:(id)arg0;
- (void)setBackBlock:(id /* block */)arg0;
- (id /* block */)backBlock;
- (void)setOrderNo:(id)arg0;
- (id)orderNo;
- (BOOL)isQuickBindCard;
- (void)setIsQuickBindCard:(BOOL)arg0;
- (id)smchId;
- (void)setSmchId:(id)arg0;
- (BOOL)isUnionBindCard;
- (void)setIsUnionBindCard:(BOOL)arg0;
- (BOOL)isIndependentBindCard;
- (void)setIsIndependentBindCard:(BOOL)arg0;
- (void)setAppId:(id)arg0;
- (id)processInfo;
- (id)source;
- (void).cxx_destruct;
- (void)setProcessInfo:(id)arg0;
- (void)setUserInfo:(id)arg0;
- (id)title;
- (id)userInfo;
- (void)setSource:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (id)appId;
- (void)setTitle:(id)arg0;
- (id)merchantId;
- (void)setMerchantId:(id)arg0;
- (id)mobile;
- (void)setMobile:(id)arg0;
- (id)activityInfo;

@end
