//
//     Generated by private class-dump
//

@class AWEResourceUploadParametersResponseModel;
@protocol ACCQuickStoryIMServiceDelegate;

@protocol ACCQuickStoryIMServiceProtocol <NSObject>

@property (weak, nonatomic) id<ACCQuickStoryIMServiceDelegate> delegate;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (nonatomic) BOOL shouldVideoSaveAsPhoto;

- (BOOL)canGoNext;
- (id)uploadParamsCache;
- (void)setUploadParamsCache:(id)arg0;
- (BOOL)shouldVideoSaveAsPhoto;
- (void)setShouldVideoSaveAsPhoto:(BOOL)arg0;
- (void)showPanelWithRepository:(id)arg0 editService:(id)arg1 sequenceEditService:(id)arg2 viewContainer:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
