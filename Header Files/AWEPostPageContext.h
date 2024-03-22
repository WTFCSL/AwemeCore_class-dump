//
//     Generated by private class-dump
//

@class ACCPublishViewControllerInputData, NSString, AWEResourceUploadParametersResponseModel, AWEVideoPublishViewModel, NSNumber;
@protocol AWEPublishEditServiceManagerProtocol;

@interface AWEPostPageContext : ACCRepositoryWrapper <AWEPostPageContext> {
    ACCPublishViewControllerInputData *_inputData;
    id<AWEPublishEditServiceManagerProtocol> _editServiceManager;
    AWEResourceUploadParametersResponseModel *_uploadParamsCache;
    NSNumber *_dynamicyPrepareCanvasPublishAsImageFlagValue;
    AWEVideoPublishViewModel *_originalModel;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *originalModel;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (retain, nonatomic) ACCPublishViewControllerInputData *inputData;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (retain, nonatomic) NSNumber *dynamicyPrepareCanvasPublishAsImageFlagValue;
@property (readonly, nonatomic) AWEVideoPublishViewModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awesst_enterFrom;
- (id)initWithInputData:(id)arg0;
- (id)commonTrackParams;
- (id)uploadParamsCache;
- (void)setOriginalModel:(id)arg0;
- (id)originalModel;
- (void)setUploadParamsCache:(id)arg0;
- (BOOL)isShowingLivePlaybackStyle;
- (id)editServiceManager;
- (void)setEditServiceManager:(id)arg0;
- (id)dynamicyPrepareCanvasPublishAsImageFlagValue;
- (void)setDynamicyPrepareCanvasPublishAsImageFlagValue:(id)arg0;
- (void)updateUploadParamsCache:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end