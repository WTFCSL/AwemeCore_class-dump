//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCEditorSmartBeautyBasicHandler : NSObject {
    BOOL _isProcessing;
    AWEVideoPublishViewModel *_publishModel;
    id<IESServiceProvider> _serviceProvider;
    NSMutableArray *_callbackList;
}

@property (nonatomic) BOOL isProcessing;
@property (retain, nonatomic) NSMutableArray *callbackList;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, nonatomic) NSString *panelName;
@property (readonly, nonatomic) NSString *logCategory;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (void)setIsProcessing:(BOOL)arg0;
- (id)initWithPublishViewModel:(id)arg0 serviceProvider:(id)arg1;
- (BOOL)currentModelDownloaded;
- (id)callbackList;
- (BOOL)dataExist;
- (void)buildCurrentModelWithResponseModel:(id)arg0;
- (void)downloadEffectResourceWithTrackInfo:(id)arg0;
- (void)executeCallbacks:(id)arg0 trackInfo:(id)arg1;
- (id)toDownloadEffectModels;
- (void)checkEffectModelAndDownloadIfNeededWithCompletion:(id /* block */)arg0;
- (void)setCallbackList:(id)arg0;
- (id)logCategory;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)serviceProvider;
- (BOOL)isProcessing;
- (id)panelName;

@end