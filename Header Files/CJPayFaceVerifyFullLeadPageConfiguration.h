//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayFaceVerifyFullLeadPageConfiguration : JSONModel {
    BOOL _isTopBrand;
    BOOL _skipLiveConfirm;
    NSString *_mainTitleDesc;
    NSString *_subheadDesc;
    NSString *_signedProtocolDesc;
    NSString *_unsignedProtocolDesc;
    NSString *_popupProtocolDesc;
    NSString *_agreementDesc;
    NSString *_agreementURL;
    NSString *_buttonDesc;
    NSString *_retentionDesc;
    NSString *_exitRetentionDesc;
    NSString *_isInvokeResult;
}

@property (nonatomic) BOOL isTopBrand;
@property (copy, nonatomic) NSString *mainTitleDesc;
@property (copy, nonatomic) NSString *subheadDesc;
@property (copy, nonatomic) NSString *signedProtocolDesc;
@property (copy, nonatomic) NSString *unsignedProtocolDesc;
@property (copy, nonatomic) NSString *popupProtocolDesc;
@property (copy, nonatomic) NSString *agreementDesc;
@property (copy, nonatomic) NSString *agreementURL;
@property (copy, nonatomic) NSString *buttonDesc;
@property (copy, nonatomic) NSString *retentionDesc;
@property (nonatomic) BOOL skipLiveConfirm;
@property (copy, nonatomic) NSString *exitRetentionDesc;
@property (copy, nonatomic) NSString *isInvokeResult;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)agreementURL;
- (void)setAgreementURL:(id)arg0;
- (id)buttonDesc;
- (void)setButtonDesc:(id)arg0;
- (BOOL)skipLiveConfirm;
- (BOOL)isTopBrand;
- (id)mainTitleDesc;
- (id)subheadDesc;
- (id)signedProtocolDesc;
- (id)unsignedProtocolDesc;
- (id)popupProtocolDesc;
- (void)setPopupProtocolDesc:(id)arg0;
- (id)agreementDesc;
- (void)setAgreementDesc:(id)arg0;
- (id)retentionDesc;
- (id)isInvokeResult;
- (void)setIsTopBrand:(BOOL)arg0;
- (void)setMainTitleDesc:(id)arg0;
- (void)setSubheadDesc:(id)arg0;
- (void)setSignedProtocolDesc:(id)arg0;
- (void)setUnsignedProtocolDesc:(id)arg0;
- (void)setRetentionDesc:(id)arg0;
- (void)setSkipLiveConfirm:(BOOL)arg0;
- (id)exitRetentionDesc;
- (void)setExitRetentionDesc:(id)arg0;
- (void)setIsInvokeResult:(id)arg0;
- (void).cxx_destruct;

@end
