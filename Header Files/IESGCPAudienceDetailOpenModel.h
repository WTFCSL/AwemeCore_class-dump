//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESGCPAudienceDetailTabControlMsg, NSNumber;

@interface IESGCPAudienceDetailOpenModel : NSObject <IESGCPAudienceDetailOpenModelProtocol> {
    BOOL _isOpenAsFullScreen;
    BOOL _canHalfScreen;
    BOOL _useBackIcon;
    NSString *_enterFrom;
    NSString *_videoID;
    NSString *_promoterID;
    NSNumber *_roomID;
    NSString *_defaultTabID;
    NSDictionary *_reportParams;
    NSString *_bizMode;
    NSString *_bizId;
    long long _bizType;
    NSDictionary *_storeKitConfig;
    NSString *_schemaEnterFrom;
    long long _isRsvp;
    NSString *_trackId;
    IESGCPAudienceDetailTabControlMsg *_tabsControlMsg;
    NSString *_promoteInstanceID;
    NSString *_parentDIContextAddress;
    NSString *_extra;
    NSString *_gameID;
    unsigned long long _promoteScene;
}

@property (copy, nonatomic) NSString *gameID;
@property (nonatomic) unsigned long long promoteScene;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *schemaEnterFrom;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *promoterID;
@property (copy, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL isOpenAsFullScreen;
@property (nonatomic) BOOL canHalfScreen;
@property (nonatomic) BOOL useBackIcon;
@property (copy, nonatomic) NSString *defaultTabID;
@property (retain, nonatomic) IESGCPAudienceDetailTabControlMsg *tabsControlMsg;
@property (copy, nonatomic) NSDictionary *reportParams;
@property (copy, nonatomic) NSDictionary *storeKitConfig;
@property (copy, nonatomic) NSString *bizMode;
@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) long long bizType;
@property (copy, nonatomic) NSString *promoteInstanceID;
@property (copy, nonatomic) NSString *parentDIContextAddress;
@property (nonatomic) long long isRsvp;
@property (retain, nonatomic) NSString *trackId;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtra:(id)arg0;
- (id)enterFrom;
- (id)defaultTabID;
- (long long)bizType;
- (void)setBizType:(long long)arg0;
- (id)reportParams;
- (void)setReportParams:(id)arg0;
- (void)setDefaultTabID:(id)arg0;
- (void)setPromoteScene:(unsigned long long)arg0;
- (void)setGameID:(id)arg0;
- (void)setPromoterID:(id)arg0;
- (id)promoteInstanceID;
- (void)setPromoteInstanceID:(id)arg0;
- (id)tabsControlMsg;
- (unsigned long long)promoteScene;
- (id)bizMode;
- (void)setBizMode:(id)arg0;
- (id)initLiveModelWithGameId:(id)arg0 enterFrom:(id)arg1 promoterId:(id)arg2 roomId:(id)arg3 reportParams:(id)arg4;
- (void)makeBaseModelWithGameId:(id)arg0 enterFrom:(id)arg1 reportParams:(id)arg2;
- (id)schemaEnterFrom;
- (id)promoterID;
- (BOOL)isOpenAsFullScreen;
- (void)setIsOpenAsFullScreen:(BOOL)arg0;
- (BOOL)canHalfScreen;
- (void)setCanHalfScreen:(BOOL)arg0;
- (BOOL)useBackIcon;
- (void)setUseBackIcon:(BOOL)arg0;
- (void)setTabsControlMsg:(id)arg0;
- (id)storeKitConfig;
- (void)setStoreKitConfig:(id)arg0;
- (id)parentDIContextAddress;
- (void)setParentDIContextAddress:(id)arg0;
- (long long)isRsvp;
- (void)setIsRsvp:(long long)arg0;
- (id)initOfficialModelWithGameId:(id)arg0 enterFrom:(id)arg1 reportParams:(id)arg2;
- (id)initVideoModelWithGameId:(id)arg0 enterFrom:(id)arg1 promoterId:(id)arg2 videoId:(id)arg3 reportParams:(id)arg4;
- (id)initTrackModelWithGameID:(id)arg0 enterFrom:(id)arg1 promoterID:(id)arg2 promoteScene:(unsigned long long)arg3 roomID:(id)arg4 videoID:(id)arg5 reportParams:(id)arg6;
- (void).cxx_destruct;
- (id)extra;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)videoID;
- (void)setVideoID:(id)arg0;
- (void)setTrackId:(id)arg0;
- (id)gameID;
- (id)trackId;
- (id)bizId;
- (void)setBizId:(id)arg0;

@end