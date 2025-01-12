//
//     Generated by private class-dump
//

@class IESLiveMultiLinkerTeamTaskModel, NSString, IESLiveImageView, UILabel, UIView;

@interface IESLiveMultiLinkerTeamTaskView : UIView {
    BOOL _isRoomOwner;
    BOOL _isLoopAnimationRunning;
    BOOL _isShowingContributeTips;
    int _teamWorkType;
    id /* block */ _clickBlock;
    NSString *_playName;
    UILabel *_descriptionLabel;
    UIView *_seperateLine;
    IESLiveImageView *_bgAnimationImageView;
    IESLiveMultiLinkerTeamTaskModel *_model;
    unsigned long long _taskState;
}

@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) IESLiveImageView *bgAnimationImageView;
@property (retain, nonatomic) IESLiveMultiLinkerTeamTaskModel *model;
@property (nonatomic) unsigned long long taskState;
@property (nonatomic) BOOL isLoopAnimationRunning;
@property (nonatomic) BOOL isShowingContributeTips;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL isRoomOwner;
@property (nonatomic) int teamWorkType;
@property (copy, nonatomic) NSString *playName;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (id)seperateLine;
- (void)setSeperateLine:(id)arg0;
- (BOOL)isRoomOwner;
- (void)setIsRoomOwner:(BOOL)arg0;
- (void)hideSeperateLine;
- (id)playName;
- (void)setPlayName:(id)arg0;
- (void)showHadContributedTips;
- (void)updateLayoutToSmallStyle:(BOOL)arg0;
- (int)teamWorkType;
- (void)updateViewWtihState:(unsigned long long)arg0 model:(id)arg1;
- (void)setTeamWorkType:(int)arg0;
- (void)clickTaskView;
- (void)updateViewForRoomOwner;
- (void)updateViewForTeammate;
- (void)startLinerWaveAnimation;
- (BOOL)isLoopAnimationRunning;
- (void)stopLinerWaveAnimation;
- (BOOL)isShowingContributeTips;
- (void)setIsShowingContributeTips:(BOOL)arg0;
- (void)setIsLoopAnimationRunning:(BOOL)arg0;
- (void)setBgAnimationImageView:(id)arg0;
- (id)bgAnimationImageView;
- (unsigned long long)taskState;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)accessibilityLabel;
- (void)setTaskState:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setDescriptionLabel:(id)arg0;
- (id)descriptionLabel;
- (void)updateView;
- (BOOL)isAccessibilityElement;
- (void)setupView;

@end
