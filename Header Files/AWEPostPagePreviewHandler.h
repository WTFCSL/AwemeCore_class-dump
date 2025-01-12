//
//     Generated by private class-dump
//

@class NSString, AWEPostPageContext, NSObject, AWEPostPagePreviewServiceDependencies;
@protocol UIViewControllerTransitioningDelegate, AWEPublishEditServiceManagerProtocol, AWEPostPagePreviewElementProtocol;

@interface AWEPostPagePreviewHandler : NSObject <AWEPostPagePreviewService> {
    BOOL _isPreviewPage;
    BOOL _coverImageDoneSignal;
    BOOL _combinedDidDoneSignal;
    BOOL _isRequestingPreviewImage;
    BOOL _isChooseCoverForCombined;
    NSObject<AWEPostPagePreviewElementProtocol> *_previewElement;
    AWEPostPageContext *_context;
    AWEPostPagePreviewServiceDependencies *_dependencies;
    long long _configCoverAndFirstFrameCount;
    id<UIViewControllerTransitioningDelegate> _nextTranslationTransitionDelegate;
    id /* block */ _chooseCoverPageWillShowBlock;
    id /* block */ _chooseCoverPageWillDismissBlock;
    id<AWEPublishEditServiceManagerProtocol> _editServiceManagerForChooseCover;
}

@property (retain, nonatomic) AWEPostPageContext *context;
@property (retain, nonatomic) AWEPostPagePreviewServiceDependencies *dependencies;
@property (nonatomic) BOOL isRequestingPreviewImage;
@property (nonatomic) long long configCoverAndFirstFrameCount;
@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationTransitionDelegate;
@property (nonatomic) BOOL combinedDidDoneSignal;
@property (nonatomic) BOOL isChooseCoverForCombined;
@property (copy, nonatomic) id /* block */ chooseCoverPageWillShowBlock;
@property (copy, nonatomic) id /* block */ chooseCoverPageWillDismissBlock;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManagerForChooseCover;
@property (nonatomic) BOOL isPreviewPage;
@property (nonatomic) BOOL coverImageDoneSignal;
@property (weak, nonatomic) NSObject<AWEPostPagePreviewElementProtocol> *previewElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageAlbumMixed;
- (id)editService;
- (void)bindServices:(id)arg0;
- (BOOL)isImageAlbum;
- (id)nextTranslationTransitionDelegate;
- (void)setNextTranslationTransitionDelegate:(id)arg0;
- (BOOL)combinedDidDoneSignal;
- (void)configCoverAndFirstFrame;
- (BOOL)coverImageDoneSignal;
- (void)configCoverImage;
- (void)chooseCoverActionWithChooseCoverPageWillShowBlock:(id /* block */)arg0 chooseCoverPageWillDismissBlock:(id /* block */)arg1;
- (void)previewImageAtIndex:(long long)arg0;
- (void)resetPreuploadTaskIfNeed;
- (void)setPreviewElement:(id)arg0;
- (BOOL)enableReeditUseNewCover;
- (void)setCombinedDidDoneSignal:(BOOL)arg0;
- (BOOL)isPreviewPage;
- (void)setIsPreviewPage:(BOOL)arg0;
- (void)setCoverImageDoneSignal:(BOOL)arg0;
- (id)previewElement;
- (void)setConfigCoverAndFirstFrameCount:(long long)arg0;
- (BOOL)isChooseCoverForCombined;
- (id /* block */)chooseCoverPageWillShowBlock;
- (id /* block */)chooseCoverPageWillDismissBlock;
- (struct CGSize { double x0; double x1; })p_preferredImageSize;
- (long long)configCoverAndFirstFrameCount;
- (void)setChooseCoverPageWillShowBlock:(id /* block */)arg0;
- (void)setChooseCoverPageWillDismissBlock:(id /* block */)arg0;
- (void)setIsChooseCoverForCombined:(BOOL)arg0;
- (id)p_trackClickCover;
- (BOOL)p_isAlbumVideo;
- (id)editServiceManagerForChooseCover;
- (void)jumpToChooseCoverVCWithPublishModel:(id)arg0 editService:(id)arg1 chooseCoverPageWillDismissBlock:(id /* block */)arg2;
- (BOOL)isRequestingPreviewImage;
- (void)setIsRequestingPreviewImage:(BOOL)arg0;
- (void)captureFrameAtIndexAndPresentVC:(long long)arg0;
- (void)p_trackClickPreviewWithIndex:(long long)arg0;
- (void)setEditServiceManagerForChooseCover:(id)arg0;
- (void).cxx_destruct;
- (id)dependencies;
- (void)setContext:(id)arg0;
- (id)context;
- (void)setDependencies:(id)arg0;
- (void)addObservers;

@end
