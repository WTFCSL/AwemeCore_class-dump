//
//     Generated by private class-dump
//

@class IESGCPPBGameDetailRelatedGameInfo, NSString, UIColor, NSNumber;

@interface IESGCPDetailSameGameSingleViewModel : NSObject {
    BOOL _isHeliumGame;
    NSNumber *_roomId;
    NSString *_unsupportedDownloadToast;
    IESGCPPBGameDetailRelatedGameInfo *_pbModel;
}

@property (nonatomic) BOOL isHeliumGame;
@property (retain, nonatomic) IESGCPPBGameDetailRelatedGameInfo *pbModel;
@property (readonly, copy, nonatomic) NSString *iconUrl;
@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, copy, nonatomic) NSString *tagName;
@property (readonly, copy, nonatomic) NSString *desc;
@property (readonly, copy, nonatomic) NSString *buttonText;
@property (readonly, nonatomic) UIColor *buttonTextColor;
@property (readonly, nonatomic) UIColor *buttonBackgroundColor;
@property (retain, nonatomic) NSNumber *roomId;
@property (readonly, copy, nonatomic) NSString *gameId;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, nonatomic) BOOL canOpenAppStore;
@property (readonly, copy, nonatomic) NSString *activeLink;
@property (readonly, copy, nonatomic) NSString *openGameURL;
@property (readonly, copy, nonatomic) NSString *iosAppId;
@property (readonly, copy, nonatomic) NSString *gameRating;
@property (copy, nonatomic) NSString *unsupportedDownloadToast;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)activeLink;
- (id)gameName;
- (id)iconUrl;
- (id)gameId;
- (id)iosAppId;
- (id)openGameURL;
- (id)unsupportedDownloadToast;
- (id)pbModel;
- (void)setPbModel:(id)arg0;
- (BOOL)canOpenAppStore;
- (BOOL)isHeliumGame;
- (void)trackHeliumGameEntranceShow;
- (void)trackHeliumGameEntranceClick;
- (id)heliumGameTrackParams;
- (void)handleHeliumGameClickAction;
- (void)handleAppClickActionWithCompletion:(id /* block */)arg0;
- (void)handleHeliumGameShowAction;
- (id)gameRating;
- (id)initWithPbModel:(id)arg0;
- (void)setIsHeliumGame:(BOOL)arg0;
- (void)setUnsupportedDownloadToast:(id)arg0;
- (id)desc;
- (void).cxx_destruct;
- (id)buttonTextColor;
- (id)buttonText;
- (id)schema;
- (id)tagName;
- (id)buttonBackgroundColor;

@end