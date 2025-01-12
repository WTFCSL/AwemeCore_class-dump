//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, UIImageView, IESLivePlaybackEmoticonModel;
@protocol IESLiveEmoticonResourceAdapter;

@interface IESLivePlaybackBaseEmoticonImageCell : UICollectionViewCell {
    BOOL _isDeleteCell;
    BOOL _isEmptyCell;
    BOOL _needTapGesture;
    UIImageView *_emoticonImageView;
    IESLivePlaybackEmoticonModel *_emoticonModel;
    id /* block */ _cellDidClicked;
    long long _imageScale;
    id<IESLiveEmoticonResourceAdapter> _emoticonResource;
    UITapGestureRecognizer *_tap;
}

@property (nonatomic) long long imageScale;
@property (retain, nonatomic) id<IESLiveEmoticonResourceAdapter> emoticonResource;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIImageView *emoticonImageView;
@property (retain, nonatomic) IESLivePlaybackEmoticonModel *emoticonModel;
@property (nonatomic) BOOL isDeleteCell;
@property (nonatomic) BOOL isEmptyCell;
@property (nonatomic) BOOL needTapGesture;
@property (copy, nonatomic) id /* block */ cellDidClicked;

+ (id)identifier;

- (id)emoticonModel;
- (void)setEmoticonModel:(id)arg0;
- (id /* block */)cellDidClicked;
- (id)emoticonImageView;
- (void)setEmoticonImageView:(id)arg0;
- (void)didClickContentView;
- (id)emoticonResource;
- (void)setEmoticonResource:(id)arg0;
- (void)setNeedTapGesture:(BOOL)arg0;
- (void)setCellDidClicked:(id /* block */)arg0;
- (void)setIsEmptyCell:(BOOL)arg0;
- (void)setIsDeleteCell:(BOOL)arg0;
- (BOOL)isDeleteCell;
- (BOOL)isEmptyCell;
- (BOOL)needTapGesture;
- (void)resetStatus;
- (void)setImageScale:(long long)arg0;
- (long long)imageScale;
- (void).cxx_destruct;
- (void)setImageContentMode:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (id)tap;
- (void)setTap:(id)arg0;

@end
