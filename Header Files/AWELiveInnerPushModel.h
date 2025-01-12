//
//     Generated by private class-dump
//

@class AWELiveFormatExtra, NSString, NSNumber, AWEURLModel;

@interface AWELiveInnerPushModel : AWEBaseApiModel {
    AWEURLModel *_avatar;
    NSString *_nickname;
    NSString *_schema;
    NSString *_content;
    NSNumber *_anchorID;
    NSNumber *_roomID;
    NSString *_pushSource;
    AWELiveFormatExtra *_formatExtra;
    unsigned long long _anchorType;
    long long _pushContentType;
}

@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *anchorID;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *pushSource;
@property (retain, nonatomic) AWELiveFormatExtra *formatExtra;
@property (nonatomic) unsigned long long anchorType;
@property (nonatomic) long long pushContentType;

+ (id)avatarModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)enterMethod;
- (id)enterFrom;
- (id)anchorID;
- (id)extraParams;
- (id)enterFromMerge;
- (void)setAnchorID:(id)arg0;
- (id)requestPage;
- (id)liveReason;
- (BOOL)isVSLiveMergePremiere;
- (BOOL)hotPush;
- (id)formatExtra;
- (id)vsEpisodeStage;
- (BOOL)isVSNew;
- (long long)VSMode;
- (id)anchorTypeStr;
- (id)pushSource;
- (id)vsSeasonID;
- (long long)pushContentType;
- (void)addQueryValue:(id)arg0 forKey:(id)arg1;
- (id)getURLQueryValueWithURL:(id)arg0 queryKey:(id)arg1;
- (void)setPushSource:(id)arg0;
- (void)setFormatExtra:(id)arg0;
- (void)setPushContentType:(long long)arg0;
- (void)setSchema:(id)arg0;
- (id)nickname;
- (unsigned long long)anchorType;
- (void).cxx_destruct;
- (void)setNickname:(id)arg0;
- (id)content;
- (void)setContent:(id)arg0;
- (id)schema;
- (id)pushType;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (BOOL)mustShow;
- (void)setAnchorType:(unsigned long long)arg0;

@end
