//
//     Generated by private class-dump
//

@class NSString, LEBUPnPDevice, NSDate;
@protocol LBUPnPConnectionDelegate;

@interface LBUPnPConnection : NSObject {
    BOOL _available;
    BOOL _connected;
    NSString *_sessionId;
    id<LBUPnPConnectionDelegate> _delegate;
    LEBUPnPDevice *_upnpDevice;
    NSDate *_startConnectDate;
}

@property (nonatomic, getter=isAvailable) BOOL available;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (retain, nonatomic) NSDate *startConnectDate;
@property (copy, nonatomic) NSString *sessionId;
@property (weak, nonatomic) id<LBUPnPConnectionDelegate> delegate;
@property (retain, nonatomic) LEBUPnPDevice *upnpDevice;

- (void)disConnect;
- (void)setStartConnectDate:(id)arg0;
- (id)startConnectDate;
- (id)initWithUPnPDevice:(id)arg0;
- (void)notificationOfDlnaServiceOffline:(id)arg0;
- (id)upnpDevice;
- (void)setUpnpDevice:(id)arg0;
- (void)connect;
- (id)init;
- (void)setAvailable:(BOOL)arg0;
- (void)setConnected:(BOOL)arg0;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (id)sessionId;
- (BOOL)isConnected;
- (BOOL)isAvailable;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;

@end
