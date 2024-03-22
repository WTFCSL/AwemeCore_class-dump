//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImage, UIView;

@interface IESLiveChatChannelMemberActionModel : NSObject {
    BOOL _disableResponse;
    UIView *_customView;
    UIImage *_img;
    NSString *_content;
    UIColor *_contentColor;
    id /* block */ _tapBlock;
    UIColor *_backgroundColor;
}

@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) UIImage *img;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UIColor *contentColor;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (nonatomic) BOOL disableResponse;
@property (retain, nonatomic) UIColor *backgroundColor;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (void)setImg:(id)arg0;
- (BOOL)disableResponse;
- (void)setDisableResponse:(BOOL)arg0;
- (id)contentColor;
- (void).cxx_destruct;
- (id)content;
- (void)setContentColor:(id)arg0;
- (void)setContent:(id)arg0;
- (id)customView;
- (id)backgroundColor;
- (void)setCustomView:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)img;
- (void)tap;

@end
