//
//     Generated by private class-dump
//

@class NSString, IESGCPPBGameDetailOfficialAccount;

@interface IESGCPDetailReserveOfficalUserViewModel : IESGCPDetailBaseViewModel {
    BOOL _isFollow;
    BOOL _isAnchorScene;
    BOOL _hasShown;
    IESGCPPBGameDetailOfficialAccount *_officialAccount;
    NSString *_iconUrl;
    NSString *_title;
    NSString *_fansNum;
    NSString *_officialUserId;
    NSString *_officialSecUserId;
    NSString *_gameId;
    NSString *_gameName;
}

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *fansNum;
@property (nonatomic) BOOL isFollow;
@property (copy, nonatomic) NSString *officialUserId;
@property (copy, nonatomic) NSString *officialSecUserId;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (nonatomic) BOOL isAnchorScene;
@property (nonatomic) BOOL hasShown;
@property (readonly, nonatomic) IESGCPPBGameDetailOfficialAccount *officialAccount;

- (id)gameName;
- (void)setGameName:(id)arg0;
- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (void)trackShowEvent;
- (id)gameId;
- (void)setGameId:(id)arg0;
- (BOOL)isFollow;
- (void)setIsFollow:(BOOL)arg0;
- (void)followAction;
- (id)officialAccount;
- (id)officialSecUserId;
- (id)commonReportParams;
- (id)officialUserId;
- (id)fansNum;
- (void)trackFollowAction:(BOOL)arg0;
- (BOOL)isAnchorScene;
- (void)setFansNum:(id)arg0;
- (void)setOfficialUserId:(id)arg0;
- (void)setOfficialSecUserId:(id)arg0;
- (void)setIsAnchorScene:(BOOL)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setContent:(id)arg0;
- (id)subtitle;
- (void)setTitle:(id)arg0;
- (void)setHasShown:(BOOL)arg0;
- (BOOL)hasShown;

@end