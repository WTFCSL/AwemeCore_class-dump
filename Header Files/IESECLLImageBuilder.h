//
//     Generated by private class-dump
//

@class UIImage, NSString;

@interface IESECLLImageBuilder : IESECLLLayoutableBuilder {
    UIImage *_image;
    BOOL _resizable;
    long long _contentMode;
    NSString *_identifier;
    double _width;
    double _height;
}

@property (readonly, copy, nonatomic) id /* block */ resizable;
@property (readonly, copy, nonatomic) id /* block */ aspectRatio;
@property (readonly, copy, nonatomic) id /* block */ width;
@property (readonly, copy, nonatomic) id /* block */ height;

- (void)inflateSubviewsIntoMap:(id)arg0;
- (struct shared_ptr<ll::linear_layoutable> { struct linear_layoutable *x0; struct __shared_weak_count *x1; })cxxObject;
- (id)initWithIdentifier:(id)arg0 withImage:(id)arg1;
- (id /* block */)resizable;
- (void).cxx_destruct;
- (id /* block */)height;
- (id /* block */)aspectRatio;
- (id /* block */)width;

@end
