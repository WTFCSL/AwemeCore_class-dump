//
//     Generated by private class-dump
//

@protocol IESLCPushManagerDelegate;

@protocol IESLCPushManagerProtocol <NSObject>

@property (weak, nonatomic) id<IESLCPushManagerDelegate> delegate;

- (BOOL)sendPushMessage:(id)arg0;
- (void)startConnectionWithConfig:(id)arg0;
- (void)stopConnection;
- (BOOL)isConnected;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
