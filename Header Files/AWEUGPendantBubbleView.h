//
//     Generated by private class-dump
//

@class UIColor, NSString, UILabel, UIView;
@protocol AWEUGPendantProgressProtocol;

@interface AWEUGPendantBubbleView : UIView <AWEUGPendantBubbleProtocol> {
    UILabel *_title;
    UILabel *_subtitle;
    UIColor *_highlightColor;
    UIView<AWEUGPendantProgressProtocol> *_contentView;
    double _width;
    double _titleWidth;
    double _subtitleWidth;
    long long _direction;
}

@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIView<AWEUGPendantProgressProtocol> *contentView;
@property (nonatomic) double width;
@property (nonatomic) double titleWidth;
@property (nonatomic) double subtitleWidth;
@property (nonatomic) long long direction;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTitleWidth:(double)arg0;
- (void)calculateWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 title:(id)arg1 subtitle:(id)arg2;
- (void)presentBubbleViewWithModel:(id)arg0 containerView:(id)arg1 contentView:(id)arg2 bubbleColor:(id)arg3 duration:(long long)arg4 inDirection:(long long)arg5 completion:(id /* block */)arg6;
- (double)subtitleWidth;
- (void)setupUIWithModel:(id)arg0 color:(id)arg1;
- (void)highlightTitleIfNeeded:(id)arg0;
- (void)expandBubbleView:(double)arg0 height:(double)arg1;
- (void)expandTitle;
- (void)expandSubtitle;
- (void)dismissSubtitle;
- (id)getPlaceholderContent:(id)arg0;
- (void)setSubtitleWidth:(double)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (long long)direction;
- (id)contentView;
- (id)title;
- (void)setWidth:(double)arg0;
- (void)setHighlightColor:(id)arg0;
- (double)width;
- (id)subtitle;
- (id)highlightColor;
- (void)setDirection:(long long)arg0;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setContentView:(id)arg0;
- (double)titleWidth;
- (void)dismissTitle;

@end