//
//     Generated by private class-dump
//

@class NSString;

@interface AWEBatManRoomInviteModel : NSObject <AWEIMBatManInfoProtocol> {
    NSString *_gameName;
    NSString *_coverImageURL;
    NSString *_gameID;
    NSString *_roomID;
    NSString *_scheme;
    NSString *_outerScheme;
    NSString *_callingPushScheme;
    NSString *_callingPushOuterScheme;
}

@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *coverImageURL;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *outerScheme;
@property (copy, nonatomic) NSString *callingPushScheme;
@property (copy, nonatomic) NSString *callingPushOuterScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gameName;
- (void)setGameName:(id)arg0;
- (void)setGameID:(id)arg0;
- (void)setOuterScheme:(id)arg0;
- (void)setCallingPushScheme:(id)arg0;
- (void)setCallingPushOuterScheme:(id)arg0;
- (id)callingPushScheme;
- (id)callingPushOuterScheme;
- (id)outerScheme;
- (void)setScheme:(id)arg0;
- (void).cxx_destruct;
- (id)scheme;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (void)setCoverImageURL:(id)arg0;
- (id)coverImageURL;
- (id)gameID;

@end