//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWETaskLiteModel, UILabel, UIView;

@interface AWETaskLiteEntranceView : UIView <UIGestureRecognizerDelegate, AWETaskLiteEntranceView> {
    id /* block */ pauseMusicBlock;
    AWETaskLiteModel *_model;
    UILabel *_title;
    UILabel *_subTitle;
    UILabel *_rewardLabel;
    UILabel *_highestProfix;
    UIImageView *_missionImage;
    UIImageView *_arrowImage;
    UIView *_lineView;
}

@property (retain, nonatomic) AWETaskLiteModel *model;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UILabel *rewardLabel;
@property (retain, nonatomic) UILabel *highestProfix;
@property (retain, nonatomic) UIImageView *missionImage;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UIView *lineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ pauseMusicBlock;

- (void)setupGesture;
- (void)setupSubview;
- (id)rewardLabel;
- (id)highestProfix;
- (id)missionImage;
- (id /* block */)pauseMusicBlock;
- (void)updateWithTaskLiteModel:(id)arg0;
- (void)setPauseMusicBlock:(id /* block */)arg0;
- (void)setRewardLabel:(id)arg0;
- (void)setHighestProfix:(id)arg0;
- (void)setMissionImage:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)handleSingleTap:(id)arg0;
- (id)model;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)reset;
- (void)setTitle:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)arrowImage;
- (void)setArrowImage:(id)arg0;
- (void)setupLayout;

@end
