//
//     Generated by private class-dump
//

@class IESECVideoPlayerView, IESECHeadVideoModel;

@interface IESECCommentItemVideoCell : UICollectionViewCell {
    IESECVideoPlayerView *_videoPlayerView;
    IESECHeadVideoModel *_headVideoModel;
}

@property (retain, nonatomic) IESECVideoPlayerView *videoPlayerView;
@property (retain, nonatomic) IESECHeadVideoModel *headVideoModel;

- (id)currentPlayerView;
- (void)setHeadVideoModel:(id)arg0;
- (void)updateMediaCellWithVideoModel:(id)arg0;
- (id)headVideoModel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)videoPlayerView;
- (void)setVideoPlayerView:(id)arg0;

@end
