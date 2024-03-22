//
//     Generated by private class-dump
//

@class LBLelinkSearch, NSString, NSArray, NSTimer, LBSystemPermissions, LBUPnPBrowser, NSObject, HPCastReachability, LBInnerLelinkBrowser, NSMutableArray;
@protocol OS_dispatch_queue, LBLelinkBrowserDelegate;

@interface LBLelinkBrowser : NSObject <LBInnerLelinkBrowserDelegate, LBUPnPBrowserDelegate, LBLelinkSearchDelegate, LBSystemPermissionsDelegate> {
    BOOL _isEndDealScan;
    BOOL _didStartSearch;
    BOOL _multiProtocolDeviceDLNAHideSwitch;
    id<LBLelinkBrowserDelegate> _delegate;
    LBInnerLelinkBrowser *_innerLelinkBrowser;
    LBUPnPBrowser *_upnpBrowser;
    NSMutableArray *_lelinkServices;
    unsigned long long _serviceType;
    NSObject<OS_dispatch_queue> *_checkAliveQueue;
    HPCastReachability *_reachability;
    unsigned long long _originServiceType;
    NSArray *_lastLelinkServices;
    NSString *_sessionId;
    LBLelinkSearch *_lelinkSearch;
    NSString *_dllMD5;
    NSTimer *_dlnaHideTime;
    NSArray *_dlnaHideDevices;
    double _startSearchTime;
    double _endSearchTime;
    LBSystemPermissions *_systemPermissions;
    NSTimer *_searchNoDeviceTime;
    NSTimer *_searchReportTime;
    NSString *_matchSearchUid;
    unsigned long long _matchSearchSourceStyle;
    NSString *_tVApkDevNamePrompt;
    NSMutableArray *_reportDLNAInfo;
    NSMutableArray *_reportLelinkInfo;
    NSString *_searchScenarios;
}

@property (retain, nonatomic) LBInnerLelinkBrowser *innerLelinkBrowser;
@property (retain, nonatomic) LBUPnPBrowser *upnpBrowser;
@property (retain, nonatomic) NSMutableArray *lelinkServices;
@property (nonatomic) unsigned long long serviceType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkAliveQueue;
@property (nonatomic) BOOL isEndDealScan;
@property (retain, nonatomic) HPCastReachability *reachability;
@property (nonatomic) BOOL didStartSearch;
@property (nonatomic) unsigned long long originServiceType;
@property (retain, nonatomic) NSArray *lastLelinkServices;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) LBLelinkSearch *lelinkSearch;
@property (copy, nonatomic) NSString *dllMD5;
@property (nonatomic) BOOL multiProtocolDeviceDLNAHideSwitch;
@property (retain, nonatomic) NSTimer *dlnaHideTime;
@property (retain, nonatomic) NSArray *dlnaHideDevices;
@property (nonatomic) double startSearchTime;
@property (nonatomic) double endSearchTime;
@property (retain, nonatomic) LBSystemPermissions *systemPermissions;
@property (retain, nonatomic) NSTimer *searchNoDeviceTime;
@property (retain, nonatomic) NSTimer *searchReportTime;
@property (copy, nonatomic) NSString *matchSearchUid;
@property (nonatomic) unsigned long long matchSearchSourceStyle;
@property (copy, nonatomic) NSString *tVApkDevNamePrompt;
@property (retain, nonatomic) NSMutableArray *reportDLNAInfo;
@property (retain, nonatomic) NSMutableArray *reportLelinkInfo;
@property (copy, nonatomic) NSString *searchScenarios;
@property (weak, nonatomic) id<LBLelinkBrowserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportAPPTVButtonAction;

