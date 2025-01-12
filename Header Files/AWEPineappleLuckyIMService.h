//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEPineappleLuckyIMService : NSObject <HTSLiveMessageSubscriber, BDUGHostIMProtocol> {
    NSMutableDictionary *_linksMap;
    NSMutableDictionary *_linksMap2;
}

@property (retain, nonatomic) NSMutableDictionary *linksMap;
@property (retain, nonatomic) NSMutableDictionary *linksMap2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (BOOL)connectWithRoomID:(id)arg0 identifier:(id)arg1;
- (BOOL)disconnectWithRoomID:(id)arg0 identifier:(id)arg1;
- (void)disconnectWithIdentifier:(id)arg0;
- (id)linksMap;
- (void)connect:(id)arg0 identifier:(id)arg1;
- (id)linksMap2;
- (void)notifyMessageReceived:(id)arg0;
- (void)setLinksMap:(id)arg0;
- (void)setLinksMap2:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end
