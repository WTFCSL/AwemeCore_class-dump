//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEFeedFeelGoodCellViewController, AWEAwemeModel, AWEFeedContainerViewController, NSString;
@protocol AWEFrequencyControlStrategyProtocol;

@interface AWEFeedFeelGoodController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedFeelGoodCellViewControllerDelegate, AWESmartQuestionnaireMessage, AWEFeedFeelGoodControllerProtocol> {
    BOOL _justRefresh;
    BOOL _hasRequest;
    AWEFeedFeelGoodCellViewController *_feelGoodCellViewController;
    AWEFeedContainerViewController *_feedContainerVC;
    NSMutableDictionary *_surveyRecordDict;
    NSMutableDictionary *_surveyShowDict;
    NSMutableDictionary *_surveyLoopDict;
    NSMutableDictionary *_surveyPlayProgressDict;
    AWEAwemeModel *_shouldPreloadModel;
    NSString *_quitMethod;
    AWEAwemeModel *_beforeRefreshModel;
    double _playPercent;
    AWEAwemeModel *_interactionModel;
    id<AWEFrequencyControlStrategyProtocol> _frequencyControl;
}

@property (retain, nonatomic) AWEFeedFeelGoodCellViewController *feelGoodCellViewController;
@property (weak, nonatomic) AWEFeedContainerViewController *feedContainerVC;
@property (retain, nonatomic) NSMutableDictionary *surveyRecordDict;
@property (retain, nonatomic) NSMutableDictionary *surveyShowDict;
@property (retain, nonatomic) NSMutableDictionary *surveyLoopDict;
@property (retain, nonatomic) NSMutableDictionary *surveyPlayProgressDict;
@property (retain, nonatomic) AWEAwemeModel *shouldPreloadModel;
@property (nonatomic) BOOL justRefresh;
@property (copy, nonatomic) NSString *quitMethod;
@property (retain, nonatomic) AWEAwemeModel *beforeRefreshModel;
@property (nonatomic) double playPercent;
@property (nonatomic) BOOL hasRequest;
@property (retain, nonatomic) AWEAwemeModel *interactionModel;
@property (retain, nonatomic) id<AWEFrequencyControlStrategyProtocol> frequencyControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)feelGoodCellViewController;
- (double)playPercent;
- (void)configureCell:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (id)frequencyControl;
- (void)setFrequencyControl:(id)arg0;
- (void)getQuestionnaire:(id /* block */)arg0;
- (void)onSmartQuestionnaireResult:(id)arg0;
- (void)setPlayPercent:(double)arg0;
- (void)videoControllerWillStartNextLoop:(id)arg0;
- (void)bindEvent;
- (void)beginRefresh;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)refreshCompletion:(id)arg0 error:(id)arg1 needAnimation:(BOOL)arg2;
- (void)scrollViewDidScrollEndWithActive;
- (id)arrayToJsonString:(id)arg0;
- (BOOL)shouldShowSurvey:(id)arg0;
- (BOOL)isReadyForFeedSurvey:(id)arg0;
- (void)showFeelGood;
- (BOOL)isShowingFeedSurvey:(id)arg0;
- (void)dismissFeelGood:(BOOL)arg0;
- (void)setShouldPreloadModel:(id)arg0;
- (void)setJustRefresh:(BOOL)arg0;
- (id)surveyPlayProgressDict;
- (void)tryAddPlayRecord:(id)arg0 playbackProgress:(double)arg1;
- (BOOL)hasRecordSurveyForModel:(id)arg0;
- (id)surveyShowDict;
- (id)shouldPreloadModel;
- (id)surveyLoopDict;
- (void)setBeforeRefreshModel:(id)arg0;
- (id)beforeRefreshModel;
- (void)setQuitMethod:(id)arg0;
- (void)trackSurveyShow:(id)arg0 show:(long long)arg1 msg:(id)arg2 playPercent:(double)arg3;
- (void)addSurveyRecord:(id)arg0;
- (id)quitMethod;
- (BOOL)justRefresh;
- (void)userDidCloseFeelGood;
- (void)userDidClickPlayer:(id)arg0;
- (void)userDidSubmitFeelGood:(id)arg0;
- (void)userDidNotUnderstandFeelGood:(id)arg0;
- (void)scrollToNextByLynx:(id)arg0;
- (BOOL)enableFeedPullRefresh;
- (void)setFeelGoodCellViewController:(id)arg0;
- (void)setSurveyShowDict:(id)arg0;
- (void)setSurveyLoopDict:(id)arg0;
- (void)setSurveyPlayProgressDict:(id)arg0;
- (void)setInteractionModel:(id)arg0;
- (id)surveyRecordDict;
- (void)setSurveyRecordDict:(id)arg0;
- (id)feedContainerVC;
- (void)setFeedContainerVC:(id)arg0;
- (void)addMessage;
- (void)requestQuestionnaireIfNeed;
- (void)filterSurveyModels;
- (void)addQestuionQuitLog:(id)arg0;
- (BOOL)enableShowUserProfile;
- (void)cleanCachedInteractionSurvey;
- (void)hasShownNonInteractionSurvey:(id)arg0;
- (BOOL)disableContainerHorizontalScrollWithModel:(id)arg0 directionToRight:(BOOL)arg1;
- (BOOL)hasRequest;
- (void).cxx_destruct;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)interactionModel;
- (void)addNotificationObserver;
- (void)setHasRequest:(BOOL)arg0;

@end
