//
//     Generated by private class-dump
//

@class UIImage, NSString, UIFont;

@interface IESLivePlaybackDanmakuPopupMenuItem : IESLiveDynamicModel {
    SEL _action;
    id _target;
    UIImage *_image;
    UIImage *_highlightedImage;
    NSString *_title;
    NSString *_viewClass;
}

@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *highlightedImage;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *viewClass;

- (id)initWithTitle:(id)arg0 image:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithImage:(id)arg0 target:(id)arg1 action:(SEL)arg2;
- (void).cxx_destruct;
- (id)image;
- (void)setTarget:(id)arg0;
- (id)viewClass;
- (id)target;
- (id)title;
- (void)setImage:(id)arg0;
- (void)setAction:(SEL)arg0;
- (SEL)action;
- (void)setTitle:(id)arg0;
- (id)highlightedImage;
- (id)initWithTitle:(id)arg0 target:(id)arg1 action:(SEL)arg2;
- (void)setViewClass:(id)arg0;

@end
