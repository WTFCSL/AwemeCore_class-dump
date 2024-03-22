//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, NSArray, IESECLiveOpenSchemaModel, NSNumber;

@interface IESECLiveRecommendModel : MTLModel <MTLJSONSerializing> {
    NSString *_liveAuthorUID;
    NSString *_liveAuthorSecUID;
    NSString *_roomID;
    long long _liveStatus;
    NSString *_liveDescription;
    IESECURLModel *_liveAuthorIcon;
    IESECURLModel *_liveCoverImage;
    NSString *_liveRoomTitle;
    IESECURLModel *_liveAvatarImage;
    NSString *_liveAuthorNickName;
    NSNumber *_liveProductCount;
    NSNumber *_totalCount;
    NSNumber *_number;
    long long _followStatus;
    NSArray *_relationTags;
    IESECLiveOpenSchemaModel *_openSchema;
    NSString *_streamData;
}

@property (copy, nonatomic) NSString *liveAuthorUID;
@property (copy, nonatomic) NSString *liveAuthorSecUID;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) long long liveStatus;
@property (copy, nonatomic) NSString *liveDescription;
@property (retain, nonatomic) IESECURLModel *liveAuthorIcon;
@property (retain, nonatomic) IESECURLModel *liveCoverImage;
@property (copy, nonatomic) NSString *liveRoomTitle;
@property (retain, nonatomic) IESECURLModel *liveAvatarImage;
@property (copy, nonatomic) NSString *liveAuthorNickName;
@property (retain, nonatomic) NSNumber *liveProductCount;
@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSNumber *number;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) NSArray *relationTags;
@property (copy, nonatomic) IESECLiveOpenSchemaModel *openSchema;
@property (copy, nonatomic) NSString *streamData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)followStatus;
- (void)setFollowStatus:(long long)arg0;
- (void)setLiveCoverImage:(id)arg0;
- (id)liveCoverImage;
- (void)setOpenSchema:(id)arg0;
- (id)openSchema;
- (void)setLiveStatus:(long long)arg0;
- (void)setStreamData:(id)arg0;
- (id)relationTags;
- (id)liveDescription;
- (void)setLiveDescription:(id)arg0;
- (void)setRelationTags:(id)arg0;
- (id)liveAuthorUID;
- (void)setLiveAuthorUID:(id)arg0;
- (id)liveAuthorSecUID;
- (void)setLiveAuthorSecUID:(id)arg0;
- (id)liveAuthorIcon;
- (void)setLiveAuthorIcon:(id)arg0;
- (id)liveRoomTitle;
- (void)setLiveRoomTitle:(id)arg0;
- (id)liveAvatarImage;
- (void)setLiveAvatarImage:(id)arg0;
- (id)liveAuthorNickName;
- (void)setLiveAuthorNickName:(id)arg0;
- (id)liveProductCount;
- (void)setLiveProductCount:(id)arg0;
- (id)number;
- (void)setNumber:(id)arg0;
- (void).cxx_destruct;
- (id)totalCount;
- (long long)liveStatus;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)streamData;
- (void)setTotalCount:(id)arg0;

@end
