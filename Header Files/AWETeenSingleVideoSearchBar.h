//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWETeenSingleVideoSearchBar : UIControl {
    UIImageView *_icon;
    UILabel *_content;
    long long _style;
}

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *content;
@property (nonatomic) long long style;

- (void)updateSugWord:(id)arg0;
- (void)renderUI;
- (long long)style;
- (id)icon;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg0;
- (id)content;
- (void)setContent:(id)arg0;
- (void)setIcon:(id)arg0;
- (void)setStyle:(long long)arg0;

@end
