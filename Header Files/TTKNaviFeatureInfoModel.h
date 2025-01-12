//
//     Generated by private class-dump
//

@class NSString, TTKNaviColorPickerSelectionInfo;

@interface TTKNaviFeatureInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_effectName;
    NSString *_resourceId;
    NSString *_inspirationKey;
    TTKNaviColorPickerSelectionInfo *_colorPickerSelectionInfo;
}

@property (copy, nonatomic) NSString *effectName;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *inspirationKey;
@property (retain, nonatomic) TTKNaviColorPickerSelectionInfo *colorPickerSelectionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)resourceId;
- (void)setResourceId:(id)arg0;
- (void)setInspirationKey:(id)arg0;
- (id)inspirationKey;
- (id)colorPickerSelectionInfo;
- (void)setColorPickerSelectionInfo:(id)arg0;
- (void).cxx_destruct;
- (id)effectName;
- (void)setEffectName:(id)arg0;

@end
