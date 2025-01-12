//
//     Generated by private class-dump
//

@class NSString, UIImage;

@interface HGAnchorConfig : NSObject {
    NSString *_title;
    NSString *_channel;
    NSString *_backgroundColor;
    long long _type;
    UIImage *_image;
    id /* block */ _clickBlock;
    id /* block */ _pageChangeBlock;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ pageChangeBlock;

- (void)setClickBlock:(id /* block */)arg0;
- (id /* block */)clickBlock;
- (id /* block */)pageChangeBlock;
- (void)setPageChangeBlock:(id /* block */)arg0;
- (id)backgroundUIColor;
- (id)channel;
- (id)init;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (id)image;
- (long long)type;
- (id)title;
- (void)setType:(long long)arg0;
- (void)setImage:(id)arg0;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg0;
- (void)setTitle:(id)arg0;

@end
