//
//     Generated by private class-dump
//

@class NSString, BDXThreadSafeDictionary;
@protocol WsDelegate;

@interface PuzzleWebSocketManager : NSObject <WsDelegate> {
    BDXThreadSafeDictionary *_socketTaskIDsForContainer;
    BDXThreadSafeDictionary *_socketTaskDict;
    id<WsDelegate> _delegate;
}

@property (retain, nonatomic) BDXThreadSafeDictionary *socketTaskIDsForContainer;
@property (retain, nonatomic) BDXThreadSafeDictionary *socketTaskDict;
@property (weak, nonatomic) id<WsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)onPushMessageReceived:(id)arg0 message:(id)arg1 type:(unsigned long long)arg2;
- (void)onFeedbackLog:(id)arg0 feedbacklog:(id)arg1;
- (void)onConnectionErrorWithState:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2 error:(id)arg3;
- (void)onConnectionStateChanged:(id)arg0 connectionState:(unsigned long long)arg1 url:(id)arg2;
- (BOOL)closeConnection:(id)arg0;
- (BOOL)closeAllConnectionsInContainerID:(id)arg0;
- (id)startConnection:(id)arg0 inContainer:(id)arg1 paramModel:(id)arg2;
- (BOOL)writeConnectionToSocket:(id)arg0 withData:(id)arg1;
- (void)conatinerDealloc:(id)arg0;
- (id)socketTaskIDsForContainer;
- (id)socketTaskDict;
- (id)pushManagerForSocketTaskID:(id)arg0;
- (void)removeSocketWithTaskID:(id)arg0;
- (id)socketTaskIDForPushManager:(id)arg0;
- (void)setSocketTaskIDsForContainer:(id)arg0;
- (void)setSocketTaskDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;

@end
