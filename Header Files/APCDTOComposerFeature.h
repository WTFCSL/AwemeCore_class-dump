//
//     Generated by private class-dump
//

@class NSString, APCDTOEditorFeature;

@interface APCDTOComposerFeature : MTLModel <MTLJSONSerializing> {
    APCDTOEditorFeature *_editorFeature;
}

@property (retain, nonatomic) APCDTOEditorFeature *editorFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editorFeatureJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setEditorFeature:(id)arg0;
- (id)editorFeature;
- (void)syncToPublishViewModel:(id)arg0;
- (void).cxx_destruct;

@end
