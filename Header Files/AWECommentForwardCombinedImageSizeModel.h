//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommentForwardCombinedImageSizeModel : NSObject <BDModelCustom> {
    double _width;
    double _height;
}

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithWidth:(double)arg0 height:(double)arg1;
+ (id)modelCustomPropertyMapper;

- (id)initWithWidth:(double)arg0 height:(double)arg1;
- (double)height;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;

@end
