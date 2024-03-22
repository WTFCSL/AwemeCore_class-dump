//
//     Generated by private class-dump
//

@class AWECoverTextPackage, NSString, NSArray, AWEStoryTextImageModel;

@interface AWECoverTextEditingModel : MTLModel {
    NSString *_effectId;
    unsigned long long _type;
    NSArray *_texts;
    AWEStoryTextImageModel *_textModel;
    AWECoverTextPackage *_textPackage;
    unsigned long long _cursorLocation;
}

@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *texts;
@property (copy, nonatomic) AWEStoryTextImageModel *textModel;
@property (copy, nonatomic) AWECoverTextPackage *textPackage;
@property (nonatomic) unsigned long long cursorLocation;

- (id)textModel;
- (void)setTextModel:(id)arg0;
- (id)trackTextIdString;
- (id)textPackage;
- (void)setTextPackage:(id)arg0;
- (void).cxx_destruct;
- (void)setCursorLocation:(unsigned long long)arg0;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (unsigned long long)cursorLocation;
- (id)texts;
- (void)setTexts:(id)arg0;
- (id)effectId;
- (void)setEffectId:(id)arg0;

@end