//
//     Generated by private class-dump
//

@class CALayer;

@interface AWEMusicListSkeletonRowView : UIView {
    CALayer *_imageLayer;
    CALayer *_titleLayer;
    CALayer *_subtitleLayer;
    CALayer *_separatorLine;
}

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) CALayer *titleLayer;
@property (retain, nonatomic) CALayer *subtitleLayer;
@property (retain, nonatomic) CALayer *separatorLine;

- (id)titleLayer;
- (void)setTitleLayer:(id)arg0;
- (void)setSubtitleLayer:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)subtitleLayer;
- (id)imageLayer;
- (void)setImageLayer:(id)arg0;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg0;

@end
