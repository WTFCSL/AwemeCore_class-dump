//
//     Generated by private class-dump
//

@class LBLelinkBrowser, NSString, NSArray, BDLinkBrowser, NSMutableArray, NSObject, BDByteCastTimer, BDDlnaBrowser;
@protocol OS_dispatch_queue, BDByteCastBrowserDelegate;

@interface BDByteCastBrowser : NSObject <LBLelinkBrowserDelegate, BDLinkBrowserDelegate, BDDlnaBrowserDelegate, NSObject> {
    BOOL _enableCheckIpAddress;
    BOOL _isPreSearch;
    BOOL _lelinkBrowseStarted;
    BOOL _totalBrowseStarted;
    BOOL _allProtocolsBrowseStarted;
    BOOL _isStartSearch;
    id<BDByteCastBrowserDelegate> _delegate;
    NSString *_privateChannel;
    unsigned long long _deviceOfflineEnableType;
    long long _checkAliveInterval;
    LBLelinkBrowser *_lelinkBrowser;
    NSArray *_previousLelinkServices;
    BDDlnaBrowser *_dlnaBrowser;
    NSMutableArray *_internalServiceArray;
    BDLinkBrowser *_bdlinkBrowser;
    double _browseIdUpdateTimestamp;
    NSString *_searchEventType;
    NSObject<OS_dispatch_queue> *_checkAliveQueue;
    BDByteCastTimer *_checkTimer;
}

@property (retain, nonatomic) LBLelinkBrowser *lelinkBrowser;
@property (nonatomic) BOOL lelinkBrowseStarted;
@property (copy, nonatomic) NSArray *previousLelinkServices;
@property (retain, nonatomic) BDDlnaBrowser *dlnaBrowser;
@property (retain, nonatomic) NSMutableArray *internalServiceArray;
@property (retain, nonatomic) BDLinkBrowser *bdlinkBrowser;
@property (nonatomic) BOOL totalBrowseStarted;
@property (nonatomic) BOOL allProtocolsBrowseStarted;
@property (nonatomic) double browseIdUpdateTimestamp;
@property (copy, nonatomic) NSString *searchEventType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkAliveQueue;
@property (retain, nonatomic) BDByteCastTimer *checkTimer;
@property (nonatomic) BOOL isStartSearch;
@property (weak, nonatomic) id<BDByteCastBrowserDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *serviceArray;
@property (copy, nonatomic) NSString *privateChannel;
@property (nonatomic) unsigned long long deviceOfflineEnableType;
@property (nonatomic) long long checkAliveInterval;
@property (nonatomic) BOOL enableCheckIpAddress;
@property (nonatomic) BOOL isPreSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)checkTimer;
- (void)setCheckTimer:(id)arg0;
- (void)lelinkBrowser:(id)arg0 didFindLelinkServices:(id)arg1;
- (void)lelinkBrowser:(id)arg0 onError:(id)arg1;
- (void)lelinkBrowser:(id)arg0 permissionsPolicyDenied:(unsigned long long)arg1;
- (id)checkAliveQueue;
- (void)setCheckAliveQueue:(id)arg0;
- (void)setPrivateChannel:(id)arg0;
- (void)searchServicesWithSdkType:(unsigned long long)arg0;
- (void)setCheckAliveInterval:(long long)arg0;
- (long long)checkAliveInterval;
- (void)setDeviceOfflineEnableType:(unsigned long long)arg0;
- (void)setEnableCheckIpAddress:(BOOL)arg0;
- (void)setIsPreSearch:(BOOL)arg0;
- (void)tryAppendBDLinkInfo:(id)arg0 withSuccessBlock:(id /* block */)arg1 failureBlock:(id /* block */)arg2;
- (void)searchServices;
- (id)privateChannel;
- (void)linkDiscoveredDeviceUpdated:(id)arg0;
- (id)getBDLinkServiceString;
- (BOOL)isStartSearch;
- (BOOL)needCheckAliveWithType:(unsigned long long)arg0;
- (void)checkDeviceAlive;
- (void)updateBrowserId;
- (void)setSearchEventType:(id)arg0;
- (id)searchEventType;
- (id)dlnaBrowser;
- (id)bdlinkBrowser;
- (id)lelinkBrowser;
- (void)setLelinkBrowseStarted:(BOOL)arg0;
- (void)setTotalBrowseStarted:(BOOL)arg0;
- (void)setAllProtocolsBrowseStarted:(BOOL)arg0;
- (unsigned long long)deviceOfflineEnableType;
- (void)setIsStartSearch:(BOOL)arg0;
- (double)browseIdUpdateTimestamp;
- (void)setBrowseIdUpdateTimestamp:(double)arg0;
- (id)internalServiceArray;
- (void)setPreviousLelinkServices:(id)arg0;
- (id)previousLelinkServices;
- (void)checkLelinkUnavailableService:(id)arg0;
- (BOOL)checkIpAddress:(id)arg0;
- (void)trackBrowseResult:(id)arg0;
- (void)traceBrowseResultV2;
- (void)traceBrowseResultV2ForLelink;
- (BOOL)lelinkBrowseStarted;
- (id)serviceContent;
- (BOOL)totalBrowseStarted;
- (BOOL)allProtocolsBrowseStarted;
- (id)manufactureString;
- (void)tryAppendBDLinkInfo:(id)arg0 withPortIndex:(long long)arg1 completion:(id /* block */)arg2;
- (void)bdlinkBrowser:(id)arg0 unavailableLinkDevice:(id)arg1;
- (void)dlnaBrowser:(id)arg0 onError:(id)arg1;
- (void)dlnaBrowser:(id)arg0 didFindByteCastServices:(id)arg1;
- (void)dlnaBrowser:(id)arg0 didFindInvalidByteCastServices:(id)arg1;
- (void)dlnaBrowser:(id)arg0 unavailableDlnaDevice:(id)arg1;
- (BOOL)enableCheckIpAddress;
- (BOOL)isPreSearch;
- (void)setLelinkBrowser:(id)arg0;
- (void)setDlnaBrowser:(id)arg0;
- (void)setInternalServiceArray:(id)arg0;
- (void)setBdlinkBrowser:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)deviceName;
- (void)didEnterBackground:(id)arg0;
- (void)stop;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)willEnterForeground:(id)arg0;
- (id)serviceArray;

@end