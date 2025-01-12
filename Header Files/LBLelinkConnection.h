//
//     Generated by private class-dump
//

@class LBUPnPConnection, NSString, NSDictionary, LBInnerNewLelinkConnection, NSDate, LBLelinkService;
@protocol LBLelinkConnectionDelegate, LBLelinkWRMeetingDelegate;

@interface LBLelinkConnection : NSObject <BDByteCastConnectionProtocol, LBUPnPConnectionDelegate, LBInnerNewLelinkConnectionDelegate> {
    BOOL _openPictureAntiHarass;
    BOOL _connected;
    BOOL _enableMultiTunnels;
    BOOL _serviceMultiConnect;
    BOOL _multiConnected;
    BOOL _riskDetecting;
    LBLelinkService *_lelinkService;
    id<LBLelinkConnectionDelegate> _delegate;
    id<LBLelinkWRMeetingDelegate> _meetingDelegate;
    long long _mirrorAbility;
    LBUPnPConnection *_upnpConnection;
    LBInnerNewLelinkConnection *_innerNewLelinkConnection;
    NSString *_sessionId;
    NSDate *_startConnectDate;
    long long _multiConnectErrorCount;
    id /* block */ _collectCallback;
    NSDictionary *_connectedPassthDict;
    long long _favoriteDev;
    long long _historyDev;
    NSString *_mirrorString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (retain, nonatomic) LBUPnPConnection *upnpConnection;
@property (retain, nonatomic) LBInnerNewLelinkConnection *innerNewLelinkConnection;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSDate *startConnectDate;
@property (nonatomic) BOOL enableMultiTunnels;
@property (nonatomic) BOOL serviceMultiConnect;
@property (nonatomic) BOOL multiConnected;
@property (nonatomic) long long multiConnectErrorCount;
@property (copy, nonatomic) id /* block */ collectCallback;
@property (retain, nonatomic) NSDictionary *connectedPassthDict;
@property (nonatomic) long long favoriteDev;
@property (nonatomic) long long historyDev;
@property (nonatomic) BOOL riskDetecting;
@property (copy, nonatomic) NSString *mirrorString;
@property (retain, nonatomic) LBLelinkService *lelinkService;
@property (weak, nonatomic) id<LBLelinkConnectionDelegate> delegate;
@property (weak, nonatomic) id<LBLelinkWRMeetingDelegate> meetingDelegate;
@property (nonatomic) long long mirrorAbility;
@property (nonatomic) BOOL openPictureAntiHarass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)innerNewLelinkConnection;
- (id)upnpConnection;
- (void)setInnerNewLelinkConnection:(id)arg0;
- (void)setUpnpConnection:(id)arg0;
- (id)initWithLelinkService:(id)arg0 delegate:(id)arg1;
- (void)connectToLelinkService:(id)arg0;
- (void)setServiceMultiConnect:(BOOL)arg0;
- (void)setRiskDetecting:(BOOL)arg0;
- (BOOL)enableMultiTunnels;
- (void)setMultiConnected:(BOOL)arg0;
- (void)setMultiConnectErrorCount:(long long)arg0;
- (void)lelinkConnectService:(id)arg0;
- (void)imConnect;
- (void)upnpConnect;
- (BOOL)riskDetecting;
- (void)setEnableMultiTunnels:(BOOL)arg0;
- (void)didConnectDelegate;
- (void)disConnectDelegate;
- (void)connectErrorDelegate:(id)arg0;
- (void)passthConnectInfoDictDelegate:(id)arg0;
- (void)rightsSynchronousDelegate:(id)arg0 error:(id)arg1;
- (void)passthMirrorActionTypeToDelegate:(long long)arg0;
- (void)passthEventReverseControlBodyDicToDelegate:(id)arg0;
- (void)passthRemoteControlEventDicToDelegate:(id)arg0;
- (void)passthMicroAppMessageDicToDelegate:(id)arg0;
- (void)passthMicroAppCloseToDelegate:(id)arg0;
- (void)passthSendContorMessageToDelegate:(id)arg0;
- (long long)multiConnectErrorCount;
- (BOOL)serviceMultiConnect;
- (void)reportConnectError:(id)arg0;
- (BOOL)multiConnected;
- (void)recordLastConnectService;
- (void)reportConnectSuccess;
- (void)setMirrorString:(id)arg0;
- (void)setMirrorAbility:(long long)arg0;
- (void)setFavoriteDev:(long long)arg0;
- (void)setHistoryDev:(long long)arg0;
- (void)setConnectedPassthDict:(id)arg0;
- (id)meetingDelegate;
- (id)p_simplifyIsOpen;
- (void)handleCollectResult:(BOOL)arg0 error:(id)arg1;
- (void)setCollectCallback:(id /* block */)arg0;
- (id /* block */)collectCallback;
- (void)upnpConnection:(id)arg0 deviceAvailableStatus:(BOOL)arg1;
- (void)innerNewLelinkConnection:(id)arg0 waterRabbitDic:(id)arg1;
- (void)innerNewLelinkConnection:(id)arg0 collectServiceReplyMessage:(id)arg1;
- (void)innerNewLelinkConnection:(id)arg0 cloudFunctionReplyMessage:(id)arg1;
- (void)didReceiveInteractiveADInfoFromeTV:(id)arg0;
- (void)confirmConnect;
- (void)passthPluginAppId:(id)arg0 type:(long long)arg1 pluginUrl:(id)arg2 proof:(id)arg3 loginInfo:(id)arg4;
- (BOOL)canPassthMessageInfo;
- (void)passthMessageInfoWithAppId:(id)arg0 type:(long long)arg1 content:(id)arg2;
- (BOOL)canPassthCloseMicroApp;
- (void)passthCloseMicroAppWithType:(long long)arg0;
- (void)passthWaterRabbitDataDic:(id)arg0 tvUid:(id)arg1;
- (void)enableMultiTunnels:(BOOL)arg0;
- (void)passthCloudAppCookieUid:(id)arg0 rtcUid:(id)arg1 domain:(id)arg2 cookieBodyDic:(id)arg3;
- (void)conneciontHarassTime:(long long)arg0 harassType:(long long)arg1 pictures:(id)arg2;
- (void)serverPassAppDataWithAction:(id)arg0 body:(id)arg1;
- (void)passthWaterRabbitMessageToDelegate:(id)arg0;
- (void)passthNormalMessageToDelegate:(id)arg0;
- (void)passthSendCollectServiceReplyToDelegate:(id)arg0;
- (void)passthReverseCloudFunction:(id)arg0;
- (void)passthCloudAppCookieBodyDicDelegate:(id)arg0;
- (BOOL)canPassthChangePlayerMode;
- (void)passthChangePlayerCommandWithContorType:(long long)arg0 contorCommands:(id)arg1;
- (BOOL)canPassthCheckReceiverSetParma;
- (void)passthCheckReceiverSetParma;
- (void)harassVerificateWithPicture:(id)arg0;
- (void)cancelHarassComfirm;
- (BOOL)containerPassthManifestTypeCollectedAction;
- (void)passthFavoriteLelinkService:(id /* block */)arg0;
- (BOOL)isKindOFClassAndLengthString:(id)arg0;
- (void)setOpenPictureAntiHarass:(BOOL)arg0;
- (void)setMeetingDelegate:(id)arg0;
- (long long)mirrorAbility;
- (BOOL)openPictureAntiHarass;
- (id)connectedPassthDict;
- (long long)favoriteDev;
- (long long)historyDev;
- (id)mirrorString;
- (unsigned long long)getConnectedServiceType;
- (id)lelinkService;
- (unsigned long long)getConnectedProtocolType;
- (void)disConnect;
- (BOOL)canPassthRightsQuery;
- (void)innerNewLelinkConnection:(id)arg0 rightsSynchronous:(id)arg1 error:(id)arg2;
- (void)passthRightsQuery;
- (BOOL)canPassthJournalFile;
- (void)passthJournalFileWithEid:(id)arg0 euqid:(id)arg1 et:(id)arg2;
- (BOOL)canPassthPerformedMirrorAction;
- (void)passthPerformedMirrorActionType:(long long)arg0;
- (BOOL)canPassthEventReverseControl;
- (void)passthEventReverseControl;
- (BOOL)canPassthRemoteControlEvent;
- (void)passthListenRemoteControlSwitch:(BOOL)arg0;
- (BOOL)canPassthPluginInfo;
- (void)setStartConnectDate:(id)arg0;
- (id)startConnectDate;
- (void)innerNewLelinkConnection:(id)arg0 disConnectToDevice:(id)arg1;
- (void)innerNewLelinkConnection:(id)arg0 onError:(id)arg1;
- (void)innerNewLelinkConnection:(id)arg0 didConnectToDevice:(id)arg1;
- (void)innerNewLelinkConnection:(id)arg0 decoderList:(id)arg1;
- (void)innerNewLelinkConnection:(id)arg0 passthBody:(id)arg1;
- (void)innerNewLelinkConnection:(id)arg0 mirrorActionType:(long long)arg1;
- (void)innerNewLelinkConnection:(id)arg0 eventReverseControlBodyDic:(id)arg1;
- (void)innerNewLelinkConnection:(id)arg0 remoteControlEventDic:(id)arg1;
- (void)innerNewLelinkConnection:(id)arg0 microAppMessage:(id)arg1;
- (void)innerNewLelinkConnection:(id)arg0 microAppClose:(id)arg1;
- (void)innerNewLelinkConnection:(id)arg0 queryMirrorAndPushReplySet:(id)arg1;
- (void)sendCloudMirroRoomId:(id)arg0 type:(id)arg1;
- (BOOL)canPushVideoList;
- (BOOL)canWaterRabbit;
- (BOOL)canCastSpace;
- (void)setLelinkService:(id)arg0;
- (void)connect;
- (id)init;
- (void)setConnected:(BOOL)arg0;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (id)sessionId;
- (BOOL)isConnected;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setSid:(id)arg0;
- (void)saveData;

@end
