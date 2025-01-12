//
//     Generated by private class-dump
//

@class UIColor, NSString, UILabel, UIView;

@interface IESLiveMutliAudioSeatTagView : UIView {
    NSString *_tagString;
    UIColor *_tagColor;
    UIColor *_tagBgColor;
    UILabel *_tagLabel;
    UIView *_bgView;
}

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *bgView;
@property (copy, nonatomic) NSString *tagString;
@property (retain, nonatomic) UIColor *tagColor;
@property (retain, nonatomic) UIColor *tagBgColor;

- (void)setTagString:(id)arg0;
- (id)tagString;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (id)tagBgColor;
- (void)setTagBgColor:(id)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (id)tagColor;
- (void)setTagColor:(id)arg0;

@end
