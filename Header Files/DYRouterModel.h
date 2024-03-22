//
//     Generated by private class-dump
//

@class NSString, DYASecurityTicketModel, NSDictionary, AWEUserLoginMiddleParamsModel, DYPhoneNumberModel;

@interface DYRouterModel : NSObject {
    BOOL _shouldHideFAQButton;
    BOOL _isEntry;
    BOOL _shouldHideNav;
    BOOL _isLarkLogin;
    BOOL _isSafeMobile;
    BOOL _isUnBinding;
    BOOL _shouldJumpBindConflict;
    BOOL _isFromSMSToPassword;
    unsigned long long _backStrategy;
    DYPhoneNumberModel *_phoneContext;
    DYPhoneNumberModel *_oldPhoneContext;
    NSString *_emailContext;
    NSString *_passwordContext;
    unsigned long long _platformContext;
    unsigned long long _bindStrategy;
    DYASecurityTicketModel *_ticketModel;
    NSDictionary *_extraDic;
    id /* block */ _callBack;
    NSString *_enterFrom;
    NSDictionary *_authInfo;
    unsigned long long _pageUseScene;
    unsigned long long _accountType;
    NSString *_commercialAccountType;
    id /* block */ _unBindCompletion;
    AWEUserLoginMiddleParamsModel *_middleParamsModel;
}

@property (nonatomic) unsigned long long backStrategy;
@property (retain, nonatomic) DYPhoneNumberModel *phoneContext;
@property (retain, nonatomic) DYPhoneNumberModel *oldPhoneContext;
@property (retain, nonatomic) NSString *emailContext;
@property (retain, nonatomic) NSString *passwordContext;
@property (nonatomic) unsigned long long platformContext;
@property (nonatomic) unsigned long long bindStrategy;
@property (retain, nonatomic) DYASecurityTicketModel *ticketModel;
@property (nonatomic) BOOL shouldHideFAQButton;
@property (retain, nonatomic) NSDictionary *extraDic;
@property (nonatomic) BOOL isEntry;
@property (nonatomic) BOOL shouldHideNav;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *authInfo;
@property (nonatomic) BOOL isSafeMobile;
@property (nonatomic) unsigned long long pageUseScene;
@property (nonatomic) unsigned long long accountType;
@property (retain, nonatomic) AWEUserLoginMiddleParamsModel *middleParamsModel;
@property (nonatomic) BOOL isLarkLogin;
@property (copy, nonatomic) id /* block */ callBack;
@property (copy, nonatomic) NSString *commercialAccountType;
@property (nonatomic) BOOL isUnBinding;
@property (copy, nonatomic) id /* block */ unBindCompletion;
@property (nonatomic) BOOL shouldJumpBindConflict;
@property (nonatomic) BOOL isFromSMSToPassword;

+ (id)instanceWithBlock:(id /* block */)arg0;
+ (id)instanceWithBuilder:(id)arg0;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 ticketModel:(id)arg1;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 phoneContext:(id)arg1 ticketModel:(id)arg2;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 emailContext:(id)arg1 ticketModel:(id)arg2;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 emailContext:(id)arg1 passwordContext:(id)arg2;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 platformContext:(unsigned long long)arg1 ticketModel:(id)arg2;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 platformContext:(unsigned long long)arg1 ticketModel:(id)arg2 extraDict:(id)arg3;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 platformContext:(unsigned long long)arg1 ticketModel:(id)arg2 authinfo:(id)arg3;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 bindStrategy:(unsigned long long)arg1 ticketModel:(id)arg2;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 platformContext:(unsigned long long)arg1 bindStrategy:(unsigned long long)arg2 ticketModel:(id)arg3;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 platformContext:(unsigned long long)arg1 bindStrategy:(unsigned long long)arg2 ticketModel:(id)arg3 authInfo:(id)arg4;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 bindStrategy:(unsigned long long)arg1 platformContext:(unsigned long long)arg2 phoneContext:(id)arg3 ticketModel:(id)arg4;
+ (id)instanceWithBackStrategy:(unsigned long long)arg0 bindStrategy:(unsigned long long)arg1 platformContext:(unsigned long long)arg2 phoneContext:(id)arg3 ticketModel:(id)arg4 extraDict:(id)arg5;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)extraDic;
- (void)setExtraDic:(id)arg0;
- (id /* block */)callBack;
- (void)setCallBack:(id /* block */)arg0;
- (id)ticketModel;
- (void)setTicketModel:(id)arg0;
- (unsigned long long)backStrategy;
- (void)setBackStrategy:(unsigned long long)arg0;
- (id)phoneContext;
- (void)setPhoneContext:(id)arg0;
- (id)oldPhoneContext;
- (void)setOldPhoneContext:(id)arg0;
- (id)emailContext;
- (void)setEmailContext:(id)arg0;
- (id)passwordContext;
- (void)setPasswordContext:(id)arg0;
- (void)setPlatformContext:(unsigned long long)arg0;
- (unsigned long long)bindStrategy;
- (void)setBindStrategy:(unsigned long long)arg0;
- (BOOL)shouldHideFAQButton;
- (void)setShouldHideFAQButton:(BOOL)arg0;
- (void)setIsEntry:(BOOL)arg0;
- (BOOL)shouldHideNav;
- (void)setShouldHideNav:(BOOL)arg0;
- (BOOL)isSafeMobile;
- (void)setIsSafeMobile:(BOOL)arg0;
- (unsigned long long)pageUseScene;
- (void)setPageUseScene:(unsigned long long)arg0;
- (id)commercialAccountType;
- (void)setCommercialAccountType:(id)arg0;
- (BOOL)isUnBinding;
- (void)setIsUnBinding:(BOOL)arg0;
- (id /* block */)unBindCompletion;
- (void)setUnBindCompletion:(id /* block */)arg0;
- (id)middleParamsModel;
- (void)setMiddleParamsModel:(id)arg0;
- (BOOL)isLarkLogin;
- (void)setIsLarkLogin:(BOOL)arg0;
- (BOOL)shouldJumpBindConflict;
- (void)setShouldJumpBindConflict:(BOOL)arg0;
- (BOOL)isFromSMSToPassword;
- (void)setIsFromSMSToPassword:(BOOL)arg0;
- (void).cxx_destruct;
- (id)authInfo;
- (unsigned long long)accountType;
- (void)setAuthInfo:(id)arg0;
- (void)setAccountType:(unsigned long long)arg0;
- (unsigned long long)platformContext;
- (BOOL)isEntry;

@end