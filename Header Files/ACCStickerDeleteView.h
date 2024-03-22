//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface ACCStickerDeleteView : UIView {
    UIView *_corView;
    UIImageView *_topImageView;
    UIImageView *_bottomImageView;
    UILabel *_textLabel;
}

@property (retain, nonatomic) UIView *corView;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UILabel *textLabel;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })handleFrame;
+ (double)recommendTopWithAdjustment:(BOOL)arg0;

- (id)topImageView;
- (void)setTopImageView:(id)arg0;
- (void)setCorView:(id)arg0;
- (id)corView;
- (void)onDeleteActived;
- (void)onDeleteInActived;
- (id)textLabel;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setTextLabel:(id)arg0;
- (id)bottomImageView;
- (void)setBottomImageView:(id)arg0;

@end