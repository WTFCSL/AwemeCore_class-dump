//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEMusicEditorCollectionHeaderView;
@protocol AWEVideoPublishMusicSelectHeaderViewDelegate;

@interface AWEVideoPublishMusicSelectHeaderView : UICollectionReusableView {
    id<AWEVideoPublishMusicSelectHeaderViewDelegate> _delegate;
    UIImageView *_imageView;
    UILabel *_label;
    AWEMusicEditorCollectionHeaderView *_dotSeparatorView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AWEMusicEditorCollectionHeaderView *dotSeparatorView;
@property (weak, nonatomic) id<AWEVideoPublishMusicSelectHeaderViewDelegate> delegate;

- (id)dotSeparatorView;
- (void)setDotSeparatorView:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)delegate;
- (id)label;
- (void)setDelegate:(id)arg0;
- (void)tapped:(id)arg0;
- (void)updateImage:(id)arg0;

@end