//
//     Generated by private class-dump
//

@class NSArray, NLEResourceNode_OC, NSString;

@interface NLESegmentTextTemplate_OC : NLESegment_OC {
    NLEResourceNode_OC *_effectSDKFile;
    NSArray *_fontResList;
    NSString *_aliasType;
    NSArray *_fallbackFontList;
    NSArray *_dependResourceList;
}

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentTextTemplate> { struct NLESegmentTextTemplate *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *effectSDKFile;
@property (copy, nonatomic) NSArray *fontResList;
@property (copy, nonatomic) NSArray *textClips;
@property (retain, nonatomic) NSString *aliasType;
@property (retain, nonatomic) NSArray *fallbackFontList;
@property (retain, nonatomic) NSArray *dependResourceList;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentTextTemplate> { struct NLESegmentTextTemplate *x0; struct __shared_weak_count *x1; })arg0;
- (id)effectSDKFile;
- (void)setEffectSDKFile:(id)arg0;
- (id)fontResList;
- (void)setFontResList:(id)arg0;
- (id)textClips;
- (void)setTextClips:(id)arg0;
- (void)addTextClip:(id)arg0;
- (void)clearTextClips;
- (void)removeTextClip:(id)arg0;
- (id)aliasType;
- (void)setAliasType:(id)arg0;
- (id)dependResourceList;
- (void)setDependResourceList:(id)arg0;
- (unsigned long long)getType;
- (id)init;
- (void).cxx_destruct;
- (id)fallbackFontList;
- (void)setFallbackFontList:(id)arg0;

@end
