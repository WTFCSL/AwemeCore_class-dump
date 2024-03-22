//
//     Generated by private class-dump
//

@class NSString, AWELiveProfileMessageActionCreator, NSHashTable, NSNumber;

@interface AWELiveProfileMessageManager : NSObject <AWELiveCommonMessageProtocol> {
    NSHashTable *_subscribersForAll;
    NSNumber *_roomID;
    AWELiveProfileMessageActionCreator *_messageActionCreator;
}

@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) AWELiveProfileMessageActionCreator *messageActionCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribersForAll;
- (void)setSubscribersForAll:(id)arg0;
- (void)startMessageIfNeed;
- (void)setMessageActionCreator:(id)arg0;
- (id)messageActionCreator;
- (void)loadNewMessageActionCreator;
- (void)enumerate:(id)arg0 sendMessage:(id)arg1 withDict:(id)arg2;
- (void)installCommonMessageWithRoomID:(id)arg0;
- (void)uninstallMessageChannel;
- (void)addCommonMessageubscrber:(id)arg0;
- (void)removeCommonMessageSubscrber:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dispatchMessage:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end