//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWETaskModel;

@interface AWEJSBridgeResponseModel : MTLModel <MTLJSONSerializing> {
    BOOL _showStickerPanel;
    BOOL _isAssignmentMission;
    BOOL _hasShoppingCartPermission;
    BOOL _isShoppingCartOverused;
    NSString *_type;
    NSString *_challengeID;
    NSString *_musicID;
    NSString *_effectId;
    NSString *_charityID;
    NSString *_mvId;
    NSString *_referString;
    NSString *_uid;
    NSString *_nickName;
    NSString *_starUID;
    NSString *_starAtlasOrderID;
    NSNumber *_channel;
    NSString *_shootWay;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_shootEntrance;
    NSString *_musicSelectFrom;
    NSString *_avatarDecorationID;
    AWETaskModel *_mission;
    NSString *_missionID;
    NSString *_missionType;
    NSString *_missionName;
    NSString *_starAtlasExtra;
    NSString *_dynamicCameraSchema;
    NSString *_magic3ComponentId;
    NSString *_magic3Source;
    NSString *_magic3ActivityId;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *charityID;
@property (copy, nonatomic) NSString *mvId;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *starUID;
@property (copy, nonatomic) NSString *starAtlasOrderID;
@property (retain, nonatomic) NSNumber *channel;
@property (nonatomic) BOOL showStickerPanel;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *shootEntrance;
@property (copy, nonatomic) NSString *musicSelectFrom;
@property (copy, nonatomic) NSString *avatarDecorationID;
@property (retain, nonatomic) AWETaskModel *mission;
@property (copy, nonatomic) NSString *missionID;
@property (copy, nonatomic) NSString *missionType;
@property (copy, nonatomic) NSString *missionName;
@property (copy, nonatomic) NSString *starAtlasExtra;
@property (nonatomic) BOOL isAssignmentMission;
@property (nonatomic) BOOL hasShoppingCartPermission;
@property (nonatomic) BOOL isShoppingCartOverused;
@property (copy, nonatomic) NSString *dynamicCameraSchema;
@property (copy, nonatomic) NSString *magic3ComponentId;
@property (copy, nonatomic) NSString *magic3Source;
@property (copy, nonatomic) NSString *magic3ActivityId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)missionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (void)setShootWay:(id)arg0;
- (id)musicID;
- (id)mission;
- (void)setMission:(id)arg0;
- (id)starAtlasExtra;
- (void)setStarAtlasExtra:(id)arg0;
- (id)mvId;
- (void)setMvId:(id)arg0;
- (id)shootWay;
- (void)setMusicID:(id)arg0;
- (id)starAtlasOrderID;
- (id)dynamicCameraSchema;
- (void)setDynamicCameraSchema:(id)arg0;
- (BOOL)hasShoppingCartPermission;
- (void)setHasShoppingCartPermission:(BOOL)arg0;
- (BOOL)isShoppingCartOverused;
- (void)setIsShoppingCartOverused:(BOOL)arg0;
- (id)missionType;
- (void)setMissionType:(id)arg0;
- (id)missionID;
- (void)setMissionID:(id)arg0;
- (id)missionName;
- (void)setMissionName:(id)arg0;
- (id)avatarDecorationID;
- (void)setStarAtlasOrderID:(id)arg0;
- (void)setAvatarDecorationID:(id)arg0;
- (BOOL)isAssignmentMission;
- (void)setIsAssignmentMission:(BOOL)arg0;
- (id)magic3ComponentId;
- (id)magic3Source;
- (id)magic3ActivityId;
- (void)setMagic3ComponentId:(id)arg0;
- (void)setMagic3Source:(id)arg0;
- (void)setMagic3ActivityId:(id)arg0;
- (id)shootEntrance;
- (id)musicSelectFrom;
- (id)starUID;
- (BOOL)showStickerPanel;
- (void)setShowStickerPanel:(BOOL)arg0;
- (void)setMusicSelectFrom:(id)arg0;
- (void)setShootEntrance:(id)arg0;
- (id)charityID;
- (void)setCharityID:(id)arg0;
- (void)setStarUID:(id)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (id)channel;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (id)type;
- (void)setType:(id)arg0;
- (id)nickName;
- (id)effectId;
- (id)challengeID;
- (void)setChallengeID:(id)arg0;
- (void)setEffectId:(id)arg0;

@end
