//
//     Generated by private class-dump
//

@class AWEStudioClipInputData, AWEVideoPublishViewModel;

@interface ACCClipVideoEditAdapter : NSObject {
    AWEVideoPublishViewModel *_publishModel;
    AWEStudioClipInputData *_inputData;
}

@property (retain, nonatomic) AWEStudioClipInputData *inputData;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;

+ (id)enterEditViewControllerWithInputData:(id)arg0 originalPublishModel:(id)arg1;
+ (id)enterEditViewControllerWithInputData:(id)arg0 originalPublishModel:(id)arg1 segmentedModel:(id)arg2 extraDict:(id)arg3;
+ (id)enterEditViewControllerWithInputData:(id)arg0 originalPublishModel:(id)arg1 segmentedModel:(id)arg2 extraDict:(id)arg3 cancelBlock:(id /* block */)arg4;
+ (id)commonImportInputData:(id)arg0 createID:(id)arg1 taskID:(id)arg2;
+ (id)enterEditViewControllerWithInputData:(id)arg0 originalPublishModel:(id)arg1 segmentedModel:(id)arg2;
+ (id)createProjectWithModel:(id)arg0 assetModel:(id)arg1 createID:(id)arg2 taskID:(id)arg3;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)initWithInputData:(id)arg0;
- (double)videoMaxSeconds;
- (id)initWithInputData:(id)arg0 originalPublishModel:(id)arg1 segmentedModel:(id)arg2;
- (id)ensureSpacesInText:(id)arg0 atUserText:(id)arg1;
- (void)setupDataWithInputData:(id)arg0 originalPublishModel:(id)arg1 segmentedModel:(id)arg2;
- (id)p_setupPublishModelWithInputData:(id)arg0 originalPublishModel:(id)arg1;
- (void)p_configVideoDataForPublishModel:(id)arg0 inputData:(id)arg1;
- (void)p_configImportDuetPublishModel:(id)arg0 originalPublishModel:(id)arg1 enableMultiTrack:(BOOL)arg2;
- (void)p_configLivePhotoPublishModel:(id)arg0 originalPublishModel:(id)arg1 inputData:(id)arg2;
- (void)p_commonConfigWithImportPublishModel:(id)arg0 originalPublishModel:(id)arg1 segmentedModel:(id)arg2;
- (void)p_configAnchorForPublishModel:(id)arg0;
- (void)p_configPublishModel:(id)arg0 originalPublishModel:(id)arg1;
- (void)p_configPublishModel:(id)arg0 segmentedModel:(id)arg1;
- (BOOL)isAssetsSupportFastImport;
- (id)initWithInputData:(id)arg0 originalPublishModel:(id)arg1;
- (BOOL)allowLongVideo;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end
