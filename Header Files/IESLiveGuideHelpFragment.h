//
//     Generated by private class-dump
//

@class IESLiveGuideToolBarItem, NSString;
@protocol IESLiveInternalRouter, IESLiveGuideToolBarProvider;

@interface IESLiveGuideHelpFragment : IESLiveGuideComponent <IESLiveGuideActions> {
    IESLiveGuideToolBarItem *_liveGuideItem;
    id<IESLiveInternalRouter> _internalRouter;
    id<IESLiveGuideToolBarProvider> _toolbarProvider;
}

@property (retain, nonatomic) IESLiveGuideToolBarItem *liveGuideItem;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> toolbarProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (void)componentBindService;
- (void)componentMount;
- (void)liveTypeChangeAction:(unsigned long long)arg0;
- (id)toolbarProvider;
- (void)setToolbarProvider:(id)arg0;
- (id)liveGuideItem;
- (void)showThirdPartyGuidePage;
- (void)showScreenshotGuidePage;
- (void)helpButtonDidClick:(id)arg0;
- (void)setLiveGuideItem:(id)arg0;
- (void).cxx_destruct;

@end