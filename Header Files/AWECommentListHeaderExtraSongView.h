//
//     Generated by private class-dump
//

@class NSString, UIImageView, AWEMusicModel, UILabel, AWEInsetsLabel;

@interface AWECommentListHeaderExtraSongView : UIView <AWECommentListCustomExtraViewProtocol> {
    BOOL _isBGColorWhite;
    AWEMusicModel *_model;
    UIImageView *_albumImageView;
    UIImageView *_albumBackView;
    UIImageView *_albumPlayView;
    UILabel *_titleLabel;
    AWEInsetsLabel *_tagLabel;
    UILabel *_authorLabel;
}

@property (retain, nonatomic) AWEMusicModel *model;
@property (retain, nonatomic) UIImageView *albumImageView;
@property (retain, nonatomic) UIImageView *albumBackView;
@property (retain, nonatomic) UIImageView *albumPlayView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEInsetsLabel *tagLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (nonatomic) BOOL isBGColorWhite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAuthorLabel:(id)arg0;
- (id)authorLabel;
- (void)setIsBGColorWhite:(BOOL)arg0;
- (BOOL)isBGColorWhite;
- (double)customViewHeightInCommentListHeader;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (id)albumBackView;
- (id)albumPlayView;
- (id)initWithMusicModel:(id)arg0;
- (void)setAlbumBackView:(id)arg0;
- (void)setAlbumPlayView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (void)refreshUI;
- (void)setTitleLabel:(id)arg0;
- (id)albumImageView;
- (void)setAlbumImageView:(id)arg0;
- (void)_setupUI;

@end
