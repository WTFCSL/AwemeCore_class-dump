//
//     Generated by private class-dump
//

@class IESSoloKTVTemplateBGModel, NSString, IESSoloKTVTemplateSingerModel, IESSoloKTVTemplateMidiModel, NSDictionary, IESSoloKTVTemplateTitleModel, IESSoloKTVTemplateLyricModel;

@interface IESSoloKTVTemplateMainModel : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    int _minVersion;
    NSString *_templateID;
    IESSoloKTVTemplateTitleModel *_title;
    IESSoloKTVTemplateSingerModel *_singer;
    IESSoloKTVTemplateLyricModel *_lyric;
    IESSoloKTVTemplateMidiModel *_midi;
    IESSoloKTVTemplateBGModel *_bg;
}

@property (retain, nonatomic) NSString *templateID;
@property (retain, nonatomic) IESSoloKTVTemplateTitleModel *title;
@property (retain, nonatomic) IESSoloKTVTemplateSingerModel *singer;
@property (retain, nonatomic) IESSoloKTVTemplateLyricModel *lyric;
@property (retain, nonatomic) IESSoloKTVTemplateMidiModel *midi;
@property (retain, nonatomic) IESSoloKTVTemplateBGModel *bg;
@property (nonatomic) int minVersion;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleJSONTransformer;
+ (id)singerJSONTransformer;
+ (id)createModelWithJsonString:(id)arg0;
+ (id)lyricJSONTransformer;
+ (id)midiJSONTransformer;
+ (id)bgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)lyric;
- (void)setLyric:(id)arg0;
- (id)singer;
- (void)setSinger:(id)arg0;
- (id)bg;
- (void)setBg:(id)arg0;
- (id)midi;
- (void)setMidi:(id)arg0;
- (id)sortByIndexAsc;
- (void).cxx_destruct;
- (id)templateID;
- (id)title;
- (void)setMinVersion:(int)arg0;
- (int)minVersion;
- (void)setTemplateID:(id)arg0;
- (void)setTitle:(id)arg0;

@end
