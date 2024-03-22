//
//     Generated by private class-dump
//

@class UIColor, NSString, UIFont, UIImage;

@interface AWELandscapeMorePanelCellModel : NSObject {
    BOOL _closePanelAfterTap;
    UIImage *_iconImage;
    NSString *_text;
    UIColor *_textColor;
    UIFont *_textFont;
    id /* block */ _tapBlock;
    id /* block */ _showBlock;
}

@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL closePanelAfterTap;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ showBlock;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (id /* block */)showBlock;
- (void)setShowBlock:(id /* block */)arg0;
- (BOOL)closePanelAfterTap;
- (void)setClosePanelAfterTap:(BOOL)arg0;
- (id)iconImage;
- (id)init;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (void)setTextColor:(id)arg0;
- (void)setIconImage:(id)arg0;
- (id)textFont;
- (id)textColor;
- (void)setTextFont:(id)arg0;

@end