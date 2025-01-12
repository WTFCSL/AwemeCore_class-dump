//
//     Generated by private class-dump
//

@class NSString, AWEDataFreeModel, AWEDataFreeView;

@interface AWEDataFreeStatusManager : NSObject {
    NSString *_mobilePseudoCode;
    NSString *_unicomPrivateIPAddress;
    NSString *_telecomOpenIdData;
    AWEDataFreeModel *_dataFreeModel;
    AWEDataFreeView *_dataFreeView;
}

@property (copy, nonatomic) NSString *mobilePseudoCode;
@property (copy, nonatomic) NSString *unicomPrivateIPAddress;
@property (copy, nonatomic) NSString *telecomOpenIdData;
@property (retain, nonatomic) AWEDataFreeModel *dataFreeModel;
@property (retain, nonatomic) AWEDataFreeView *dataFreeView;

+ (void)launchProcess;
+ (id)sharedManager;

- (BOOL)isShowDataFreeView;
- (void)dismissDataFreeView;
- (void)handleConnectionChanged:(id)arg0;
- (void)privacyAlertAgreed;
- (id)dataFreeView;
- (void)setDataFreeModel:(id)arg0;
- (id)dataFreeModel;
- (id)exchangeAvailableSchemaWithOriginSchema:(id)arg0;
- (void)queryDataFreeStatusIfNeeded;
- (void)setDataFreeView:(id)arg0;
- (void)showFreeDataToastIfNeeded;
- (void)onAppLaunchTask;
- (void)showDataUsageToastIfNeeded;
- (id)mobilePseudoCode;
- (void)setMobilePseudoCode:(id)arg0;
- (id)unicomPrivateIPAddress;
- (void)setUnicomPrivateIPAddress:(id)arg0;
- (id)telecomOpenIdData;
- (void)setTelecomOpenIdData:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)didInit;
- (void)willDealloc;
- (void)dealloc;

@end
