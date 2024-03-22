//
//     Generated by private class-dump
//

@class NSString;

@interface DYHighRiskRebindHelper : HTSService <DYHighRiskRebindHelperService> {
    BOOL _isContinueLogin;
}

@property (nonatomic) BOOL isContinueLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)skipAction;
+ (void)handleSMSContinueLoginSuccess:(id)arg0 account:(id)arg1 ticket:(id)arg2;
+ (void)skipActionWithUIController:(id)arg0 model:(id)arg1 params:(id)arg2;

- (void)setIsContinueLogin:(BOOL)arg0;
- (BOOL)isContinueLogin;

@end