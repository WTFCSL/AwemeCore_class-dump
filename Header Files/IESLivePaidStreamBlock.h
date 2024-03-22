//
//     Generated by private class-dump
//

@class NSArray, UIVisualEffectView, NSHashTable, IESLivePaidStreamUIConfig, UIView, NSString;
@protocol IESLiveSubscription, IESLivePaidStreamBlockView, IESLivePaidBlockDelegate;

@interface IESLivePaidStreamBlock : NSObject <IESLivePaidBlock> {
    id<IESLivePaidBlockDelegate> _delegate;
    NSHashTable *_blockEventHandlers;
    IESLivePaidStreamUIConfig *_uiConfig;
    NSArray *_trialViewFrameSubscriptions;
    id<IESLiveSubscription> _blockViewSuperViewSubscription;
    id<IESLiveSubscription> _blurEffectViewSuperViewSubscription;
    unsigned long long _blockType;
    long long _paidScene;
    long long _paidChannel;
    UIVisualEffectView *_blurEffectView;
    UIView<IESLivePaidStreamBlockView> *_blockView;
}

@property (retain, nonatomic) NSHashTable *blockEventHandlers;
@property (retain, nonatomic) IESLivePaidStreamUIConfig *uiConfig;
@property (copy, nonatomic) NSArray *trialViewFrameSubscriptions;
@property (retain, nonatomic) id<IESLiveSubscription> blockViewSuperViewSubscription;
@property (retain, nonatomic) id<IESLiveSubscription> blurEffectViewSuperViewSubscription;
@property (nonatomic) unsigned long long blockType;
@property (nonatomic) long long paidScene;
@property (nonatomic) long long paidChannel;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIView<IESLivePaidStreamBlockView> *blockView;
@property (weak, nonatomic) id<IESLivePaidBlockDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uiConfig;
- (void)setBlockType:(unsigned long long)arg0;
- (void)setUiConfig:(id)arg0;
- (id)trialView;
- (id)trialContainerView;
- (long long)paidScene;
- (void)setPaidScene:(long long)arg0;
- (void)setPaidChannel:(long long)arg0;
- (long long)paidChannel;
- (void)setBlockView:(id)arg0;
- (void)sendEventWillDisplayForBlockType:(unsigned long long)arg0;
- (void)sendEventDidEndDisplayForBlockType:(unsigned long long)arg0;
- (void)sendEventActionForBlockType:(unsigned long long)arg0 completionHandler:(id /* block */)arg1;
- (void)setupWithUIConfig:(id)arg0;
- (void)registerBlockEventHandler:(id)arg0;
- (void)unregisterBlockEventHandler:(id)arg0;
- (void)installBlockView:(unsigned long long)arg0 paidScene:(long long)arg1 paidChannel:(long long)arg2;
- (void)sendEventToHandlers:(SEL)arg0 event:(id /* block */)arg1;
- (id)registeredBlockEventHandlers;
- (void)disposeAllSubscription;
- (id)blockEventHandlers;
- (void)installBlurEffectView;
- (void)installBlockView;
- (void)observerTrialViewFrame;
- (void)uninstallBlurEffectView;
- (void)uninstallBlockView;
- (BOOL)useHierarchyContainerView:(id)arg0;
- (void)observerBlurEffectViewSuperView:(id)arg0;
- (void)observerBlockViewSuperView:(id)arg0;
- (void)disposeTrialViewFrameSubscription;
- (void)layoutBlockView;
- (void)setTrialViewFrameSubscriptions:(id)arg0;
- (void)disposeBlurEffectViewSuperViewSubscription;
- (void)setBlurEffectViewSuperViewSubscription:(id)arg0;
- (void)disposeBlockViewSuperViewSubscription;
- (void)setBlockViewSuperViewSubscription:(id)arg0;
- (id)trialViewFrameSubscriptions;
- (id)blockViewSuperViewSubscription;
- (id)blurEffectViewSuperViewSubscription;
- (void)setBlockEventHandlers:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)uninstall;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)blurEffectView;
- (void)setBlurEffectView:(id)arg0;
- (id)blockView;
- (unsigned long long)blockType;

@end