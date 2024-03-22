//
//     Generated by private class-dump
//

@class AWEUserModel, NSString, UIImageView, NSDictionary, UILabel, UIView, UIViewController;
@protocol AWEUserRecommendViewControllerProtocol;

@interface AWEUserRecommendEmptyRecommendViewController : UIViewController <AWEUserRecommendEmptyRecommendViewControllerProtocol> {
    BOOL _isPlayingAnimation;
    AWEUserModel *_user;
    UIView *_containerView;
    UIImageView *_tipIconView;
    UILabel *_tipTitleLabel;
    UILabel *_tipSubstileLabel;
    NSString *_userID;
    long long _type;
    UIViewController<AWEUserRecommendViewControllerProtocol> *_userRecommendVC;
    UIView *_recommendView;
    NSDictionary *_extraDict;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *tipIconView;
@property (retain, nonatomic) UILabel *tipTitleLabel;
@property (retain, nonatomic) UILabel *tipSubstileLabel;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isPlayingAnimation;
@property (retain, nonatomic) UIViewController<AWEUserRecommendViewControllerProtocol> *userRecommendVC;
@property (retain, nonatomic) UIView *recommendView;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (retain, nonatomic) AWEUserModel *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtraDict:(id)arg0;
- (id)extraDict;
- (id)enterFromString;
- (void)p_setupUI;
- (id)recommendView;
- (void)setRecommendView:(id)arg0;
- (id)iconImageForEmptyType;
- (id)titleForEmptyType;
- (id)descriptionForEmptyType;
- (id)tipTitleLabel;
- (void)setTipTitleLabel:(id)arg0;
- (void)setIsPlayingAnimation:(BOOL)arg0;
- (BOOL)isPlayingAnimation;
- (id)userRecommendVC;
- (void)setUserRecommendVC:(id)arg0;
- (id)tipIconView;
- (id)tipSubstileLabel;
- (void)playRecommendViewAnimation:(BOOL)arg0;
- (void)updateWithEmptyType:(long long)arg0;
- (id)initWithUserID:(id)arg0 type:(long long)arg1 extraDict:(id)arg2;
- (BOOL)hasRecommendData;
- (void)setTipIconView:(id)arg0;
- (void)setTipSubstileLabel:(id)arg0;
- (void)setUser:(id)arg0;
- (id)userID;
- (id)user;
- (void).cxx_destruct;
- (double)contentHeight;
- (long long)type;
- (void)setUserID:(id)arg0;
- (void)setContainerView:(id)arg0;
- (void)setType:(long long)arg0;
- (id)containerView;
- (void)viewDidLoad;

@end