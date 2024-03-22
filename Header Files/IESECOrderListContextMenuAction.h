//
//     Generated by private class-dump
//

@class NSString;

@interface IESECOrderListContextMenuAction : NSObject {
    NSString *_imageURL;
    NSString *_title;
    double _viewScale;
    double _fontScale;
    id /* block */ _actionBlock;
}

@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double viewScale;
@property (nonatomic) double fontScale;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;
- (void)setImageURL:(id)arg0;
- (id)imageURL;
- (id)title;
- (id /* block */)actionBlock;
- (void)setTitle:(id)arg0;
- (void)setActionBlock:(id /* block */)arg0;
- (void)setViewScale:(double)arg0;
- (double)fontScale;
- (void)setFontScale:(double)arg0;
- (double)viewScale;

@end