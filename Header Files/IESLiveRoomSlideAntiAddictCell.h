//
//     Generated by private class-dump
//

@class IESLiveFeedAntiAddictModel, NSString, IESLiveInnerFeedAntiAddictCardItemModel, UIImageView, IESLiveVideoPlayerController;
@protocol IESLiveFeedAntiAddictClearView;

@interface IESLiveRoomSlideAntiAddictCell : UICollectionViewCell <IESLiveVideoPlayerControllerDelegate, IESLiveFeedAntiAddictClearViewDelegate, IESLiveInnerFeedCellProtocol> {
    BOOL _isMounted;
    BOOL _didTrackStayTime;
    long long _index;
    IESLiveInnerFeedAntiAddictCardItemModel *_itemModel;
    IESLiveVideoPlayerController *_videoPlayer;
    IESLiveFeedAntiAddictModel *_model;
    id<IESLiveFeedAntiAddictClearView> _clearView;
    UIImageView *_blurCoverImageView;
    double _startDisplayTime;
}

@property (retain, nonatomic) IESLiveInnerFeedAntiAddictCardItemModel *itemModel;
@property (nonatomic) BOOL isMounted;
@property (retain, nonatomic) IESLiveVideoPlayerController *videoPlayer;
@property (retain, nonatomic) IESLiveFeedAntiAddictModel *model;
@property (retain, nonatomic) id<IESLiveFeedAntiAddictClearView> clearView;
@property (retain, nonatomic) UIImageView *blurCoverImageView;
@property (nonatomic) BOOL didTrackStayTime;
@property (nonatomic) double startDisplayTime;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemModel;
- (void)setItemModel:(id)arg0;
- (void)trackShow;
- (void)startPlay;
- (id)antiAddictType;
- (void)trackStayTime;
- (id)blurCoverImageView;
- (void)setBlurCoverImageView:(id)arg0;
- (void)setStartDisplayTime:(double)arg0;
- (void)setDidTrackStayTime:(BOOL)arg0;
- (BOOL)didTrackStayTime;
- (double)startDisplayTime;
- (id)commonTrackParams;
- (id)antiAddictClearViewTitle;
- (id)antiAddictClearViewSubTitle;
- (void)trackUserAction:(id)arg0;
- (void)didEndDisplayCell;
- (id)antiAddictClearViewConfirmBtnTitle;
- (id)playVideoView;
- (void)actionBtnClickedWithType:(long long)arg0;
- (BOOL)shouldResponsePlayerClick;
- (id)clearView;
- (void)setClearView:(id)arg0;
- (void)ignoreBtnClicked;
- (void)videoReadyToDisPlayOfPlayerController:(id)arg0;
- (void)playerController:(id)arg0 loadStateDidChange:(unsigned long long)arg1;
- (void)updateWithItemModel:(id)arg0;
- (void)setIsMounted:(BOOL)arg0;
- (void)mountCell;
- (void)unMountCell:(long long)arg0;
- (void)updateWithAntiAddictModel:(id)arg0;
- (void)didAppearIsDraw:(BOOL)arg0 player:(id)arg1;
- (void)p_setUpViews;
- (void)p_updateBlurCover;
- (void)setVideoPlayer:(id)arg0;
- (id)videoPlayer;
- (void)setModel:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)didDisappear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)index;
- (void)prepareForReuse;
- (void)applicationWillTerminate;
- (void)willDisplayCell;
- (BOOL)isMounted;

@end
