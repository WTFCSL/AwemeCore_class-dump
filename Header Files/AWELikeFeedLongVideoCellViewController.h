//
//     Generated by private class-dump
//

@class UIImageView, NSTimer, UILabel, AWEVideoHallBottomBarView;

@interface AWELikeFeedLongVideoCellViewController : AWEFeedLongVideoCellViewController {
    BOOL _needShowHistoryTips;
    AWEVideoHallBottomBarView *_videoHallBottomView;
    UILabel *_tipsLabel;
    UIImageView *_tipsIcon;
    NSTimer *_tipsTimer;
}

@property (retain, nonatomic) AWEVideoHallBottomBarView *videoHallBottomView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *tipsIcon;
@property (nonatomic) BOOL needShowHistoryTips;
@property (retain, nonatomic) NSTimer *tipsTimer;

- (id)tipsLabel;
- (void)addNotifications;
- (void)setTipsLabel:(id)arg0;
- (void)configTracker;
- (void)setTipsTimer:(id)arg0;
- (id)tipsTimer;
- (void)updateDefaultSeekToTime:(id)arg0;
- (void)submitLongVideoHistory;
- (void)videoDidPlay;
- (id)tipsIcon;
- (void)setTipsIcon:(id)arg0;
- (id)videoHallBottomView;
- (void)setNeedShowHistoryTips:(BOOL)arg0;
- (BOOL)needShowHistoryTips;
- (void)showHistoryTips;
- (void)handleClickBottomButton;
- (void)setVideoHallBottomView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)setupSubviews;
- (void)willReset;
- (void)handleAppWillResignActive;
- (id)pageName;

@end
