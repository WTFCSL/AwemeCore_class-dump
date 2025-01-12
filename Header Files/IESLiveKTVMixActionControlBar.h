//
//     Generated by private class-dump
//

@class UIButton, IESLiveKTVControlStore, RACDisposable, NSString, IESLiveKTVBarButton, UILabel, UIView;
@protocol IESLiveKTVControlActions;

@interface IESLiveKTVMixActionControlBar : UIView {
    NSString *_enterFrom;
    id /* block */ _clickedBackAction;
    UIView *_topLine;
    IESLiveKTVBarButton *_playButton;
    UILabel *_playButtonTitle;
    IESLiveKTVBarButton *_nextButton;
    UILabel *_nextButtonTitle;
    UIButton *_jumpToKTVButton;
    UILabel *_currentPlayTimeLabel;
    UILabel *_totalPlayTimeLabel;
    IESLiveKTVControlStore *_store;
    RACDisposable *_updatePlayTimeDisposol;
    id<IESLiveKTVControlActions> _actionsCreator;
}

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) IESLiveKTVBarButton *playButton;
@property (retain, nonatomic) UILabel *playButtonTitle;
@property (retain, nonatomic) IESLiveKTVBarButton *nextButton;
@property (retain, nonatomic) UILabel *nextButtonTitle;
@property (retain, nonatomic) UIButton *jumpToKTVButton;
@property (retain, nonatomic) UILabel *currentPlayTimeLabel;
@property (retain, nonatomic) UILabel *totalPlayTimeLabel;
@property (retain, nonatomic) IESLiveKTVControlStore *store;
@property (retain, nonatomic) RACDisposable *updatePlayTimeDisposol;
@property (retain, nonatomic) id<IESLiveKTVControlActions> actionsCreator;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ clickedBackAction;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)p_addObserver;
- (id)currentPlayTimeLabel;
- (void)setCurrentPlayTimeLabel:(id)arg0;
- (id)actionsCreator;
- (void)setActionsCreator:(id)arg0;
- (void)p_setupUIs;
- (void)tr_clickedControlEvent:(id)arg0;
- (void)updateSongPlayStatus;
- (void)playNextSong;
- (id /* block */)clickedBackAction;
- (void)setClickedBackAction:(id /* block */)arg0;
- (void)updatePlayTimeWithCurrentPlayTime:(long long)arg0;
- (id)jumpToKTVButton;
- (id)totalPlayTimeLabel;
- (void)makeConstrain;
- (void)addUpdatePlayTimeSchedule;
- (void)clearUpdatePlayTimeSchedule;
- (id)updatePlayTimeDisposol;
- (void)setUpdatePlayTimeDisposol:(id)arg0;
- (id)timeFormatStringWithSecond:(long long)arg0;
- (void)setJumpToKTVButton:(id)arg0;
- (void)setTotalPlayTimeLabel:(id)arg0;
- (id)initWithStore:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (void)render;
- (id)nextButton;
- (void)setNextButton:(id)arg0;
- (id)playButton;
- (id)playButtonTitle;
- (void)setPlayButtonTitle:(id)arg0;
- (id)nextButtonTitle;
- (void)setNextButtonTitle:(id)arg0;
- (id)topLine;
- (void)setTopLine:(id)arg0;
- (void)setPlayButton:(id)arg0;

@end
