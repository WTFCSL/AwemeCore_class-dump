//
//     Generated by private class-dump
//

@class UIView, AWEAIVideoClipMusicSelectView, AWEAIVideoClipFavoriteMusicSelectView, UIButton, NSDictionary, NSMutableArray, AWEVideoPublishMusicSelectTopTabView, UILabel;
@protocol AWEStudioMusicModelProtocol, AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate;

@interface AWEAIVideoClipMusicPanelView : UIView {
    BOOL _favoriteTabEnabled;
    UIButton *_confirmButton;
    id /* block */ _didSelectMusicHandler;
    id /* block */ _enterMusicLibraryHandler;
    UILabel *_titleLabel;
    AWEVideoPublishMusicSelectTopTabView *_topTabView;
    UIView *_selectViewContainer;
    AWEAIVideoClipMusicSelectView *_musicSelectView;
    AWEAIVideoClipFavoriteMusicSelectView *_favoriteMusicSelectView;
    NSMutableArray *_favoriteMusicList;
    id<AWEStudioMusicModelProtocol> _selectedMusic;
    id<AWEStudioMusicModelProtocol> _previousSelectedMusic;
    NSDictionary *_referExtra;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEVideoPublishMusicSelectTopTabView *topTabView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *selectViewContainer;
@property (retain, nonatomic) AWEAIVideoClipMusicSelectView *musicSelectView;
@property (retain, nonatomic) AWEAIVideoClipFavoriteMusicSelectView *favoriteMusicSelectView;
@property (retain, nonatomic) NSMutableArray *favoriteMusicList;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> selectedMusic;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> previousSelectedMusic;
@property (nonatomic) BOOL favoriteTabEnabled;
@property (retain, nonatomic) NSDictionary *referExtra;
@property (copy, nonatomic) id /* block */ didSelectMusicHandler;
@property (copy, nonatomic) id /* block */ enterMusicLibraryHandler;
@property (weak, nonatomic) id<AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate> favoriteMusicDelegate;

- (id)referExtra;
- (void)setReferExtra:(id)arg0;
- (void)setSelectedMusic:(id)arg0;
- (void)updateWithMusicList:(id)arg0 playingMusic:(id)arg1;
- (id)musicSelectView;
- (void)setDidSelectMusicHandler:(id /* block */)arg0;
- (void)setEnterMusicLibraryHandler:(id /* block */)arg0;
- (id)selectedMusic;
- (void)updateFavoriteMusicList:(id)arg0 loading:(BOOL)arg1;
- (void)undoSelection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 favoriteTabEnabled:(BOOL)arg1 referExtra:(id)arg2;
- (void)setFavoriteMusicDelegate:(id)arg0;
- (BOOL)favoriteTabEnabled;
- (id)topTabView;
- (void)setSelectViewContainer:(id)arg0;
- (id)selectViewContainer;
- (void)setupMusicSelectViewsInContainer:(id)arg0;
- (id /* block */)didSelectMusicHandler;
- (id /* block */)enterMusicLibraryHandler;
- (id)favoriteMusicSelectView;
- (void)switchToFavoriteTab:(BOOL)arg0;
- (id)favoriteMusicList;
- (id)previousSelectedMusic;
- (void)setPreviousSelectedMusic:(id)arg0;
- (id)favoriteMusicDelegate;
- (void)setTopTabView:(id)arg0;
- (void)setMusicSelectView:(id)arg0;
- (void)setFavoriteMusicSelectView:(id)arg0;
- (void)setFavoriteMusicList:(id)arg0;
- (void)setFavoriteTabEnabled:(BOOL)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;

@end
