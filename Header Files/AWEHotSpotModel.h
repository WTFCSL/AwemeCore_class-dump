//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEHotSpotModel : AWEBaseApiModel <AWEHotSpotBrandIconModelProtocol> {
    BOOL _isAD;
    BOOL _grayFontColor;
    NSString *_sentenceID;
    NSString *_hotSpotWord;
    long long _hotSpotHotValue;
    long long _hotSpotRank;
    NSString *_aladdinID;
    unsigned long long _type;
    NSString *_schema;
    long long _videoCount;
    long long _liveCount;
    NSNumber *_likeCount;
    double _updateTime;
    unsigned long long _cardStyle;
    NSString *_header;
    NSString *_listTitle;
    NSString *_listSchema;
    NSString *_badgeHeader;
}

@property (copy, nonatomic) NSString *sentenceID;
@property (copy, nonatomic) NSString *hotSpotWord;
@property (nonatomic) long long hotSpotHotValue;
@property (nonatomic) long long hotSpotRank;
@property (nonatomic) BOOL isAD;
@property (readonly, copy, nonatomic) NSString *aladdinID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long videoCount;
@property (nonatomic) long long liveCount;
@property (copy, nonatomic) NSNumber *likeCount;
@property (nonatomic) double updateTime;
@property (nonatomic) unsigned long long cardStyle;
@property (copy, nonatomic) NSString *header;
@property (nonatomic) BOOL grayFontColor;
@property (copy, nonatomic) NSString *listTitle;
@property (copy, nonatomic) NSString *listSchema;
@property (copy, nonatomic) NSString *badgeHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aladdinIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setLikeCount:(id)arg0;
- (long long)liveCount;
- (id)hotSpotWord;
- (void)setHotSpotWord:(id)arg0;
- (id)sentenceID;
- (void)setSentenceID:(id)arg0;
- (id)verticalBoardTabModel;
- (long long)hotSpotRank;
- (void)setHotSpotRank:(long long)arg0;
- (id)aladdinID;
- (long long)hotSpotHotValue;
- (void)setHotSpotHotValue:(long long)arg0;
- (BOOL)isAD;
- (void)setIsAD:(BOOL)arg0;
- (void)setLiveCount:(long long)arg0;
- (BOOL)grayFontColor;
- (void)setGrayFontColor:(BOOL)arg0;
- (id)listSchema;
- (void)setListSchema:(id)arg0;
- (id)badgeHeader;
- (void)setBadgeHeader:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (double)updateTime;
- (id)header;
- (void)setType:(unsigned long long)arg0;
- (void)setHeader:(id)arg0;
- (id)schema;
- (void)setUpdateTime:(double)arg0;
- (id)likeCount;
- (long long)videoCount;
- (void)setVideoCount:(long long)arg0;
- (id)listTitle;
- (void)setListTitle:(id)arg0;
- (unsigned long long)cardStyle;
- (void)setCardStyle:(unsigned long long)arg0;

@end
