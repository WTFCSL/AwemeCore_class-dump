//
//     Generated by private class-dump
//

@class UIImageView, IESLiveEmoticonModel;
@protocol IESLiveEmoticonResource;

@interface IESLiveCommentWidgetQuickEmojiCell : UICollectionViewCell {
    long long _imageScale;
    id<IESLiveEmoticonResource> _emoticonResource;
    UIImageView *_emojiView;
    IESLiveEmoticonModel *_emoticonModel;
}

@property (nonatomic) long long imageScale;
@property (retain, nonatomic) id<IESLiveEmoticonResource> emoticonResource;
@property (retain, nonatomic) UIImageView *emojiView;
@property (retain, nonatomic) IESLiveEmoticonModel *emoticonModel;

- (id)emoticonModel;
- (void)setEmoticonModel:(id)arg0;
- (id)emojiView;
- (void)setEmojiView:(id)arg0;
- (id)emoticonResource;
- (void)setEmoticonResource:(id)arg0;
- (void)updateWithEmoticonModel:(id)arg0;
- (void)setImageScale:(long long)arg0;
- (long long)imageScale;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (void)setupView;

@end
