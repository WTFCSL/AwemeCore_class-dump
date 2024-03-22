//
//     Generated by private class-dump
//

@class NSString, IESLiveGCPAppStoreInfo;

@interface IESLiveGameCPAdCardEnterRoomModel : NSObject {
    NSString *_gameID;
    NSString *_gameName;
    NSString *_activeLink;
    IESLiveGCPAppStoreInfo *_appStoreInfo;
    long long _gameCPAdCardType;
}

@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *activeLink;
@property (retain, nonatomic) IESLiveGCPAppStoreInfo *appStoreInfo;
@property (nonatomic) long long gameCPAdCardType;

- (void)setActiveLink:(id)arg0;
- (id)activeLink;
- (id)gameName;
- (void)setGameName:(id)arg0;
- (void)setGameID:(id)arg0;
- (long long)gameCPAdCardType;
- (id)initWithDict:(id)arg0 gameName:(id)arg1 gameId:(id)arg2;
- (id)appStoreInfo;
- (void)setGameCPAdCardType:(long long)arg0;
- (void)setAppStoreInfo:(id)arg0;
- (void).cxx_destruct;
- (id)gameID;

@end
