//
//     Generated by private class-dump
//

@class NSString, NSURL;

@interface AWEHGMessageInviteGameInfoModel : NSObject <AWEIMFriendsRoomGameInfoProtocol> {
    unsigned long long version;
    NSString *_gameName;
    long long _inviteFrom;
    NSURL *_coverImageURL;
    NSString *_scheme;
    NSString *_roomID;
    NSString *_gameID;
}

@property (copy, nonatomic) NSString *gameName;
@property (nonatomic) long long inviteFrom;
@property (copy, nonatomic) NSURL *coverImageURL;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *gameID;
@property (nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gameName;
- (void)setGameName:(id)arg0;
- (void)setGameID:(id)arg0;
- (long long)inviteFrom;
- (void)setInviteFrom:(long long)arg0;
- (void)setScheme:(id)arg0;
- (void)setVersion:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)scheme;
- (unsigned long long)version;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (void)setCoverImageURL:(id)arg0;
- (id)coverImageURL;
- (id)gameID;

@end
