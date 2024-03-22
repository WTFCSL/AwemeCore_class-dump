//
//     Generated by private class-dump
//

@class NSNumber, IESLiveIMVenueMessageActionCreator;

@interface IESLiveHybridIMMessageHandler : NSObject {
    NSNumber *_currentRoomID;
    IESLiveIMVenueMessageActionCreator *_messageCreator;
}

@property (copy, nonatomic) NSNumber *currentRoomID;
@property (retain, nonatomic) IESLiveIMVenueMessageActionCreator *messageCreator;

+ (id)sharedInstance;

- (id)currentRoomID;
- (BOOL)disconnectWithRoomID:(id)arg0;
- (void)addSubscriber:(id)arg0 forMessageNames:(id)arg1;
- (void)setCurrentRoomID:(id)arg0;
- (id)messageCreator;
- (void)setMessageCreator:(id)arg0;
- (BOOL)connectWithRoomID:(id)arg0 scene:(id)arg1 service:(id)arg2 method:(id)arg3 customParams:(id)arg4;
- (void).cxx_destruct;

@end
