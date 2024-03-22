//
//     Generated by private class-dump
//

@class NSString, LOTAnimationView, NSTimer, UILabel, UIView, AWEAwemeModel;

@interface AWEProfileMilestoneAnimationController : NSObject <AWEProfilePostMilestoneAnimationProtocol> {
    LOTAnimationView *_throwFlowersAnimationView;
    UIView *_playCountAnimationView;
    UILabel *_titleLabel;
    NSString *_awemeID;
    NSTimer *_playCountTimer;
    AWEAwemeModel *_awemeModel;
}

@property (retain, nonatomic) LOTAnimationView *throwFlowersAnimationView;
@property (retain, nonatomic) UIView *playCountAnimationView;
@property (weak, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *awemeID;
@property (weak, nonatomic) NSTimer *playCountTimer;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (void)playMilestoneAnimationIfNeeded:(id)arg0 suffixText:(id)arg1 playCount:(long long)arg2 awemeModel:(id)arg3;
- (id)milestoneManager;
- (void)stopMilestoneAnimationIfNeeded:(id)arg0;
- (void)playPlayCountAnimation:(id)arg0 suffixText:(id)arg1 playCount:(long long)arg2;
- (void)checkPlayMilestoneAnimationWith:(id)arg0 playCount:(long long)arg1 titleLabel:(id)arg2 block:(id /* block */)arg3;
- (id)milestoneSettings;
- (BOOL)meetThresholdWith:(long long)arg0 lastPlayCount:(long long)arg1;
- (void)setPlayCountAnimationView:(id)arg0;
- (void)playPlayCountAnimationAfterTimer:(id)arg0 playCount:(long long)arg1;
- (void)stopPlayCountAnimation;
- (void)playThrowFlowersAnimation:(id)arg0 completion:(id /* block */)arg1;
- (id)playCountAnimationView;
- (void)setPlayCountTimer:(id)arg0;
- (id)throwFlowersAnimationView;
- (void)setThrowFlowersAnimationView:(id)arg0;
- (void)stopThrowFlowersAnimation;
- (id)playCountTimer;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;

@end
