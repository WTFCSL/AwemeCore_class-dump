//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;

@interface AWEFavoriteFileCollectionViewCell : UICollectionViewCell <AWEFavoriteFileCollectionViewCellProtocal> {
    BOOL _isFromPopUpView;
    UIView *_headView;
    UIImageView *_fileCoverImageView;
    UILabel *_fileNameLabel;
    UILabel *_emptyLabel;
}

@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) UIImageView *fileCoverImageView;
@property (retain, nonatomic) UILabel *fileNameLabel;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (nonatomic) BOOL isFromPopUpView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)p_setupUI;
- (void)setHeadView:(id)arg0;
- (id)headView;
- (id)fileCoverImageView;
- (void)setFileCoverImageView:(id)arg0;
- (void)configWithCoverUrl:(id)arg0 withFileName:(id)arg1;
- (BOOL)isFromPopUpView;
- (void)setIsFromPopUpView:(BOOL)arg0;
- (void)setLabelLine;
- (void)setLabelWithShowTimeNumber:(id)arg0;
- (void)configWithEmpty;
- (void)configWithFile;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)fileNameLabel;
- (void)setFileNameLabel:(id)arg0;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg0;

@end
