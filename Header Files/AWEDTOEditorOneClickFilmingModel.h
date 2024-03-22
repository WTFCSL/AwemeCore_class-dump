//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOEditorOneClickFilmingModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasAppliedTemplate;
    BOOL _isBringInTemplate;
    NSString *_templateJson;
    NSString *_templateRecId;
    NSString *_templateId;
    long long _templateType;
    NSString *_segmentInfo;
    NSString *_bringInTempalteId;
    NSString *_bringInTempalteMusicId;
    NSString *_mvSource;
    NSString *_selectedTemplateIndex;
}

@property (copy, nonatomic) NSString *templateJson;
@property (nonatomic) BOOL hasAppliedTemplate;
@property (copy, nonatomic) NSString *templateRecId;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSString *segmentInfo;
@property (copy, nonatomic) NSString *bringInTempalteId;
@property (copy, nonatomic) NSString *bringInTempalteMusicId;
@property (nonatomic) BOOL isBringInTemplate;
@property (copy, nonatomic) NSString *mvSource;
@property (copy, nonatomic) NSString *selectedTemplateIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasAppliedTemplate;
- (void)setHasAppliedTemplate:(BOOL)arg0;
- (id)templateRecId;
- (void)setTemplateRecId:(id)arg0;
- (id)bringInTempalteId;
- (void)setBringInTempalteId:(id)arg0;
- (id)bringInTempalteMusicId;
- (void)setBringInTempalteMusicId:(id)arg0;
- (BOOL)isBringInTemplate;
- (void)setIsBringInTemplate:(BOOL)arg0;
- (id)mvSource;
- (void)setMvSource:(id)arg0;
- (id)selectedTemplateIndex;
- (void)setSelectedTemplateIndex:(id)arg0;
- (void).cxx_destruct;
- (void)setTemplateType:(long long)arg0;
- (long long)templateType;
- (id)templateId;
- (void)setTemplateId:(id)arg0;
- (void)setTemplateJson:(id)arg0;
- (id)templateJson;
- (id)segmentInfo;
- (void)setSegmentInfo:(id)arg0;

@end
