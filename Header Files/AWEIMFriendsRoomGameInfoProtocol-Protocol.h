//
//     Generated by private class-dump
//

@class NSString, NSURL;

@protocol AWEIMFriendsRoomGameInfoProtocol <NSObject>

@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *gameName;
@property (nonatomic) long long inviteFrom;
@property (copy, nonatomic) NSURL *coverImageURL;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *gameID;

- (id)gameName;
- (void)setGameName:(id)arg0;
- (void)setGameID:(id)arg0;
- (long long)inviteFrom;
- (void)setInviteFrom:(long long)arg0;
- (void)setScheme:(id)arg0;
- (void)setVersion:(unsigned long long)arg0;
- (id)scheme;
- (unsigned long long)version;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (void)setCoverImageURL:(id)arg0;
- (id)coverImageURL;
- (id)gameID;

@end
