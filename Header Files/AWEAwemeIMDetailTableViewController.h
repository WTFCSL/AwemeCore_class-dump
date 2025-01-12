//
//     Generated by private class-dump
//

@class AWEAwemeModel, AWEImBottomInputViewBarContext, NSString, AWEAwemeIMDetailTopContainerView, AWEGradientView, AWEListDataController, UIAlertController, UILabel;
@protocol AWEIMFeedListDataControllerProtocol;

@interface AWEAwemeIMDetailTableViewController : AWEAwemeDetailTableViewController <AWEIMMediaDetailTransitionInnerContextProvider> {
    BOOL _isPushIn;
    BOOL _disableShowBottomBar;
    BOOL _shouldShowAlert;
    BOOL _isAlertShowing;
    BOOL _showCommentPanel;
    BOOL _hasShowFirstNotIMFeed;
    BOOL _isPausedBeforeRecording;
    UILabel *_imTitleLabel;
    AWEAwemeIMDetailTopContainerView *_topContainerView;
    AWEGradientView *_headerGradientView;
    AWEGradientView *_bottomGradientView;
    AWEListDataController<AWEIMFeedListDataControllerProtocol> *_imDataController;
    AWEImBottomInputViewBarContext *_imBottomBarContext;
    AWEAwemeModel *_cachedModel;
    UIAlertController *_alertController;
    NSString *_recalledMessageID;
    NSString *_beginScrollCurrentMessageID;
    NSString *_cids;
    AWEAwemeModel *_awemeModelForCompare;
}

@property (nonatomic) BOOL isPushIn;
@property (nonatomic) BOOL disableShowBottomBar;
@property (retain, nonatomic) UILabel *imTitleLabel;
@property (retain, nonatomic) AWEAwemeIMDetailTopContainerView *topContainerView;
@property (retain, nonatomic) AWEGradientView *headerGradientView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (weak, nonatomic) AWEListDataController<AWEIMFeedListDataControllerProtocol> *imDataController;
@property (weak, nonatomic) AWEImBottomInputViewBarContext *imBottomBarContext;
@property (retain, nonatomic) AWEAwemeModel *cachedModel;
@property (retain, nonatomic) UIAlertController *alertController;
@property (nonatomic) BOOL shouldShowAlert;
@property (nonatomic) BOOL isAlertShowing;
@property (retain, nonatomic) NSString *recalledMessageID;
@property (retain, nonatomic) NSString *beginScrollCurrentMessageID;
@property (nonatomic) BOOL showCommentPanel;
@property (copy, nonatomic) NSString *cids;
@property (nonatomic) BOOL hasShowFirstNotIMFeed;
@property (nonatomic) BOOL isPausedBeforeRecording;
@property (retain, nonatomic) AWEAwemeModel *awemeModelForCompare;

+ (id)detailTableViewControllerWithDataController:(id)arg0 initialIndex:(long long)arg1 referString:(id)arg2 enterFrom:(id)arg3 context:(id)arg4;

- (void)didFinishTapTAIsFriendWithUser:(id)arg0 isFriend:(BOOL)arg1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)zoomTransitionEndView;
- (id)topContainerView;
- (void)setTopContainerView:(id)arg0;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (BOOL)tableviewGestureRecognizerShouldBegin:(id)arg0;
- (BOOL)tableviewGestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyIfNeeded:(id)arg1;
- (void)setBottomBarHidden:(BOOL)arg0;
- (void)setCids:(id)arg0;
- (id)cids;
- (BOOL)shouldShowAlert;
- (BOOL)isAlertShowing;
- (void)cellWillDisplay:(id)arg0 forRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)cellDidEndDisplay:(id)arg0;
- (void)setShouldShowAlert:(BOOL)arg0;
- (void)configVoiceOverElements;
- (id)configCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)p_setupView;
- (void)updateUpperRightButtonHidden:(BOOL)arg0 awemeModel:(id)arg1;
- (BOOL)closeCellPreload;
- (void)_onScrollDidEnd;
- (id)profileUIDForCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)setImDataController:(id)arg0;
- (void)p_onAwemeDeleteNotification:(id)arg0;
- (void)setShowCommentPanel:(BOOL)arg0;
- (id)imDataController;
- (void)handleMessageRecallNotification:(id)arg0;
- (void)handleRecordDidStart;
- (void)handleRecordDidEnd;
- (void)p_updateTopBottomGradientView:(id)arg0;
- (void)setIsPushIn:(BOOL)arg0;
- (void)p_showAlert;
- (BOOL)showCommentPanel;
- (void)setRecalledMessageID:(id)arg0;
- (id)recalledMessageID;
- (void)setIsPausedBeforeRecording:(BOOL)arg0;
- (BOOL)isPausedBeforeRecording;
- (id)imBottomBarContext;
- (id)p_currentDisplayImCell;
- (void)p_postReplyShareNotification;
- (void)p_handleShareFeedReplied;
- (void)p_updateCurrentMessageWithAweme:(id)arg0;
- (id)p_dynamicCast:(id)arg0;
- (void)p_checkAndNoticeAwemeModelChanged;
- (id)imTitleLabel;
- (id /* block */)createImBottomInputViewBarContextBlock;
- (void)setDisableShowBottomBar:(BOOL)arg0;
- (BOOL)disableShowBottomBar;
- (BOOL)hasShowFirstNotIMFeed;
- (void)setHasShowFirstNotIMFeed:(BOOL)arg0;
- (BOOL)isPushIn;
- (void)setBeginScrollCurrentMessageID:(id)arg0;
- (void)p_showAlertWhenDidEndScroll;
- (id)headerGradientView;
- (id)beginScrollCurrentMessageID;
- (void)setIsAlertShowing:(BOOL)arg0;
- (id)awemeModelForCompare;
- (void)setAwemeModelForCompare:(id)arg0;
- (void)setImBottomBarContext:(id)arg0;
- (double)mediaDetailTransitionAnimationDuration;
- (void)setImTitleLabel:(id)arg0;
- (void)setHeaderGradientView:(id)arg0;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (double)animationDuration;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)dealloc;
- (void)play;
- (void)viewDidLoad;
- (id)alertController;
- (void)setAlertController:(id)arg0;
- (id)cachedModel;
- (void)setCachedModel:(id)arg0;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;

@end
