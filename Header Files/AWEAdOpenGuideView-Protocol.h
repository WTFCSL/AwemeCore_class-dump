//
//     Generated by private class-dump
//

@class NSString, AWEButton, AWEAwemeModel, UIImageView, UILabel;

@protocol AWEAdOpenGuideView <AWECrotocol>

@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEButton *openButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *contentLabel;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (void)updateNameAndAvatar:(id)arg0;
- (id)defaultLabelText;
- (void)setModel:(id)arg0;
- (id)model;
- (id)nameLabel;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)openButton;
- (void)setOpenButton:(id)arg0;

@end
