//
//     Generated by private class-dump
//

@class UIImageView, PersonalKaraokeKtvLiveRoomRecommendResponse_RecommendItem, UILabel, UIView;
@protocol IESLiveWebPPlayer;

@interface IESLiveKTVOrderPanelRoomCell : UICollectionViewCell {
    UIView *_avatarContainer;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UIImageView *_icon;
    UILabel *_songLabel;
    UILabel *_onLineLabel;
    PersonalKaraokeKtvLiveRoomRecommendResponse_RecommendItem *_model;
    UIImageView<IESLiveWebPPlayer> *_avatarLiveIcon;
    long long _index;
}

@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *songLabel;
@property (retain, nonatomic) UILabel *onLineLabel;
@property (retain, nonatomic) PersonalKaraokeKtvLiveRoomRecommendResponse_RecommendItem *model;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *avatarLiveIcon;
@property (nonatomic) long long index;

- (void)setSongLabel:(id)arg0;
- (id)songLabel;
- (void)didClickAvatar;
- (void)resetCell;
- (void)setOnLineLabel:(id)arg0;
- (id)onLineLabel;
- (void)setAvatarLiveIcon:(id)arg0;
- (id)avatarLiveIcon;
- (void)renderWithModel:(id)arg0 index:(long long)arg1;
- (void)setModel:(id)arg0;
- (void)setIndex:(long long)arg0;
- (id)icon;
- (id)init;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)index;
- (id)nameLabel;
- (void)setIcon:(id)arg0;
- (void)setupActions;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)avatarContainer;
- (void)setAvatarContainer:(id)arg0;

@end
