//
//     Generated by private class-dump
//

@class NSArray, AUCDTOBasicCamera, AUCDTOFeatureCamera, NSString, ACCRecordViewControllerInputData;
@protocol ACCRepoCreationToolData;

@interface AWEVideoOpenRecorderTemplate : NSObject <AWEVideoRecordTemplateTarget, ACCBusinessTemplate> {
    ACCRecordViewControllerInputData *_inputData;
    id<ACCRepoCreationToolData> _creationModel;
    AUCDTOBasicCamera *_basicConfig;
    AUCDTOFeatureCamera *_featureConfig;
    NSArray *_customComponent;
    NSArray *_customPlugin;
}

@property (retain, nonatomic) id<ACCRepoCreationToolData> creationModel;
@property (retain, nonatomic) AUCDTOBasicCamera *basicConfig;
@property (retain, nonatomic) AUCDTOFeatureCamera *featureConfig;
@property (copy, nonatomic) NSArray *customComponent;
@property (copy, nonatomic) NSArray *customPlugin;
@property (weak, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEVideoRecordTemplateLiteAdapterClass;

- (void)setFeatureConfig:(id)arg0;
- (id)featureConfig;
- (id)componentClasses;
- (id)componentPluginClasses;
- (id)componentAssemblerWithContext:(id)arg0;
- (id)componentPluginAssemblerWithContext:(id)arg0;
- (id)cameraBasicArchClassesWithContext:(id)arg0;
- (id)cameraBasicFuncClassesWithContext:(id)arg0;
- (id)cameraExtraFuncClassesWithContext:(id)arg0;
- (id)storyClassesWithContext:(id)arg0;
- (id)propClassesWithContext:(id)arg0;
- (id)cameraImageAlbumClassesWithContext:(id)arg0;
- (id)musicClassesWithContext:(id)arg0;
- (id)beautyFilterClassesWithContext:(id)arg0;
- (id)liteClassesWithContext:(id)arg0;
- (id)combineArrays:(id)arg0;
- (id)aAWEVideoRecordTemplateLiteAdapter;
- (id)cameraBasicArchPluginClassesWithContext:(id)arg0;
- (id)cameraBasicFuncPluginClassesWithContext:(id)arg0;
- (id)cameraExtraFuncPluginClassesWithContext:(id)arg0;
- (id)propPluginClassesWithContext:(id)arg0;
- (id)musicPluginClassesWithContext:(id)arg0;
- (id)beautyFilterPluginClassesWithContext:(id)arg0;
- (id)litePluginClassesWithContext:(id)arg0;
- (void)recorderTemplateWithFeaturesConfigs:(id)arg0;
- (void)setCreationModel:(id)arg0;
- (id)creationModel;
- (void)setBasicConfig:(id)arg0;
- (void)checkCameraConfigBeforeConstructTemplate:(id)arg0;
- (id)storyPluginClassesWithContext:(id)arg0;
- (id)customComponent;
- (void)setCustomComponent:(id)arg0;
- (id)customPlugin;
- (void)setCustomPlugin:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:(id)arg0;
- (id)basicConfig;

@end
