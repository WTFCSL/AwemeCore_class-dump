//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAddressBookManager : NSObject <AWEAddressBookManagerProtocol> {
    BOOL _didEnterBackground;
    unsigned long long _cachedAuthority;
    NSString *_enterFromOnCallAddressBook;
    NSString *_enterFrom;
}

@property (nonatomic) BOOL didEnterBackground;
@property (nonatomic) unsigned long long cachedAuthority;
@property (copy, nonatomic) NSString *enterFromOnCallAddressBook;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)firstTimeFetchContactAfterLogin;
+ (BOOL)showBindPhoneView;
+ (id)sharedInstance;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)localNameForKey:(id)arg0;
- (BOOL)isPermissionGranted;
- (BOOL)enableShowContactGuideEntryWithEntryBDCert:(id)arg0;
- (void)uploadContactsIfNeed;
- (void)setCachedAuthority:(unsigned long long)arg0;
- (unsigned long long)cachedAuthority;
- (unsigned long long)currentUserContactsAccess;
- (void)requestPermissionWithEnterFromStr:(id)arg0 BDCert:(id)arg1 trackParams:(id)arg2 directSetGranted:(BOOL)arg3 completion:(id /* block */)arg4;
- (unsigned long long)paramsMediatorOfRequestPermissionWithBDCert:(id)arg0 directSetGranted:(BOOL)arg1;
- (void)requestSystemAccessWithEnterFromStr:(id)arg0 BDCert:(id)arg1 trackParams:(id)arg2 completion:(id /* block */)arg3;
- (void)showDouyinAlertViewWithEnterFromStr:(id)arg0 trackParams:(id)arg1 completion:(id /* block */)arg2;
- (id)douyinAlertViewController:(id)arg0 trackParams:(id)arg1;
- (void)requestAndUploadWithModel:(id)arg0 view:(id)arg1 completion:(id /* block */)arg2;
- (id)paramsMediatorOfRequestPermissionAndUploadContacts:(id)arg0;
- (void)p_transferToAddressBookList:(id)arg0 uploadOptionModel:(id)arg1 onView:(id)arg2 completion:(id /* block */)arg3;
- (void)p_transferToAddressBookListForRequest:(id)arg0 trackParams:(id)arg1 loadBDCert:(id)arg2 completion:(id /* block */)arg3;
- (void)transferWithUrlString:(id)arg0;
- (void)uploadContactsWithLoadBDCert:(id)arg0 alogParams:(id)arg1 uploadScene:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)recommendReasonWithTemplateModel:(id)arg0 originalString:(id)arg1 context:(id)arg2;
- (id)localNameArrayForKeyList:(id)arg0;
- (void)uploadAddressBookOnView:(id)arg0 model:(id)arg1 completion:(id /* block */)arg2;
- (void)setEnterFromOnCallAddressBook:(id)arg0;
- (void)requestPermissionWithDirectSetGranted:(BOOL)arg0 requestBDCert:(id)arg1 completion:(id /* block */)arg2;
- (void)requestAndUploadAddressBook:(BOOL)arg0 requestBDCert:(id)arg1 loadBDCert:(id)arg2 trackParams:(id)arg3 completion:(id /* block */)arg4;
- (void)requestSystemPermissionAndUploadContacts:(id)arg0 requestCert:(id)arg1 loadCert:(id)arg2 completion:(id /* block */)arg3;
- (id)recommendReasonWithTemplateModel:(id)arg0 originalString:(id)arg1 userModel:(id)arg2;
- (BOOL)isIllegalRecommendReasonWithTemplateModel:(id)arg0 originalString:(id)arg1 context:(id)arg2;
- (void)handleContactTappedWithEnterFrom:(id)arg0 requestBDCert:(id)arg1 loadBDCert:(id)arg2;
- (void)saveEnterFromOnCallAddressBook:(id)arg0;
- (id)enterFromOnCallAddressBook;
- (id)init;
- (BOOL)didEnterBackground;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg0;
- (void)setDidEnterBackground:(BOOL)arg0;

@end
