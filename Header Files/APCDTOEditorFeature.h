//
//     Generated by private class-dump
//

@class NSString;

@interface APCDTOEditorFeature : MTLModel <MTLJSONSerializing> {
    BOOL _autoDisplayEditorPreview;
}

@property (nonatomic) BOOL autoDisplayEditorPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAutoDisplayEditorPreview:(BOOL)arg0;
- (BOOL)autoDisplayEditorPreview;
- (void)syncToPublishViewModel:(id)arg0;

@end
