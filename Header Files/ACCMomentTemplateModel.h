//
//     Generated by private class-dump
//

@class NSArray;

@interface ACCMomentTemplateModel : MTLModel {
    unsigned long long _templateId;
    long long _templateType;
    NSArray *_segInfos;
}

@property (nonatomic) unsigned long long templateId;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSArray *segInfos;

- (id)segInfos;
- (void)setSegInfos:(id)arg0;
- (void).cxx_destruct;
- (void)setTemplateType:(long long)arg0;
- (long long)templateType;
- (unsigned long long)templateId;
- (void)setTemplateId:(unsigned long long)arg0;

@end