//
//     Generated by private class-dump
//

@class UIColor, NSString;

@interface ACCDUXLoadingConfig : NSObject {
    BOOL _showCloseButton;
    BOOL _withCover;
    unsigned long long _style;
    UIColor *_closeIconColor;
    id /* block */ _awe_closeCallback;
    NSString *_text;
    double _delay;
    struct CGSize { double width; double height; } _closeButtonInteractiveSize;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) struct CGSize { double width; double height; } closeButtonInteractiveSize;
@property (retain, nonatomic) UIColor *closeIconColor;
@property (copy, nonatomic) id /* block */ awe_closeCallback;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL withCover;
@property (nonatomic) double delay;

- (id /* block */)awe_closeCallback;
- (void)setAwe_closeCallback:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })closeButtonInteractiveSize;
- (void)setCloseButtonInteractiveSize:(struct CGSize { double x0; double x1; })arg0;
- (id)closeIconColor;
- (void)setCloseIconColor:(id)arg0;
- (BOOL)withCover;
- (void)setWithCover:(BOOL)arg0;
- (unsigned long long)style;
- (void)setDelay:(double)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (double)delay;
- (id)text;
- (void)setStyle:(unsigned long long)arg0;
- (void)setShowCloseButton:(BOOL)arg0;
- (BOOL)showCloseButton;

@end