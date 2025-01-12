//
//     Generated by private class-dump
//

@class UIFont, NSString, UILabel, NSMutableAttributedString;

@interface AFDRoundSpeedButton : UIButton <AFDRoundSpeedButtonProtocol> {
    UILabel *_label;
    double _viewWidth;
    UIFont *_textFont;
    NSMutableAttributedString *_text;
}

@property (retain, nonatomic) UILabel *label;
@property (nonatomic) double viewWidth;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) NSMutableAttributedString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewWidth:(double)arg0;
- (id)createAttributedStringWithText:(id)arg0;
- (id)mapSpeed:(double)arg0;
- (void)changeSpeed:(double)arg0;
- (id)initWithViewWidth:(double)arg0 textFont:(id)arg1;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setLabel:(id)arg0;
- (id)text;
- (id)label;
- (id)textFont;
- (void)setTextFont:(id)arg0;
- (double)viewWidth;
- (void)setUpUI;

@end
