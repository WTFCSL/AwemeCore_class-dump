//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESGCPAudienceDetailTabControlMsg, NSNumber;

@protocol IESGCPAudienceDetailOpenModelProtocol <NSObject>

+ (id)new;

@property (readonly, copy, nonatomic) NSString *gameID;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *schemaEnterFrom;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *promoterID;
@property (readonly, nonatomic) unsigned long long promoteScene;
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

- (void)setExtra:(id)arg0;
- (id)enterFrom;
- (id)defaultTabID;
- (long long)bizType;
- (void)setBizType:(long long)arg0;
- (id)reportParams;
- (void)setReportParams:(id)arg0;
- (void)setDefaultTabID:(id)arg0;
- (void)setPromoterID:(id)arg0;
- (id)promoteInstanceID;
- (void)setPromoteInstanceID:(id)arg0;
- (id)tabsControlMsg;
- (unsigned long long)promoteScene;
- (id)bizMode;
- (void)setBizMode:(id)arg0;
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
- (id)init;
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
