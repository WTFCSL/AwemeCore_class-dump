//
//     Generated by private class-dump
//

@class NSString, IESLiveVideoGiftResourceModel, UITapGestureRecognizer, IESLiveMetalRenderer, IESLiveAssetReaderOutput, NSObject, MTKView, IESLiveFrameInfo, IESLiveVideoGiftMetalConfiguration;
@protocol OS_dispatch_queue;

@interface IESLiveVideoGiftMetalView : UIView <UIGestureRecognizerDelegate> {
    BOOL _removedOnCompletion;
    BOOL _useDrawTimer;
    BOOL _enableVideoSR;
    BOOL _enableTouchOnMask;
    BOOL _enableRender;
    BOOL _hasDestroyed;
    BOOL _hasSetupGL;
    MTKView *_mtkView;
    unsigned long long _renderContentMode;
    id /* block */ _framePlayDurationCallBack;
    id /* block */ _frameCallBackBeforePlaying;
    id /* block */ _frameCallBackAfterPlaying;
    id /* block */ _frameCallBackAfterCmdBufCommit;
    id /* block */ _adapterRenderViewWhenFrameDidChange;
    id /* block */ _receiveTouchCallBack;
    IESLiveVideoGiftMetalConfiguration *_configuration;
    IESLiveMetalRenderer *_metalRenderer;
    NSObject<OS_dispatch_queue> *_asyncMetalRenderQueue;
    IESLiveAssetReaderOutput *_output;
    IESLiveVideoGiftResourceModel *_resourceModel;
    id /* block */ _process;
    id /* block */ _completion;
    double _screenScale;
    IESLiveFrameInfo *_currentFrame;
    UITapGestureRecognizer *_tapGestureRecognizer;
    void /* unknown type, empty encoding */ _renderPositionMultiFactor;
    struct CGSize { double width; double height; } _currentSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _realDisplayFrameOnScreen;
}

@property BOOL enableRender;
@property BOOL hasDestroyed;
@property BOOL hasSetupGL;
@property (nonatomic) struct CGSize { double width; double height; } currentSize;
@property (retain, nonatomic) IESLiveMetalRenderer *metalRenderer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asyncMetalRenderQueue;
@property (retain, nonatomic) IESLiveAssetReaderOutput *output;
@property (retain, nonatomic) IESLiveVideoGiftResourceModel *resourceModel;
@property (copy, nonatomic) id /* block */ process;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double screenScale;
@property (retain, nonatomic) IESLiveFrameInfo *currentFrame;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) MTKView *mtkView;
@property unsigned long long renderContentMode;
@property (copy, nonatomic) id /* block */ framePlayDurationCallBack;
@property (copy, nonatomic) id /* block */ frameCallBackBeforePlaying;
@property (copy, nonatomic) id /* block */ frameCallBackAfterPlaying;
@property (copy, nonatomic) id /* block */ frameCallBackAfterCmdBufCommit;
@property (copy, nonatomic) id /* block */ adapterRenderViewWhenFrameDidChange;
@property (copy, nonatomic) id /* block */ receiveTouchCallBack;
@property (nonatomic) BOOL removedOnCompletion;
@property (nonatomic, getter=isUsingDrawTimer) BOOL useDrawTimer;
@property (nonatomic) BOOL enableVideoSR;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *configuration;
@property (nonatomic) void /* unknown type, empty encoding */ renderPositionMultiFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } realDisplayFrameOnScreen;
@property (nonatomic) BOOL enableTouchOnMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUseDrawTimer:(BOOL)arg0;
- (void)setResourceModel:(id)arg0;
- (id)resourceModel;
- (id /* block */)frameCallBackBeforePlaying;
- (BOOL)enableVideoSR;
- (id /* block */)frameCallBackAfterCmdBufCommit;
- (id /* block */)framePlayDurationCallBack;
- (id /* block */)frameCallBackAfterPlaying;
- (void)renderOutput:(id)arg0 resourceModel:(id)arg1 process:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setFramePlayDurationCallBack:(id /* block */)arg0;
- (void)setFrameCallBackBeforePlaying:(id /* block */)arg0;
- (void)setFrameCallBackAfterPlaying:(id /* block */)arg0;
- (void)setFrameCallBackAfterCmdBufCommit:(id /* block */)arg0;
- (BOOL)isUsingDrawTimer;
- (void)setEnableVideoSR:(BOOL)arg0;
- (void /* unknown type, empty encoding */)renderPositionMultiFactor;
- (void)setRenderPositionMultiFactor:(SEL)arg0;
- (void)setAsyncMetalRenderQueue:(id)arg0;
- (BOOL)enableTouchOnMask;
- (BOOL)maskHitTest:(struct CGPoint { double x0; double x1; })arg0;
- (id)hitMasksWithHitPoint:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)rectContains:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (id /* block */)receiveTouchCallBack;
- (void)handleTouchOnMasks:(id)arg0;
- (void)bindTapGesture;
- (void)removeTapGesture;
- (id /* block */)adapterRenderViewWhenFrameDidChange;
- (void)_configMTKViewDrawableSizeIfNeeded:(id)arg0 withVideoSize:(struct CGSize { double x0; double x1; })arg1;
- (void)setHasDestroyed:(BOOL)arg0;
- (void)setMetalRenderer:(id)arg0;
- (void)createAsyncMetalRenderQueueIfNotExisted;
- (id)asyncMetalRenderQueue;
- (unsigned long long)renderContentMode;
- (BOOL)_isRealDisplayFrameOnScreenLargerThanSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realDisplayFrameOnScreen;
- (void)setEnableTouchOnMask:(BOOL)arg0;
- (double)totalDurationOfPlayingEffect;
- (void)setRenderContentMode:(unsigned long long)arg0;
- (void)setAdapterRenderViewWhenFrameDidChange:(id /* block */)arg0;
- (void)setReceiveTouchCallBack:(id /* block */)arg0;
- (void)setRealDisplayFrameOnScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)enableRender;
- (void)setEnableRender:(BOOL)arg0;
- (BOOL)hasDestroyed;
- (BOOL)hasSetupGL;
- (void)setHasSetupGL:(BOOL)arg0;
- (double)screenScale;
- (void)resume;
- (id /* block */)completion;
- (void).cxx_destruct;
- (id /* block */)process;
- (void)setCompletion:(id /* block */)arg0;
- (void)setProcess:(id /* block */)arg0;
- (void)setTapGestureRecognizer:(id)arg0;
- (void)setOutput:(id)arg0;
- (id)output;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)destroy;
- (id)metalRenderer;
- (id)configuration;
- (double)currentTime;
- (id)tapGestureRecognizer;
- (void)setScreenScale:(double)arg0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)pause;
- (void)seekToTime:(double)arg0;
- (struct CGSize { double x0; double x1; })currentSize;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setConfiguration:(id)arg0;
- (void)setCurrentSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)removedOnCompletion;
- (void)setRemovedOnCompletion:(BOOL)arg0;
- (id)currentFrame;
- (void)handleTap:(id)arg0;
- (id)mtkView;
- (void)setMtkView:(id)arg0;
- (void)setupMetal;
- (void)setCurrentFrame:(id)arg0;

@end
