//
//     Generated by private class-dump
//

@class NSString;

@interface IESECSliceXInlineImage : IESECSliceXInlineContent {
    NSString *_imageURL;
    struct CGSize { double width; double height; } _size;
}

@property (retain, nonatomic) NSString *imageURL;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void).cxx_destruct;
- (void)setImageURL:(id)arg0;
- (unsigned long long)type;
- (id)imageURL;
- (struct CGSize { double x0; double x1; })size;
- (BOOL)isEqual:(id)arg0;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (id)initWithElement:(id)arg0;

@end
