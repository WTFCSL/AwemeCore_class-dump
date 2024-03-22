//
//     Generated by private class-dump
//

@class AWEDCFeedCellImageElementGenreResourceLiveView, AWEDCFeedPageContext, AWEAwemeModel, AWEDCFeedCellImageElementGenreResourceIconView;

@interface AWEDCFeedCellImageElementGenreResource : NSObject {
    AWEAwemeModel *_awemeModel;
    AWEDCFeedPageContext *_context;
    long long _genreType;
    AWEDCFeedCellImageElementGenreResourceIconView *_albumView;
    AWEDCFeedCellImageElementGenreResourceIconView *_videoView;
    AWEDCFeedCellImageElementGenreResourceLiveView *_liveView;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (nonatomic) long long genreType;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceIconView *albumView;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceIconView *videoView;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceLiveView *liveView;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)setAlbumView:(id)arg0;
- (id)initWithAwemeModel:(id)arg0 context:(id)arg1;
- (void)updateWithAwemeModel:(id)arg0 context:(id)arg1;
- (void)setGenreType:(long long)arg0;
- (long long)genreType;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)setVideoView:(id)arg0;
- (id)videoView;
- (id)liveView;
- (void)setLiveView:(id)arg0;
- (id)currentView;
- (id)albumView;

@end
