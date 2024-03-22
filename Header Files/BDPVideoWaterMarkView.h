//
//     Generated by private class-dump
//

@class UIColor, NSString, UIFont, UIImage;

@interface BDPVideoWaterMarkView : UIView {
    NSString *_text;
    UIColor *_textColor;
    UIFont *_font;
    UIImage *_markImage;
}

@property (retain, nonatomic) UIImage *markImage;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;

- (void)setMarkImage:(id)arg0;
- (id)markImage;
- (void)generateMarkImage;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setText:(id)arg0;
- (id)font;
- (id)text;
- (void)setFont:(id)arg0;
- (void)setTextColor:(id)arg0;
- (id)textColor;

@end
