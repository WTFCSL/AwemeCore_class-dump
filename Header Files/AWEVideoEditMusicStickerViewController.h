//
//     Generated by private class-dump
//

@class NSString, AWEASSSearchMusicViewController, AWEVideoPublishViewModel, AWEAudioClipFeatureManager, AWEASSMusicNavView, NSObject, AWEASSMusicListViewController, UILabel;
@protocol ACCCommonSearchBarProtocol;

@interface AWEVideoEditMusicStickerViewController : UIViewController <ACCCommonSearchBarDelegate, ACCEditLyricStickerMusicSelectPageProtocol> {
    BOOL _existsMusic;
    BOOL _idleTimerDisalbeHandled;
    id /* block */ _completion;
    id /* block */ _didClipRange;
    id /* block */ _dismissHandler;
    NSString *_pageSource;
    id /* block */ _suggestSelectedChangeBlock;
    AWEASSMusicNavView *_navView;
    NSObject<ACCCommonSearchBarProtocol> *_searchBar;
    UILabel *_tipsLabel;
    AWEVideoPublishViewModel *_repository;
    AWEASSMusicListViewController *_listVC;
    AWEASSSearchMusicViewController *_searchVC;
    double _startOffset;
    AWEAudioClipFeatureManager *_clipManager;
}

@property (nonatomic) BOOL existsMusic;
@property (retain, nonatomic) AWEASSMusicNavView *navView;
@property (retain, nonatomic) NSObject<ACCCommonSearchBarProtocol> *searchBar;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) AWEASSMusicListViewController *listVC;
@property (retain, nonatomic) AWEASSSearchMusicViewController *searchVC;
@property (nonatomic) double startOffset;
@property (retain, nonatomic) AWEAudioClipFeatureManager *clipManager;
@property (nonatomic) BOOL idleTimerDisalbeHandled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ didClipRange;
@property (copy, nonatomic) id /* block */ suggestSelectedChangeBlock;
@property (copy, nonatomic) NSString *pageSource;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (id)pageSource;
- (void)setPageSource:(id)arg0;
- (id)navView;
- (void)setNavView:(id)arg0;
- (id)searchVC;
- (void)setSearchVC:(id)arg0;
- (id)listVC;
- (void)setListVC:(id)arg0;
- (id)initWithRepository:(id)arg0;
- (void)idleTimerDisalbeRestore;
- (void)setupViewComponents;
- (void)_readCacheAndFetchRecommendMusic;
- (void)idleTimerDisalbe;
- (void)setIdleTimerDisalbeHandled:(BOOL)arg0;
- (BOOL)idleTimerDisalbeHandled;
- (BOOL)existsMusic;
- (void)_clearSearch;
- (void)_changeSearchWord:(id)arg0;
- (void)_enterSearch;
- (void)removeFromParentViewControllerAnimated;
- (id)_filterMusicWithMusicList:(id)arg0;
- (id)p_transformMusicListToCollectionData:(id)arg0;
- (void)_closeButtonClicked:(id)arg0;
- (void)_exitSearch;
- (void)_checkApplyMusicWithMusicModel:(id)arg0 error:(id)arg1;
- (void)p_showClipPanelWithMusic:(id)arg0;
- (id /* block */)suggestSelectedChangeBlock;
- (id /* block */)didClipRange;
- (void)showOnViewController:(id)arg0 startOffset:(double)arg1 completion:(id /* block */)arg2;
- (void)setDidClipRange:(id /* block */)arg0;
- (void)setSuggestSelectedChangeBlock:(id /* block */)arg0;
- (void)setExistsMusic:(BOOL)arg0;
- (id)searchBar;
- (void)setSearchBar:(id)arg0;
- (void)_pause;
- (void)viewDidAppear:(BOOL)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (void)searchBar:(id)arg0 textDidChange:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (double)startOffset;
- (void)setStartOffset:(double)arg0;
- (BOOL)textFieldShouldBeginEditing:(id)arg0;
- (void)setRepository:(id)arg0;
- (id)repository;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (id /* block */)dismissHandler;
- (id)clipManager;
- (void)setClipManager:(id)arg0;
- (void)_startSearch;

@end