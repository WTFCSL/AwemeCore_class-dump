//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWEUserHomeVisitorButton : UIButton {
    BOOL _shouldFitMiniScreen;
    BOOL _isGreetToastShow;
    UIImageView *_iconImageView;
    UIImageView *_completeImageView;
    UIView *_iconBackGroundView;
    UILabel *_detailLabel;
    UILabel *_defaultDetailLabel;
    UIView *_accessView;
    long long _currentGreetCount;
    double _animationDuration;
    unsigned long long _currentType;
    long long _currentCount;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *completeImageView;
@property (retain, nonatomic) UIView *iconBackGroundView;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *defaultDetailLabel;
@property (retain, nonatomic) UIView *accessView;
@property (nonatomic) double animationDuration;
@property (nonatomic) unsigned long long currentType;
@property (nonatomic) long long currentCount;
@property (nonatomic) BOOL shouldFitMiniScreen;
@property (nonatomic) long long currentGreetCount;
@property (nonatomic) BOOL isGreetToastShow;

+ (Class)aAWEUserProfileGreetCommonAdapterClass;

- (void)setCurrentType:(unsigned long long)arg0;
- (id)completeImageView;
- (void)setAccessView:(id)arg0;
- (id)accessView;
- (BOOL)isGreetToastShow;
- (void)setIsGreetToastShow:(BOOL)arg0;
- (id)aAWEUserProfileGreetCommonAdapter;
- (void)setCurrentGreetCount:(long long)arg0;
- (void)updateToNoVisitorSetting;
- (void)updateVisitorCount:(long long)arg0;
- (void)_commontInitWithType:(unsigned long long)arg0;
- (id)iconBackGroundView;
- (void)setCompleteImageView:(id)arg0;
- (void)setIconBackGroundView:(id)arg0;
- (void)setShouldFitMiniScreen:(BOOL)arg0;
- (id)defaultDetailLabel;
- (void)p_updateIconAndDetailConstraint;
- (void)layoutReminderDefaultIcon;
- (void)layoutReminderDefaultHTSGreet;
- (long long)currentGreetCount;
- (void)p_updateToNoVisitorSetting;
- (void)p_updateVisitorCountAnimated;
- (void)p_showNewGreetGuideBubbleIfNeeded;
- (BOOL)shouldFitMiniScreen;
- (void)setDefaultDetailLabel:(id)arg0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (double)animationDuration;
- (id)initWithType:(unsigned long long)arg0;
- (void)setAnimationDuration:(double)arg0;
- (void)setHighlighted:(BOOL)arg0;
- (id)iconImageView;
- (long long)currentCount;
- (id)textContent;
- (void)setIconImageView:(id)arg0;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg0;
- (void)setCurrentCount:(long long)arg0;
- (unsigned long long)currentType;

@end