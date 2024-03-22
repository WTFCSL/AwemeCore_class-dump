//
//     Generated by private class-dump
//

@interface AWEFriendsImpl.AlbumHandler : AWEFriendsImpl.ContentHandler <AFDAlbumHandlerIndexable, AFDRichContentProgressDurationProtocol, AFDAlbumTransitionUpdateableProtocol, AFDAlbumTransitionUpdatePlayStateProtocol, AFDAlbumTransitionUpdateContentProtocol> {
    void /* unknown type, empty encoding */ isPlayingBeforeEnteringDetail;
    void /* unknown type, empty encoding */ playModeBeforeEnterDetail;
    void /* unknown type, empty encoding */ userScrolledBeforeEnteringDetail;
    void /* unknown type, empty encoding */ startPinchingTime;
    void /* unknown type, empty encoding */ albumSectionViewModel;
    void /* unknown type, empty encoding */ enableInfinityLoop;
}

@property (nonatomic, readonly) long long currentIndex;

- (void)scrollToIndex:(long long)arg0 offset:(id)arg1;
- (long long)currentIndex;
- (BOOL)shouldFillProgressWhenScroll;
- (void)updateAlbumHandlerWithOhterHandler:(id)arg0;
- (void)updateAllInfoWithOtherContentHandler:(id)arg0;
- (void)updatePlayerController:(id)arg0;
- (void)updatePlayStateWithAlbumHandler:(id)arg0 playVideoVC:(id)arg1;
- (BOOL)shouldSpectialHandlePlayState;
- (void).cxx_destruct;

@end
