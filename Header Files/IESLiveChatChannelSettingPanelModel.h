//
//     Generated by private class-dump
//

@class UIFont, NSString, UIColor, UIImage;

@interface IESLiveChatChannelSettingPanelModel : NSObject {
    BOOL _isOn;
    NSString *_title;
    NSString *_subtitle;
    UIFont *_titleFont;
    UIColor *_titleColor;
    UIImage *_icon;
    id /* block */ _actionBlock;
    id /* block */ _switchBlock;
    double _progress;
    id /* block */ _sliderBlock;
    unsigned long long _cellType;
    struct CGSize { double width; double height; } _iconSize;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL isOn;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (nonatomic) double progress;
@property (copy, nonatomic) id /* block */ sliderBlock;
@property (nonatomic) unsigned long long cellType;

- (id /* block */)switchBlock;
- (void)setSwitchBlock:(id /* block */)arg0;
- (id /* block */)sliderBlock;
- (void)setSliderBlock:(id /* block */)arg0;
- (void)setIconSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })iconSize;
- (id)icon;
- (void).cxx_destruct;
- (BOOL)isOn;
- (id)titleColor;
- (id)title;
- (void)setCellType:(unsigned long long)arg0;
- (void)setIcon:(id)arg0;
- (double)progress;
- (void)setTitleColor:(id)arg0;
- (id)titleFont;
- (id /* block */)actionBlock;
- (void)setProgress:(double)arg0;
- (id)subtitle;
- (unsigned long long)cellType;
- (void)setTitleFont:(id)arg0;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;
- (void)setIsOn:(BOOL)arg0;

@end