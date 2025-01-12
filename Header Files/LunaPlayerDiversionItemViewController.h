//
//     Generated by private class-dump
//

@class NSString, BDXContext, LunaRecommendDataSource, UIView, AWEMusicFeedViewModel, AWEMusicDSPEventModel;
@protocol MusicService, BDXViewContainerProtocol;

@interface LunaPlayerDiversionItemViewController : UIViewController <BDXContainerLifecycleProtocol, LunaCycleViewItemProtocol> {
    BOOL _isCurrent;
    BOOL _isModelChanged;
    BOOL _lynxFinished;
    AWEMusicDSPEventModel *_eventModel;
    id<MusicService> _musicService;
    id _model;
    AWEMusicFeedViewModel *_feedViewModel;
    NSString *_identifier;
    UIView<BDXViewContainerProtocol> *_bdxView;
    BDXContext *_context;
    LunaRecommendDataSource *_recommendDataSource;
}

@property (retain, nonatomic) id model;
@property (retain, nonatomic) AWEMusicFeedViewModel *feedViewModel;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isCurrent;
@property (nonatomic) BOOL isModelChanged;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (retain, nonatomic) BDXContext *context;
@property (weak, nonatomic) LunaRecommendDataSource *recommendDataSource;
@property (nonatomic) BOOL lynxFinished;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;
@property (weak, nonatomic) id<MusicService> musicService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)itemDidAppear;
- (id)bdxView;
- (void)setBdxView:(id)arg0;
- (id)displayView;
- (void)setRecommendDataSource:(id)arg0;
- (id)recommendDataSource;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (id)eventModel;
- (void)setEventModel:(id)arg0;
- (id)pageEventParams;
- (void)attachModel:(id)arg0 identifier:(id)arg1;
- (void)currentPageWillChangeAnimation:(BOOL)arg0;
- (void)itemDidDisappear;
- (id)feedViewModel;
- (void)setIsModelChanged:(BOOL)arg0;
- (void)setFeedViewModel:(id)arg0;
- (void)mainFeed_viewDidAppear;
- (void)mainFeed_viewWillAppear;
- (BOOL)isModelChanged;
- (void)mainFeed_showVipInterceptIfNeeded;
- (void)setLynxFinished:(BOOL)arg0;
- (BOOL)lynxFinished;
- (id)p_lynxUrl;
- (id)p_songParamList:(id)arg0;
- (void)setModel:(id)arg0;
- (BOOL)isCurrent;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)identifier;
- (id)context;
- (void)reset;
- (void)viewDidLoad;
- (void)setIdentifier:(id)arg0;
- (void)setIsCurrent:(BOOL)arg0;
- (id)eventParams;

@end
