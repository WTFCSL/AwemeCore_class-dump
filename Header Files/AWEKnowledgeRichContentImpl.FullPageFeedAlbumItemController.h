//
//     Generated by private class-dump
//

@interface AWEKnowledgeRichContentImpl.FullPageFeedAlbumItemController : AWEKnowledgeSwiftBasic.FullPageBaseItemController <AFDRichContentAlbumImageDelegateProtocol, AFDFullPageSliderContainerDelegate> {
    void /* unknown type, empty encoding */ sliderContainer;
    void /* unknown type, empty encoding */ needSkipOnceVideoPlayFinish;
    void /* unknown type, empty encoding */ sliderContainerUpdateBlock;
    void /* unknown type, empty encoding */ sliderAnchorShowAnimatedBlock;
}

- (void)imageConfigMsg:(id)arg0;
- (BOOL)sliderShouldAddProgressView;
- (void)sliderDidCreateProgressView:(id)arg0;
- (void)sectionControllerWillDisplay;
- (void)sectionControllerDidEndDisplaying;
- (void)configCellWithCell:(id)arg0 viewModel:(id)arg1;
- (void)cellWillDisplayWithCell:(id)arg0 viewModel:(id)arg1;
- (void)cellDidEndDisplayWithCell:(id)arg0 viewModel:(id)arg1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (Class)cellClass;

@end