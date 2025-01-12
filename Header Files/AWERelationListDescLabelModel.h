//
//     Generated by private class-dump
//

@class UIColor, NSString, NSAttributedString;

@interface AWERelationListDescLabelModel : NSObject {
    BOOL _show;
    BOOL _showBorder;
    UIColor *_textColor;
    NSString *_descText;
    NSAttributedString *_attributedDescText;
}

@property (nonatomic) BOOL show;
@property (nonatomic) BOOL showBorder;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSAttributedString *attributedDescText;

- (id)attributedDescText;
- (id)descText;
- (void)setDescText:(id)arg0;
- (void)setAttributedDescText:(id)arg0;
- (void).cxx_destruct;
- (BOOL)show;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (void)setShow:(BOOL)arg0;
- (void)setShowBorder:(BOOL)arg0;
- (BOOL)showBorder;

@end
