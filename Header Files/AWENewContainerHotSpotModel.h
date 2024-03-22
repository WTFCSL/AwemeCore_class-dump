//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWENewContainerHotSpotModel : AWEBaseApiModel {
    NSString *_hotSpotID;
    NSString *_keyword;
    long long _rankPosition;
    NSString *_tabBoardName;
    long long _viewCount;
    long long _useCount;
    long long _sentenceCategoryTag;
    NSString *_keywordDesc;
    NSString *_brandImageURLString;
    NSString *_startShootMusicID;
    NSString *_startShootStickerID;
    NSNumber *_videoCount;
    long long _originSentenceID;
}

@property (nonatomic) long long originSentenceID;
@property (copy, nonatomic) NSString *hotSpotID;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) long long rankPosition;
@property (copy, nonatomic) NSString *tabBoardName;
@property (nonatomic) long long viewCount;
@property (nonatomic) long long useCount;
@property (nonatomic) long long sentenceCategoryTag;
@property (copy, nonatomic) NSString *keywordDesc;
@property (copy, nonatomic) NSString *brandImageURLString;
@property (copy, nonatomic) NSString *startShootMusicID;
@property (copy, nonatomic) NSString *startShootStickerID;
@property (retain, nonatomic) NSNumber *videoCount;

+ (id)JSONKeyPathsByPropertyKey;

- (id)hotSpotID;
- (void)setHotSpotID:(id)arg0;
- (long long)rankPosition;
- (long long)sentenceCategoryTag;
- (id)brandImageURLString;
- (id)startShootStickerID;
- (id)startShootMusicID;
- (id)tabBoardName;
- (id)keywordDesc;
- (void)setRankPosition:(long long)arg0;
- (void)setTabBoardName:(id)arg0;
- (void)setSentenceCategoryTag:(long long)arg0;
- (void)setKeywordDesc:(id)arg0;
- (void)setBrandImageURLString:(id)arg0;
- (void)setStartShootMusicID:(id)arg0;
- (void)setStartShootStickerID:(id)arg0;
- (long long)originSentenceID;
- (void)setOriginSentenceID:(long long)arg0;
- (void).cxx_destruct;
- (void)setUseCount:(long long)arg0;
- (long long)useCount;
- (long long)viewCount;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (void)setViewCount:(long long)arg0;
- (id)videoCount;
- (void)setVideoCount:(id)arg0;

@end
