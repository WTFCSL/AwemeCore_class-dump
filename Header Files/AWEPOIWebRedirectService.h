//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPOIWebRedirectService : NSObject <AWERouterInterceptorDelegate> {
    NSArray *_scanRedirectList;
}

@property (retain, nonatomic) NSArray *scanRedirectList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)interceptorActionBeforeTransferWithURLString:(id)arg0 userInfo:(id)arg1;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:(id)arg0;
- (id)scanRedirectList;
- (BOOL)needRedirectSchema:(id)arg0;
- (void)redirectRouterWithSchema:(id)arg0;
- (void)showAlertWithModel:(id)arg0;
- (BOOL)isOfflineScanJumpToUserProfileWithSchema:(id)arg0 backupSchema:(id)arg1;
- (void)trackEnterPersonalDetailWithSchema:(id)arg0;
- (void)setScanRedirectList:(id)arg0;
- (void).cxx_destruct;

@end
