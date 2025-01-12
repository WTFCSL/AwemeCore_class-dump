//
//     Generated by private class-dump
//

@class IESGCPExplainCardMiniPlayMeta, NSString, IESGCPExplainCardMiniGameMeta, IESGCPExplainCardTag, IESGCPExplainCardFeaturedContent, IESGCPExplainCardAtmosphereContent, IESGCPExplainCardImageBundler, NSMutableArray, IESGCPExplainCardReserveItem, IESGCPExplainCardDisplayInfo;

@interface IESGCPExplainCardMessage : NSObject {
    BOOL _isForbidJumpIosApp;
    BOOL _hasPlatformGift;
    BOOL _isShowAnimate;
    BOOL _isInPreDownloadPeriod;
    int _introduceTimeLimit;
    unsigned long long _type;
    NSString *_gameImage;
    NSString *_gameName;
    NSMutableArray *_gameTagNamesArray;
    NSString *_gameBackgroundColor;
    NSString *_gameId;
    NSString *_iosAppId;
    NSString *_activeLink;
    NSString *_iosSalePoint;
    NSString *_openGameURL;
    long long _introduceStartTime;
    long long _animateStartTime;
    long long _animateDuration;
    long long _downloadCount;
    NSString *_propIcon;
    NSString *_propName;
    NSString *_propId;
    long long _marketPrice;
    long long _sellingPrice;
    long long _propType;
    long long _gameAccessType;
    long long _supportPlatforms;
    NSString *_promoteInstanceID;
    IESGCPExplainCardReserveItem *_reserveItem;
    IESGCPExplainCardMiniGameMeta *_miniGameMeta;
    IESGCPExplainCardMiniPlayMeta *_miniPlayMeta;
    IESGCPExplainCardImageBundler *_gameIcon;
    IESGCPExplainCardAtmosphereContent *_atmosphereContent;
    IESGCPExplainCardFeaturedContent *_featuredContent;
    IESGCPExplainCardTag *_tag;
    IESGCPExplainCardDisplayInfo *_timerDisplayInfo;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *gameImage;
@property (copy, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSMutableArray *gameTagNamesArray;
@property (copy, nonatomic) NSString *gameBackgroundColor;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *iosAppId;
@property (copy, nonatomic) NSString *activeLink;
@property (copy, nonatomic) NSString *iosSalePoint;
@property (nonatomic) BOOL isForbidJumpIosApp;
@property (nonatomic) BOOL hasPlatformGift;
@property (copy, nonatomic) NSString *openGameURL;
@property (nonatomic) int introduceTimeLimit;
@property (nonatomic) long long introduceStartTime;
@property (nonatomic) BOOL isShowAnimate;
@property (nonatomic) long long animateStartTime;
@property (nonatomic) long long animateDuration;
@property (nonatomic) long long downloadCount;
@property (copy, nonatomic) NSString *propIcon;
@property (copy, nonatomic) NSString *propName;
@property (copy, nonatomic) NSString *propId;
@property (nonatomic) long long marketPrice;
@property (nonatomic) long long sellingPrice;
@property (nonatomic) long long propType;
@property (nonatomic) long long gameAccessType;
@property (nonatomic) long long supportPlatforms;
@property (copy, nonatomic) NSString *promoteInstanceID;
@property (retain, nonatomic) IESGCPExplainCardReserveItem *reserveItem;
@property (retain, nonatomic) IESGCPExplainCardMiniGameMeta *miniGameMeta;
@property (retain, nonatomic) IESGCPExplainCardMiniPlayMeta *miniPlayMeta;
@property (retain, nonatomic) IESGCPExplainCardImageBundler *gameIcon;
@property (retain, nonatomic) IESGCPExplainCardAtmosphereContent *atmosphereContent;
@property (retain, nonatomic) IESGCPExplainCardFeaturedContent *featuredContent;
@property (retain, nonatomic) IESGCPExplainCardTag *tag;
@property (retain, nonatomic) IESGCPExplainCardDisplayInfo *timerDisplayInfo;
@property (nonatomic) BOOL isInPreDownloadPeriod;

- (void)setActiveLink:(id)arg0;
- (id)activeLink;
- (id)gameName;
- (void)setGameName:(id)arg0;
- (long long)propType;
- (void)setPropType:(long long)arg0;
- (id)propId;
- (void)setPropId:(id)arg0;
- (long long)animateDuration;
- (void)setDownloadCount:(long long)arg0;
- (long long)supportPlatforms;
- (id)gameId;
- (void)setGameId:(id)arg0;
- (long long)marketPrice;
- (void)setMarketPrice:(long long)arg0;
- (id)promoteInstanceID;
- (void)setPromoteInstanceID:(id)arg0;
- (id)gameIcon;
- (void)setGameIcon:(id)arg0;
- (id)gameImage;
- (void)setGameImage:(id)arg0;
- (id)gameTagNamesArray;
- (void)setGameTagNamesArray:(id)arg0;
- (id)gameBackgroundColor;
- (void)setGameBackgroundColor:(id)arg0;
- (id)iosAppId;
- (void)setIosAppId:(id)arg0;
- (id)iosSalePoint;
- (void)setIosSalePoint:(id)arg0;
- (BOOL)isForbidJumpIosApp;
- (void)setIsForbidJumpIosApp:(BOOL)arg0;
- (BOOL)hasPlatformGift;
- (void)setHasPlatformGift:(BOOL)arg0;
- (id)openGameURL;
- (void)setOpenGameURL:(id)arg0;
- (int)introduceTimeLimit;
- (void)setIntroduceTimeLimit:(int)arg0;
- (long long)introduceStartTime;
- (void)setIntroduceStartTime:(long long)arg0;
- (BOOL)isShowAnimate;
- (void)setIsShowAnimate:(BOOL)arg0;
- (long long)animateStartTime;
- (void)setAnimateStartTime:(long long)arg0;
- (void)setAnimateDuration:(long long)arg0;
- (id)propIcon;
- (void)setPropIcon:(id)arg0;
- (long long)sellingPrice;
- (void)setSellingPrice:(long long)arg0;
- (long long)gameAccessType;
- (void)setGameAccessType:(long long)arg0;
- (void)setSupportPlatforms:(long long)arg0;
- (id)reserveItem;
- (void)setReserveItem:(id)arg0;
- (id)miniGameMeta;
- (void)setMiniGameMeta:(id)arg0;
- (id)miniPlayMeta;
- (void)setMiniPlayMeta:(id)arg0;
- (id)atmosphereContent;
- (void)setAtmosphereContent:(id)arg0;
- (id)timerDisplayInfo;
- (void)setTimerDisplayInfo:(id)arg0;
- (BOOL)isInPreDownloadPeriod;
- (void)setIsInPreDownloadPeriod:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setTag:(id)arg0;
- (id)tag;
- (void)setType:(unsigned long long)arg0;
- (id)featuredContent;
- (void)setFeaturedContent:(id)arg0;
- (id)propName;
- (void)setPropName:(id)arg0;
- (long long)downloadCount;

@end
