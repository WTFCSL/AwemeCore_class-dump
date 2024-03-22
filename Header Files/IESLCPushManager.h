//
//     Generated by private class-dump
//

@class NSArray, TTPushManager, NSString;
@protocol IESLCPushManagerDelegate;

@interface IESLCPushManager : NSObject <WsDelegate, IESLCPushManagerProtocol> {
    BOOL _disableLongConnection;
    id<IESLCPushManagerDelegate> _delegate;
    unsigned long long _state;
    TTPushManager *_pushManager;
    NSArray *_urlArray;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) TTPushManager *pushManager;
@property (copy) NSArray *urlArray;
@property (nonatomic) BOOL disableLongConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCPushManagerDelegate> delegate;

+ (int)clientVersionNumber;
+ (int)clientPlatformNumber;
+ (int)clientNetworkStatus;
+ (int)clientVersionNumberOfShorVersionString:(id)arg0;

- (BOOL)sendPushMessage:(id)arg0;
- (void)setUrlArray:(id)arg0;
- (BOOL)disableLongConnection;
- (void)setDisableLongConnection:(BOOL)arg0;
- (void)handlePushManagerConnectionStateChanged:(id)arg0;
- (void)handlePushManagerConnectionError:(id)arg0;
- (BOOL)p_isUrlValid:(id)arg0;
- (unsigned long long)ttConnectionStateConvertToIESLCConnectionState:(unsigned long long)arg0;
- (id)urlArray;
- (void)startConnectionWithConfig:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg0;
- (id)pushManager;
- (void)stopConnection;
- (BOOL)isConnected;
- (id)delegate;
- (void)setPushManager:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)p_addObservers;

@end
