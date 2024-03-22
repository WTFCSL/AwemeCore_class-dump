//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEMultiAvatarView, UILabel, MASConstraint, AFDCloseFriendsMomentModel;

@interface AFDCloseFriendsVisitorBarView : UIView {
    BOOL _hasExpired;
    unsigned long long _scene;
    NSString *_currentMomentID;
    AFDCloseFriendsMomentModel *_currentMomentModel;
    id /* block */ _onViewDidTapBlock;
    UIImageView *_eyeImageView;
    AWEMultiAvatarView *_multiAvatarView;
    UILabel *_titleLabel;
    MASConstraint *_eyeImageViewRightConstraint;
    MASConstraint *_multiAvatarViewRightConstraint;
    long long _visitorCount;
}

@property (retain, nonatomic) UIImageView *eyeImageView;
@property (retain, nonatomic) AWEMultiAvatarView *multiAvatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MASConstraint *eyeImageViewRightConstraint;
@property (retain, nonatomic) MASConstraint *multiAvatarViewRightConstraint;
@property (nonatomic) BOOL hasExpired;
@property (nonatomic) long long visitorCount;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *currentMomentID;
@property (retain, nonatomic) AFDCloseFriendsMomentModel *currentMomentModel;
@property (copy, nonatomic) id /* block */ onViewDidTapBlock;

+ (id)barConfigDict;
+ (id)defaultBarConfigDict;
+ (id)barConfigEmptyViewerString;

- (id)currentMomentModel;
- (void)setCurrentMomentModel:(id)arg0;
- (long long)visitorCount;
- (void)setVisitorCount:(long long)arg0;
- (void)setupEvent;
- (id)eyeImageView;
- (id)multiAvatarView;
- (BOOL)isNewBottomBarStyle;
- (void)setEyeImageViewRightConstraint:(id)arg0;
- (void)setMultiAvatarViewRightConstraint:(id)arg0;
- (id)eyeImageViewRightConstraint;
- (id)multiAvatarViewRightConstraint;
- (id /* block */)onViewDidTapBlock;
- (id)visitorDescriptionWithCount:(long long)arg0;
- (void)showEyeView;
- (void)showMultiAvatarView;
- (void)updateWithAvatarList:(id)arg0 visitorCount:(long long)arg1 hasExpired:(BOOL)arg2;
- (id)currentMomentID;
- (void)setCurrentMomentID:(id)arg0;
- (void)setOnViewDidTapBlock:(id /* block */)arg0;
- (void)setEyeImageView:(id)arg0;
- (void)setMultiAvatarView:(id)arg0;
- (id)initWithScene:(unsigned long long)arg0;
- (id)init;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)hasExpired;
- (void)setHasExpired:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (unsigned long long)scene;
- (void)setupUI;

@end
