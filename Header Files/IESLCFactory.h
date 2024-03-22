//
//     Generated by private class-dump
//

@class IESLCConnectRatePlugin, IESLCOnlineRatePlugin, IESLCReconnectPlugin, IESLCPushConfig, IESLCConfig;
@protocol IESLCPushManagerProtocol, IESLCPushMessageReceiverProtocol, IESLCConnectManagerProtocol, IESLCMessageHandlerProtocol;

@interface IESLCFactory : NSObject {
    IESLCPushConfig *_lcPushConfig;
    IESLCConfig *_lcConfig;
    id<IESLCConnectManagerProtocol> _connectManager;
    id<IESLCMessageHandlerProtocol> _messageHandler;
    id<IESLCPushMessageReceiverProtocol> _pushMessageReceiver;
    id<IESLCPushManagerProtocol> _pushManager;
    IESLCConnectRatePlugin *_connectRatePlugin;
    IESLCOnlineRatePlugin *_onlineRatePlugin;
    IESLCReconnectPlugin *_reconnectPlugin;
}

@property (retain, nonatomic) id<IESLCPushMessageReceiverProtocol> pushMessageReceiver;
@property (retain, nonatomic) id<IESLCPushManagerProtocol> pushManager;
@property (retain, nonatomic) IESLCConfig *lcConfig;
@property (retain, nonatomic) IESLCConnectRatePlugin *connectRatePlugin;
@property (retain, nonatomic) IESLCOnlineRatePlugin *onlineRatePlugin;
@property (retain, nonatomic) IESLCReconnectPlugin *reconnectPlugin;
@property (retain, nonatomic) IESLCPushConfig *lcPushConfig;
@property (retain, nonatomic) id<IESLCConnectManagerProtocol> connectManager;
@property (retain, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (id)pushConfig;
+ (id)sharedInstance;
+ (id)config;

- (id)connectManager;
- (void)setConnectManager:(id)arg0;
- (void)setLcPushConfig:(id)arg0;
- (void)setLcConfig:(id)arg0;
- (id)pushMessageReceiver;
- (void)setConnectRatePlugin:(id)arg0;
- (id)connectRatePlugin;
- (void)setOnlineRatePlugin:(id)arg0;
- (id)onlineRatePlugin;
- (void)setReconnectPlugin:(id)arg0;
- (id)reconnectPlugin;
- (id)lcPushConfig;
- (void)createWithConfig:(id)arg0;
- (void)setPushMessageReceiver:(id)arg0;
- (id)lcConfig;
- (id)messageHandler;
- (void).cxx_destruct;
- (id)pushManager;
- (void)setMessageHandler:(id)arg0;
- (void)setPushManager:(id)arg0;

@end