//
//     Generated by private class-dump
//

@class NSArray, NSString, AWELVideoAlbumInfoModel, AWERVLVEpisodesView;
@protocol AWERVLVSelectDelegate;

@interface AWERVLVEpisodesViewController : AWERVMetaPanelViewController <UIGestureRecognizerDelegate, AWERVLVEpisodesViewDelegate> {
    BOOL _shouldSimplifyTitle;
    id /* block */ _episodesCloseBlock;
    id<AWERVLVSelectDelegate> _delegate;
    AWERVLVEpisodesView *_episodesView;
    AWELVideoAlbumInfoModel *_albumInfoModel;
    NSArray *_episodeList;
}

@property (retain, nonatomic) AWERVLVEpisodesView *episodesView;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfoModel;
@property (copy, nonatomic) NSArray *episodeList;
@property (copy, nonatomic) id /* block */ episodesCloseBlock;
@property (weak, nonatomic) id<AWERVLVSelectDelegate> delegate;
@property (nonatomic) BOOL shouldSimplifyTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)episodeList;
- (void)setEpisodeList:(id)arg0;
- (id)episodesView;
- (void)setEpisodesView:(id)arg0;
- (void)setAlbumInfoModel:(id)arg0;
- (id)albumInfoModel;
- (void)refreshModel:(id)arg0 episodeList:(id)arg1 currentSelectIndex:(long long)arg2;
- (void)setEpisodesCloseBlock:(id /* block */)arg0;
- (void)refreshModel:(id)arg0 title:(id)arg1 subTitle:(id)arg2 episodeList:(id)arg3 currentSelectIndex:(long long)arg4;
- (void)setShouldSimplifyTitle:(BOOL)arg0;
- (void)trackLongVideoShowWithEpisodeIndex:(long long)arg0;
- (id)panelContentView;
- (id /* block */)episodesCloseBlock;
- (BOOL)shouldSimplifyTitle;
- (void).cxx_destruct;
- (id)delegate;
- (id)contentScrollView;
- (void)setDelegate:(id)arg0;
- (void)closeButtonTapped;

@end