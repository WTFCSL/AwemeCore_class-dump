//
//     Generated by private class-dump
//

@class UIImageView, IESLiveGradientView, HTSLivePKContributeItem;
@protocol IESLiveSettings;

@interface HTSLivePKContributeItemView : UIView {
    BOOL _isRightIncrease;
    UIImageView *_centerImageView;
    IESLiveGradientView *_avatarImageBackView;
    UIImageView *_mvpImageView;
    UIImageView *_indexImageview;
    HTSLivePKContributeItem *_item;
    id<IESLiveSettings> _settings;
}

@property (retain, nonatomic) UIImageView *centerImageView;
@property (retain, nonatomic) IESLiveGradientView *avatarImageBackView;
@property (retain, nonatomic) UIImageView *mvpImageView;
@property (retain, nonatomic) UIImageView *indexImageview;
@property (nonatomic) BOOL isRightIncrease;
@property (retain, nonatomic) HTSLivePKContributeItem *item;
@property (retain, nonatomic) id<IESLiveSettings> settings;

- (void)setIsRightIncrease:(BOOL)arg0;
- (id)avatarImageBackView;
- (id)indexImageview;
- (id)mvpImageView;
- (id)initWithRightIncrease:(BOOL)arg0;
- (void)updateWithItem:(id)arg0 roomId:(id)arg1;
- (void)updateWin:(BOOL)arg0;
- (void)setAvatarImageBackView:(id)arg0;
- (void)setMvpImageView:(id)arg0;
- (void)setIndexImageview:(id)arg0;
- (BOOL)isRightIncrease;
- (id)item;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (id)settings;
- (void)setItem:(id)arg0;
- (void)setupUI;
- (id)centerImageView;
- (void)setCenterImageView:(id)arg0;

@end