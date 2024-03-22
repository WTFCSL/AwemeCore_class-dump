//
//     Generated by private class-dump
//

@class AWEHPBubbleLabelLinkContentConfig, UILabel, UIView;

@interface AWEHPBubbleLabelLinkContentView : UIView {
    AWEHPBubbleLabelLinkContentConfig *_config;
    UILabel *_contentLabel;
    UILabel *_linkLabel;
    UIView *_line;
    UIView *_clickView;
}

@property (retain, nonatomic) AWEHPBubbleLabelLinkContentConfig *config;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *linkLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIView *clickView;

- (void)awe_themeDidChange:(long long)arg0;
- (void)setupWithConfig:(id)arg0;
- (void)setClickView:(id)arg0;
- (id)clickView;
- (void)setLinkLabel:(id)arg0;
- (void)handleLinkTap;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (id)line;
- (void)setLine:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)updateUI;
- (id)linkLabel;

@end
