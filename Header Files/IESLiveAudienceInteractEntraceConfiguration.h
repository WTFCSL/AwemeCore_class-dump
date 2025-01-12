//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAudienceInteractEntraceConfiguration : NSObject {
    BOOL _selected;
    BOOL _showTip;
    BOOL _disabled;
    NSString *_backgroundColor;
    NSString *_icon;
    NSString *_subtitle;
    NSString *_title;
    id /* block */ _didClick;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showTip;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ didClick;

- (id /* block */)didClick;
- (void)setDidClick:(id /* block */)arg0;
- (BOOL)showTip;
- (void)setShowTip:(BOOL)arg0;
- (BOOL)selected;
- (BOOL)disabled;
- (void)setDisabled:(BOOL)arg0;
- (id)icon;
- (void).cxx_destruct;
- (id)title;
- (void)setSelected:(BOOL)arg0;
- (void)setIcon:(id)arg0;
- (id)backgroundColor;
- (id)subtitle;
- (void)setBackgroundColor:(id)arg0;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;

@end
