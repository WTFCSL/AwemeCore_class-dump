//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEGeneralFilmTelevisionTagModel;

@interface AWEGeneralFilmTVEpisodeInfoModel : AWEBaseApiModel {
    BOOL _isVip;
    BOOL _isNew;
    NSString *_albumID;
    NSString *_definition;
    NSString *_desc;
    NSNumber *_duration;
    NSString *_episodeID;
    NSString *_name;
    NSNumber *_onlineTime;
    NSNumber *_opening;
    long long _paymentStatus;
    NSString *_paymentString;
    NSString *_schema;
    long long _schemaType;
    NSNumber *_episodeNumber;
    NSString *_subTitle;
    NSString *_title;
    NSString *_playURL;
    NSString *_videoID;
    NSString *_episodeTagIconUrl;
    long long _actionType;
    AWEGeneralFilmTelevisionTagModel *_longVideoTag;
    AWEGeneralFilmTelevisionTagModel *_longVideoLightTag;
}

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *onlineTime;
@property (retain, nonatomic) NSNumber *opening;
@property (nonatomic) long long paymentStatus;
@property (copy, nonatomic) NSString *paymentString;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long schemaType;
@property (retain, nonatomic) NSNumber *episodeNumber;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *playURL;
@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *episodeTagIconUrl;
@property (nonatomic) BOOL isVip;
@property (nonatomic) BOOL isNew;
@property (nonatomic) long long actionType;
@property (retain, nonatomic) AWEGeneralFilmTelevisionTagModel *longVideoTag;
@property (retain, nonatomic) AWEGeneralFilmTelevisionTagModel *longVideoLightTag;

+ (id /* block */)isEqualBlock;
+ (id)longVideoTagJSONTransformer;
+ (id)longVideoLightTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setSchemaType:(long long)arg0;
- (BOOL)isVip;
- (void)setIsVip:(BOOL)arg0;
- (void)setOpening:(id)arg0;
- (void)setAlbumID:(id)arg0;
- (void)setEpisodeID:(id)arg0;
- (id)paymentString;
- (void)setPaymentString:(id)arg0;
- (id)longVideoTag;
- (void)setLongVideoTag:(id)arg0;
- (id)longVideoLightTag;
- (void)setLongVideoLightTag:(id)arg0;
- (id)onlineTime;
- (void)setOnlineTime:(id)arg0;
- (id)episodeTagIconUrl;
- (void)setEpisodeTagIconUrl:(id)arg0;
- (void)setSchema:(id)arg0;
- (id)desc;
- (void)setActionType:(long long)arg0;
- (long long)actionType;
- (void).cxx_destruct;
- (void)setIsNew:(BOOL)arg0;
- (id)definition;
- (BOOL)isNew;
- (id)episodeNumber;
- (id)duration;
- (id)title;
- (void)setName:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setEpisodeNumber:(id)arg0;
- (id)schema;
- (void)setDesc:(id)arg0;
- (id)name;
- (long long)schemaType;
- (void)setTitle:(id)arg0;
- (void)setDuration:(id)arg0;
- (long long)paymentStatus;
- (void)setPaymentStatus:(long long)arg0;
- (id)albumID;
- (id)videoID;
- (void)setVideoID:(id)arg0;
- (id)opening;
- (id)playURL;
- (void)setPlayURL:(id)arg0;
- (void)setDefinition:(id)arg0;
- (id)episodeID;

@end
