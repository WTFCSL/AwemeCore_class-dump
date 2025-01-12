//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEAccountManagerProtocol;

@interface AWEHotsoonImportFansManager : NSObject <AWEHuoshanSyncHelperProtocol> {
    id<AWEAccountManagerProtocol> _accountManager;
}

@property (retain, nonatomic) id<AWEAccountManagerProtocol> accountManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleLowVersion;
+ (id)textLowVersion;
+ (id)titleNotInstalled;
+ (id)textNotInstalled;
+ (id)sharedInstance;

- (void)showInstallHuoshanAlert;
- (void)showUpdateHuoshanAlert;
- (void)importFans:(id)arg0 completion:(id /* block */)arg1;
- (void)setAccountManager:(id)arg0;
- (void).cxx_destruct;
- (id)accountManager;

@end
