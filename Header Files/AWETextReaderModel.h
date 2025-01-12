//
//     Generated by private class-dump
//

@class NSString, IESMMVideoDataClipRange, AVAsset;

@interface AWETextReaderModel : MTLModel <MTLJSONSerializing> {
    NSString *_textId;
    NSString *_text;
    IESMMVideoDataClipRange *_textAudioRange;
    NSString *_textAudioPath;
    NSString *_effectId;
    NSString *_streamEffectID;
    NSString *_effectName;
    AVAsset *_textReaderAsset;
}

@property (copy, nonatomic) NSString *textId;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESMMVideoDataClipRange *textAudioRange;
@property (copy, nonatomic) NSString *textAudioPath;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *streamEffectID;
@property (copy, nonatomic) NSString *effectName;
@property (retain, nonatomic) AVAsset *textReaderAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textAudioRangeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)textId;
- (void)setTextId:(id)arg0;
- (id)textAudioRange;
- (void)setTextAudioRange:(id)arg0;
- (id)textAudioPath;
- (void)setTextAudioPath:(id)arg0;
- (void)setStreamEffectID:(id)arg0;
- (id)textReaderAsset;
- (id)streamEffectID;
- (void)setTextReaderAsset:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (id)description;
- (id)effectName;
- (void)setEffectName:(id)arg0;
- (id)effectId;
- (void)setEffectId:(id)arg0;

@end