- (void)notificationOfLelinkServiceOffline:(id)arg0;
- (void)notificationOfDlnaServiceOffline:(id)arg0;
- (void)notificationOnlineStatusChanged;
- (void)notificationServiceInfoDidChanged;
- (void)notificationSearchDeviceFromeServerDidCompleted;
- (void)checkIMDeviceStatus;
- (void)notificationUserLogin:(id)arg0;
- (void)notificationOfReachabilityChanged:(id)arg0;
- (void)notificationOfLelinkServiceDidConnect:(id)arg0;
- (void)setDidStartSearch:(BOOL)arg0;
- (void)setMultiProtocolDeviceDLNAHideSwitch:(BOOL)arg0;
- (void)setTVApkDevNamePrompt:(id)arg0;
- (id)innerLelinkBrowser;
- (id)upnpBrowser;
- (void)setLelinkSearch:(id)arg0;
- (id)lelinkSearch;
- (void)newSortServices;
- (id)lelinkServices;
- (void)dealSomeAfterNetChanged;
- (id)dllMD5;
- (void)setDllMD5:(id)arg0;
- (BOOL)didStartSearch;
- (double)startSearchTime;
- (void)setStartSearchTime:(double)arg0;
- (unsigned long long)originServiceType;
- (void)searchForLelinkServiceOfType:(unsigned long long)arg0;
- (void)setOriginServiceType:(unsigned long long)arg0;
- (id)systemPermissions;
- (id)dlnaHideTime;
- (void)setDlnaHideTime:(id)arg0;
- (BOOL)multiProtocolDeviceDLNAHideSwitch;
- (void)dlnaHideTimeSelector;
- (id)searchNoDeviceTime;
- (void)setSearchNoDeviceTime:(id)arg0;
- (void)searchNoDeviceTimeSelector;
- (id)searchReportTime;
- (void)setSearchReportTime:(id)arg0;
- (void)searchReportTimeSelector;
- (void)clearLelinkServiceWithType:(unsigned long long)arg0;
- (void)clearLelinkServiceWithType:(unsigned long long)arg0 andCurrentType:(unsigned long long)arg1;
- (void)setEndSearchTime:(double)arg0;
- (BOOL)isSameNetworkWithIpString:(id)arg0;
- (void)getMdnsTXTInfoWithIpAddress:(id)arg0 remotePort:(long long)arg1 timeout:(double)arg2 block:(id /* block */)arg3;
- (void)dealWithDevices:(id)arg0;
- (void)permissionsPolicyDeniedToDelegate:(unsigned long long)arg0;
- (void)setDlnaHideDevices:(id)arg0;
- (void)getLelinkDevicesFromUpnpDevices:(id)arg0;
- (id)resolveLelinkDeviceWithJson:(id)arg0;
- (id)dlnaHideDevices;
- (void)upnpBrowser:(id)arg0 searchChangeWithResult:(id)arg1;
- (void)bssidCompensateSearchReceivArray:(id)arg0;
- (void)getMdnsTXTInfoParsingDevicesServiceWithResponse:(id)arg0 tvIp:(id)arg1 tvAppid:(id)arg2 tvuid:(id)arg3 sourceStyle:(unsigned long long)arg4;
- (void)setMatchSearchUid:(id)arg0;
- (void)setMatchSearchSourceStyle:(unsigned long long)arg0;
- (void)analysisLelinkBrowserDeveice;
- (void)obtainDLNABrowserInfo:(id)arg0;
- (void)obtainLelinkBrowserInfo:(id)arg0;
- (void)reportLelinkAndDLNA;
- (id)reportDLNAInfo;
- (id)reportLelinkInfo;
- (id)getSameIpDeviceInfoList:(id)arg0;
- (void)setReportDLNAInfo:(id)arg0;
- (void)setReportLelinkInfo:(id)arg0;
- (id)searchScenarios;
- (id)resolveLelinkDeviceWithUpnpDevice:(id)arg0;
- (void)isLelinkService:(BOOL *)arg0 model:(id)arg1;
- (void)isUpnpService:(BOOL *)arg0 upnpDevice:(id)arg1;
- (id)matchSearchUid;
- (id)tVApkDevNamePrompt;
- (unsigned long long)matchSearchSourceStyle;
- (void)innerLelinkBrowser:(id)arg0 onError:(id)arg1;
- (void)innerLelinkBrowser:(id)arg0 didFindDevices:(id)arg1;
- (void)innerLelinkBrowser:(id)arg0 permissionsPolicyDenied:(unsigned long long)arg1;
- (void)innerLelinkBrowser:(id)arg0 didFindIMDevice:(id)arg1 sourceStyle:(unsigned long long)arg2;
- (void)upnpBrowser:(id)arg0 searchErrorWithError:(id)arg1;
- (void)lelinkSearch:(id)arg0 devices:(id)arg1;
- (void)localNetworkPermissionsPolicyDeniedDelegate:(id)arg0;
- (void)searchForLelinkService;
- (BOOL)searchForLelinkServiceFormQRCode:(id)arg0 onError:(id *)arg1;
- (void)searchForLelinkServiceFormCastCode:(id)arg0 callBlock:(id /* block */)arg1;
- (void)searchForLelinkServiceFormTvUid:(id)arg0 tvAppid:(id)arg1 callBlock:(id /* block */)arg2;
- (void)phoneStatusParsingResponseHandle:(BOOL)arg0 response:(id)arg1 error:(id)arg2 sourceStyle:(unsigned long long)arg3 callBlock:(id /* block */)arg4;
- (void)tvStatusParsingResponseHandle:(BOOL)arg0 response:(id)arg1 error:(id)arg2 tvUid:(id)arg3 appid:(id)arg4 sourceStyle:(unsigned long long)arg5 callBlock:(id /* block */)arg6;
- (void)searchForLelinkServiceFormTvDsn:(id)arg0 tvAppid:(id)arg1 callBlock:(id /* block */)arg2;
- (void)searchForLelinkServiceFormPhone:(id)arg0 callBlock:(id /* block */)arg1;
- (BOOL)enableSearchLelinkService:(BOOL)arg0 sourceStyle:(unsigned long long)arg1 onError:(id)arg2;
- (BOOL)pauseSearchLelinkServiceStyle:(unsigned long long)arg0 onError:(id *)arg1;
- (BOOL)continueSearchLelinkServiceStyle:(unsigned long long)arg0 onError:(id *)arg1;
- (BOOL)isRightServiceInfo:(id)arg0;
- (id)dictFromUrlString:(id)arg0;
- (void)reAuth;
- (void)imService:(id)arg0 isServiceChanged:(BOOL *)arg1;
- (void)deleteLelinkService:(id)arg0;
- (void)setLellinkService:(id)arg0 toFrequentlyUsed:(BOOL)arg1;
- (void)updateLelinkService:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)updateLelinkService:(id)arg0;
- (void)updateLelinkServiceName:(id)arg0;
- (void)startCheckIMStatus;
- (void)stopCheckIMStatus;
- (void)extractedData:(id)arg0 key:(id)arg1;
- (void)removeOffLineService;
- (BOOL)saveServices:(id)arg0;
- (id)lastServices;
- (void)checkOnlineStatus:(id)arg0;
- (void)reportServiceListDisappear;
- (void)uploadMeetingSessionId;
- (void)setInnerLelinkBrowser:(id)arg0;
- (void)setUpnpBrowser:(id)arg0;
- (void)setLelinkServices:(id)arg0;
- (BOOL)isEndDealScan;
- (void)setIsEndDealScan:(BOOL)arg0;
- (id)lastLelinkServices;
- (void)setLastLelinkServices:(id)arg0;
- (double)endSearchTime;
- (void)setSystemPermissions:(id)arg0;
- (void)setSearchScenarios:(id)arg0;
- (id)checkAliveQueue;
- (id)p_funcSimplifyIsOpen;
- (void)setCheckAliveQueue:(id)arg0;
- (id)init;
- (id)reachability;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (void)setReachability:(id)arg0;
- (id)sessionId;
- (void)stop;
- (unsigned long long)serviceType;
- (void)setServiceType:(unsigned long long)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;

@end