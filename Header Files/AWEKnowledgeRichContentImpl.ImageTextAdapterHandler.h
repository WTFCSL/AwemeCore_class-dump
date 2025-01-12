//
//     Generated by private class-dump
//

@interface AWEKnowledgeRichContentImpl.ImageTextAdapterHandler : BDMultiContentContainer.ImageTextHandler <AFDRichContentHandlerProtocol, AFDRichContentProgressDurationProtocol, AFDAlbumHandlerIndexable, AFDAlbumTransitionUpdateableProtocol, AFDAlbumTransitionUpdatePlayStateProtocol, AFDAlbumTransitionUpdateContentProtocol> {
    void /* unknown type, empty encoding */ aweme;
    void /* unknown type, empty encoding */ isPlayingBeforeEnteringDetail;
    void /* unknown type, empty encoding */ playModeBeforeEnterDetail;
    void /* unknown type, empty encoding */ userScrolledBeforeEnteringDetail;
    void /* unknown type, empty encoding */ startPinchingTime;
}

@property (nonatomic, readonly) long long currentIndex;

- (void)updatePlayerController:(id)arg0;
- (BOOL)shouldSpectialHandlePlayState;
- (BOOL)shouldFillProgressWhenScroll;
- (void)scrollToIndex:(long long)arg0 offset:(id)arg1;
- (long long)currentIndex;
- (void)updateAlbumHandlerWithOhterHandler:(id)arg0;
- (void)updatePlayStateWithAlbumHandler:(id)arg0 playVideoVC:(id)arg1;
- (void)updateAllInfoWithOtherContentHandler:(id)arg0;
- (void).cxx_destruct;

@end
