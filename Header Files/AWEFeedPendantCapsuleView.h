//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface AWEFeedPendantCapsuleView : UIView <AWEUGPendantCapsuleProtocol> {
    unsigned long long _status;
    double _cornerRadius;
    double _borderWidth;
    NSString *_bgColor;
    NSString *_bdColor;
    NSString *_txtColor;
    UILabel *_textLabel;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *bdColor;
@property (copy, nonatomic) NSString *txtColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)arg0;
- (id)txtColor;
- (void)setTxtColor:(id)arg0;
- (void)performUpdateFromState:(unsigned long long)arg0 toState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)updateTextString:(id)arg0;
- (void)setBdColor:(id)arg0;
- (id)bdColor;
- (id)hexColorFromString:(id)arg0;
- (void)willEnterForeground;
- (id)textLabel;
- (double)borderWidth;
- (id)init;
- (void)didEnterBackground;
- (void).cxx_destruct;
- (unsigned long long)status;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBorderWidth:(double)arg0;
- (void)setStatus:(unsigned long long)arg0;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg0;
- (void)setTextLabel:(id)arg0;
- (void)setupUI;
- (id)bgColor;
- (void)setBgColor:(id)arg0;

@end
