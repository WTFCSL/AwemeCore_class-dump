//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESLiveImage, NSNumber;

@interface IESLiveKTVSEIOrderInfo : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    unsigned long long _ksongSecondLyric;
    unsigned long long _ktvLyric;
    NSString *_highScoreSongCount;
    NSString *_author;
}

@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) IESLiveImage *avatarThumb;
@property (copy, nonatomic) NSString *songTitle;
@property (retain, nonatomic) NSNumber *anchorID;
@property (nonatomic) unsigned long long ksongSecondLyric;
@property (nonatomic) unsigned long long ktvLyric;
@property (copy, nonatomic) NSString *highScoreSongCount;
@property (retain, nonatomic) NSString *author;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarThumbJSONTransformer;
+ (id)userIDJSONTransformer;
+ (id)modelFromPBModel:(id)arg0;
+ (id)anchorIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)highScoreSongCount;
- (void)setKsongSecondLyric:(unsigned long long)arg0;
- (void)setKtvLyric:(unsigned long long)arg0;
- (void)setHighScoreSongCount:(id)arg0;
- (unsigned long long)ksongSecondLyric;
- (unsigned long long)ktvLyric;
- (void).cxx_destruct;
- (id)author;
- (void)setAuthor:(id)arg0;
- (id)description;

@end