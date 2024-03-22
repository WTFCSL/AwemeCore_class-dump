//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber, AWEURLModel;

@interface AWEAwemeTextExtraModel : AWEBaseApiModel <AWEStudioAwemeTextExtraModelProtocol> {
    BOOL _isCommerce;
    NSNumber *_start;
    NSNumber *_end;
    NSNumber *_captionStart;
    NSNumber *_captionEnd;
    NSString *_userID;
    NSString *_hashtagName;
    NSString *_hashtagId;
    NSString *_hotSpotText;
    NSString *_hotSpotId;
    NSString *_awemeId;
    long long _type;
    long long _followStatus;
    long long _subtype;
    NSNumber *_stickerID;
    AWEURLModel *_stickerURL;
    unsigned long long _stickerType;
    NSString *_liveData;
    NSDictionary *_liveDict;
    NSString *_searchText;
    NSString *_searchId;
    NSNumber *_searchHideWords;
    NSNumber *_tagMentionNeedFold;
    NSNumber *_brandStatus;
    NSString *_searchExtra;
    NSString *_openURL;
}

@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) NSNumber *end;
@property (retain, nonatomic) NSNumber *captionStart;
@property (retain, nonatomic) NSNumber *captionEnd;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *hashtagName;
@property (retain, nonatomic) NSString *hashtagId;
@property (retain, nonatomic) NSString *awemeId;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long type;
@property (nonatomic) long long subtype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) NSNumber *end;
@property (retain, nonatomic) NSNumber *captionStart;
@property (retain, nonatomic) NSNumber *captionEnd;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *hashtagName;
@property (retain, nonatomic) NSString *hashtagId;
@property (retain, nonatomic) NSString *hotSpotText;
@property (retain, nonatomic) NSString *hotSpotId;
@property (retain, nonatomic) NSString *awemeId;
@property (nonatomic) long long type;
@property (nonatomic) long long followStatus;
@property (nonatomic) long long subtype;
@property (nonatomic) BOOL isCommerce;
@property (retain, nonatomic) NSNumber *stickerID;
@property (retain, nonatomic) AWEURLModel *stickerURL;
@property (nonatomic) unsigned long long stickerType;
@property (retain, nonatomic) NSString *liveData;
@property (retain, nonatomic) NSDictionary *liveDict;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSNumber *searchHideWords;
@property (retain, nonatomic) NSNumber *tagMentionNeedFold;
@property (retain, nonatomic) NSNumber *brandStatus;
@property (copy, nonatomic) NSString *searchExtra;
@property (copy, nonatomic) NSString *openURL;

+ (id)dictFromJsonString:(id)arg0;
+ (id)liveDictJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)stickerURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)followStatus;
- (id)searchId;
- (void)setSearchId:(id)arg0;
- (void)setFollowStatus:(long long)arg0;
- (BOOL)isCommerce;
- (id)searchExtra;
- (void)setAwemeId:(id)arg0;
- (void)setHashtagName:(id)arg0;
- (id)hotSpotText;
- (void)setHotSpotText:(id)arg0;
- (id)hotSpotId;
- (void)setHotSpotId:(id)arg0;
- (void)setOpenURL:(id)arg0;
- (id)hashtagId;
- (id)searchHideWords;
- (void)setStickerType:(unsigned long long)arg0;
- (id)awemeId;
- (void)setIsCommerce:(BOOL)arg0;
- (void)setSearchHideWords:(id)arg0;
- (void)setHashtagId:(id)arg0;
- (id)stickerID;
- (void)setStickerID:(id)arg0;
- (void)setLiveData:(id)arg0;
- (id)liveData;
- (id)liveDict;
- (id)captionStart;
- (void)setCaptionStart:(id)arg0;
- (id)captionEnd;
- (void)setCaptionEnd:(id)arg0;
- (id)stickerURL;
- (void)setStickerURL:(id)arg0;
- (void)setLiveDict:(id)arg0;
- (id)tagMentionNeedFold;
- (void)setTagMentionNeedFold:(id)arg0;
- (id)brandStatus;
- (void)setBrandStatus:(id)arg0;
- (void)setSearchExtra:(id)arg0;
- (void)setEnd:(id)arg0;
- (id)userID;
- (id)end;
- (void)setStart:(id)arg0;
- (long long)subtype;
- (id)searchText;
- (void)setSearchText:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setUserID:(id)arg0;
- (void)setType:(long long)arg0;
- (void)setSubtype:(long long)arg0;
- (id)start;
- (id)openURL;
- (id)hashtagName;
- (unsigned long long)stickerType;

@end
