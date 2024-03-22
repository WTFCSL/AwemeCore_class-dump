//
//     Generated by private class-dump
//

@class AWEMusicModel, NSString;

@interface AWERecommendMusic : AWEBaseApiModel {
    AWEMusicModel *_music;
    NSString *_username;
    NSString *_schema;
}

@property (retain, nonatomic) AWEMusicModel *music;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *schema;

+ (id)musicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)music;
- (void)setSchema:(id)arg0;
- (id)username;
- (void).cxx_destruct;
- (void)setUsername:(id)arg0;
- (void)setMusic:(id)arg0;
- (id)schema;

@end