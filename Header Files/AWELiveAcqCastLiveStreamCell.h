//
//     Generated by private class-dump
//

@class AWELiveAcqCastLiveStreamContext, UIImageView, AWEAwemeModel, UILabel, AWEGradientView;

@interface AWELiveAcqCastLiveStreamCell : UICollectionViewCell {
    UIImageView *_coverImageView;
    UIImageView *_avatarImageView;
    UILabel *_userNameLabel;
    AWEGradientView *_bottomGradientView;
    UIImageView *_tagView;
    AWEAwemeModel *_model;
    AWELiveAcqCastLiveStreamContext *_context;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELiveAcqCastLiveStreamContext *context;

+ (id)identifier;

- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg0;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__refreshComponents;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)context;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end
