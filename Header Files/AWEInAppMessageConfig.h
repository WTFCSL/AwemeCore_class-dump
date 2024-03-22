//
//     Generated by private class-dump
//

@class NSString, NSAttributedString, UIView;

@interface AWEInAppMessageConfig : NSObject {
    BOOL _showDividingLine;
    BOOL _showBottomLine;
    UIView *_descView;
    long long _actionStyle;
    UIView *_actionView;
    NSString *_actionStr;
    NSString *_titleStr;
    NSAttributedString *_attributedTitle;
    NSString *_descStr;
    NSAttributedString *_attributedDesc;
}

@property (nonatomic) BOOL showDividingLine;
@property (nonatomic) BOOL showBottomLine;
@property (retain, nonatomic) UIView *descView;
@property (nonatomic) long long actionStyle;
@property (retain, nonatomic) UIView *actionView;
@property (copy, nonatomic) NSString *actionStr;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *descStr;
@property (copy, nonatomic) NSAttributedString *attributedDesc;

- (id)titleStr;
- (void)setTitleStr:(id)arg0;
- (BOOL)showDividingLine;
- (void)setShowDividingLine:(BOOL)arg0;
- (BOOL)showBottomLine;
- (void)setShowBottomLine:(BOOL)arg0;
- (id)descView;
- (void)setDescView:(id)arg0;
- (id)actionStr;
- (void)setActionStr:(id)arg0;
- (id)descStr;
- (void)setDescStr:(id)arg0;
- (id)attributedDesc;
- (void)setAttributedDesc:(id)arg0;
- (void).cxx_destruct;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)arg0;
- (long long)actionStyle;
- (id)actionView;
- (void)setActionStyle:(long long)arg0;
- (void)setActionView:(id)arg0;

@end