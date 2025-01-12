//
//     Generated by private class-dump
//

@class UIView, AWEVideoPublishChapterViewModel, NSString, ACCChapterCenterLineView, ACCChapterTimeLineController, UIButton, UITableView, UIImageView, DVEVCContext, DVETrackPanelContext, UILabel;
@protocol ACCChapterOverviewMediaTimelineViewDelegate, ACCChapterVideoTrackPreviewTransitionDelegate;

@interface ACCChapterOverviewViewController : UIViewController <ACCChapterMediaTimelineViewDelegate, ACCChapterVideoTrackPreviewTransitionDelegate, UITableViewDelegate, UITableViewDataSource> {
    BOOL _showClearBtn;
    BOOL _isIntelligentChapter;
    DVEVCContext *_vcContext;
    ACCChapterTimeLineController *_timelineController;
    UIView *_containerView;
    id<ACCChapterOverviewMediaTimelineViewDelegate> _timelineDelegate;
    id<ACCChapterVideoTrackPreviewTransitionDelegate> _transitionDelegate;
    id /* block */ _overviewDidCloseBlock;
    id /* block */ _clearAllChaptersBlock;
    id /* block */ _editBlock;
    id /* block */ _adjustBlock;
    id /* block */ _saveBlock;
    DVETrackPanelContext *_trackPanelContext;
    AWEVideoPublishChapterViewModel *_chapterViewModel;
    UITableView *_chapterTableView;
    ACCChapterCenterLineView *_playHead;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIView *_closeArea;
    UIButton *_clearButton;
    UIImageView *_clearIcon;
    UILabel *_clearLabel;
    UILabel *_intelligentChapterLabel;
    double _containerHeight;
    UIButton *_adjustButton;
    UIButton *_saveButton;
}

@property (retain, nonatomic) DVETrackPanelContext *trackPanelContext;
@property (retain, nonatomic) AWEVideoPublishChapterViewModel *chapterViewModel;
@property (retain, nonatomic) ACCChapterTimeLineController *timelineController;
@property (retain, nonatomic) UITableView *chapterTableView;
@property (retain, nonatomic) ACCChapterCenterLineView *playHead;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *closeArea;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIImageView *clearIcon;
@property (retain, nonatomic) UILabel *clearLabel;
@property (retain, nonatomic) UILabel *intelligentChapterLabel;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) UIButton *adjustButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (weak, nonatomic) id<ACCChapterOverviewMediaTimelineViewDelegate> timelineDelegate;
@property (weak, nonatomic) id<ACCChapterVideoTrackPreviewTransitionDelegate> transitionDelegate;
@property (copy, nonatomic) id /* block */ overviewDidCloseBlock;
@property (nonatomic) BOOL showClearBtn;
@property (copy, nonatomic) id /* block */ clearAllChaptersBlock;
@property (copy, nonatomic) id /* block */ editBlock;
@property (copy, nonatomic) id /* block */ adjustBlock;
@property (copy, nonatomic) id /* block */ saveBlock;
@property (nonatomic) BOOL isIntelligentChapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapMediaTimeline;
- (id)timelineDelegate;
- (void)timeline:(id)arg0 didChangeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)timelineWillBeginDragging:(id)arg0;
- (void)setTimelineDelegate:(id)arg0;
- (void)didSelectTransition:(id)arg0;
- (id)vcContext;
- (void)setVcContext:(id)arg0;
- (void)setEditBlock:(id /* block */)arg0;
- (id /* block */)editBlock;
- (void)setTrackPanelContext:(id)arg0;
- (id)playHead;
- (id)trackPanelContext;
- (void)setPlayHead:(id)arg0;
- (void)timelineDidEndDecelerating:(id)arg0;
- (void)timelineDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (BOOL)useIntelligentChapter;
- (id)closeArea;
- (id)clearIcon;
- (id)chapterTableView;
- (id)intelligentChapterLabel;
- (void)setChapterViewModel:(id)arg0;
- (id)chapterViewModel;
- (void)tryAttachForTimeline:(id)arg0;
- (id /* block */)overviewDidCloseBlock;
- (id /* block */)clearAllChaptersBlock;
- (id /* block */)adjustBlock;
- (void)didClickCloseButton:(id)arg0;
- (void)clearButtonAction:(id)arg0;
- (id)p_createButtonWithTitle:(id)arg0;
- (void)adjustButtonAction:(id)arg0;
- (void)saveButtonAction:(id)arg0;
- (id)initWithTrackPanelContext:(id)arg0;
- (void)updateWithChapterViewModel:(id)arg0;
- (void)showOnVC:(id)arg0 animations:(id /* block */)arg1;
- (void)closeWithAnimations:(id /* block */)arg0;
- (void)setIsIntelligentChapter:(BOOL)arg0;
- (void)setShowClearBtn:(BOOL)arg0;
- (void)setOverviewDidCloseBlock:(id /* block */)arg0;
- (BOOL)showClearBtn;
- (void)setClearAllChaptersBlock:(id /* block */)arg0;
- (void)setAdjustBlock:(id /* block */)arg0;
- (BOOL)isIntelligentChapter;
- (void)setChapterTableView:(id)arg0;
- (void)setCloseArea:(id)arg0;
- (void)setClearIcon:(id)arg0;
- (void)setClearLabel:(id)arg0;
- (void)setIntelligentChapterLabel:(id)arg0;
- (void)setAdjustButton:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (void)reloadData;
- (id)containerView;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)clearButton;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)saveButton;
- (void)setSaveButton:(id)arg0;
- (id)clearLabel;
- (id)adjustButton;
- (id /* block */)saveBlock;
- (void)setSaveBlock:(id /* block */)arg0;
- (id)timelineController;
- (void)setTimelineController:(id)arg0;
- (void)setClearButton:(id)arg0;
- (void)setContainerHeight:(double)arg0;
- (double)containerHeight;

@end
