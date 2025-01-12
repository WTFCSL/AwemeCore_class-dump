//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEMusicDiversionAuthorInfo, AWEURLModel;

@interface AWEMusicDiversionInfo : AWEBaseApiModel {
    BOOL _isSameSong;
    BOOL _canMatchedSongShowInHeader;
    int _hitStrategy;
    long long _diversionCode;
    NSString *_lunaSongID;
    AWEURLModel *_coverURL;
    long long _hitStrategyV2;
    NSString *_author;
    NSString *_title;
    NSArray *_lunaColorGradientInfo;
    long long _lunaButtonType;
    long long _collectStatus;
    AWEMusicDiversionAuthorInfo *_lunaAuthorInfo;
}

@property (nonatomic) long long diversionCode;
@property (copy, nonatomic) NSString *lunaSongID;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (nonatomic) int hitStrategy;
@property (nonatomic) long long hitStrategyV2;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *lunaColorGradientInfo;
@property (nonatomic) long long lunaButtonType;
@property (nonatomic) long long collectStatus;
@property (nonatomic) BOOL isSameSong;
@property (nonatomic) BOOL canMatchedSongShowInHeader;
@property (retain, nonatomic) AWEMusicDiversionAuthorInfo *lunaAuthorInfo;

+ (id)coverURLJSONTransformer;
+ (id)lunaSongIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)lunaSongID;
- (void)setLunaSongID:(id)arg0;
- (id)lunaColorGradientInfo;
- (void)setLunaColorGradientInfo:(id)arg0;
- (int)hitStrategy;
- (void)setHitStrategy:(int)arg0;
- (long long)hitStrategyV2;
- (void)setHitStrategyV2:(long long)arg0;
- (long long)diversionCode;
- (void)setDiversionCode:(long long)arg0;
- (long long)lunaButtonType;
- (void)setLunaButtonType:(long long)arg0;
- (long long)collectStatus;
- (void)setCollectStatus:(long long)arg0;
- (BOOL)isSameSong;
- (void)setIsSameSong:(BOOL)arg0;
- (BOOL)canMatchedSongShowInHeader;
- (void)setCanMatchedSongShowInHeader:(BOOL)arg0;
- (id)lunaAuthorInfo;
- (void)setLunaAuthorInfo:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)author;
- (void)setAuthor:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end
