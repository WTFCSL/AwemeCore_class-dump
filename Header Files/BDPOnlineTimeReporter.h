//
//     Generated by private class-dump
//

@class BDPAlertController, BDPUniqueID, NSString;
@protocol BDPOnlineTimeReporterDelegate;

@interface BDPOnlineTimeReporter : NSObject <BDPOnlineTimeReportedNotifyDelegate> {
    BOOL _isAuthenticating;
    id<BDPOnlineTimeReporterDelegate> _delegate;
    BDPUniqueID *_uniqueID;
    BDPAlertController *_offlineAlertViewController;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPAlertController *offlineAlertViewController;
@property (nonatomic) BOOL isAuthenticating;
@property (weak, nonatomic) id<BDPOnlineTimeReporterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onlineTimeReportedTask:(id)arg0 networkStatus:(long long)arg1 callbackResult:(unsigned long long)arg2;
- (BOOL)_beforeCheckHasHandledWithReportedTask:(id)arg0 networkStatus:(unsigned long long)arg1;
- (void)_showAntiAddictionAlertWithReportedTask:(id)arg0 result:(unsigned long long)arg1;
- (void)_showHostAuthAlertViewWithReportedTask:(id)arg0;
- (void)_checkGuideViewBeforeAuthenticationWithReportedTask:(id)arg0;
- (void)_showLoginViewBeforeAuthenticationWithReportedTask:(id)arg0;
- (BOOL)_shouldShowTeenModeAlerViewWithReportedTask:(id)arg0;
- (void)_showTeenModeAlertViewWithReportedTask:(id)arg0;
- (void)_showOffLineAlertView:(id)arg0 completion:(id /* block */)arg1;
- (id)offlineAlertViewController;
- (void)setOfflineAlertViewController:(id)arg0;
- (void)setIsAuthenticating:(BOOL)arg0;
- (void)fetchGiftConfigWithBlock:(id /* block */)arg0;
- (void)_showGuideDetentionViewWithAlertType:(unsigned long long)arg0 isLogin:(BOOL)arg1 reportedTask:(id)arg2 dismissCompletion:(id /* block */)arg3;
- (void)onlineTimeReportedTask:(id)arg0 callbackResult:(unsigned long long)arg1;
- (void)startReport;
- (void)stopReport;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)isAuthenticating;
- (id)initWithUniqueID:(id)arg0;

@end