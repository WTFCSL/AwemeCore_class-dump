//
//     Generated by private class-dump
//

@class NSData, NSString, NSArray;

@interface ACCLVImageTemplateFragment : ACCLVTemplateFragment <LVTemplateImageFragment> {
    BOOL _isCartoon;
    unsigned long long cartoonOutputType;
    NSString *cartoonFilePath;
    NSData *_imageData;
    struct CGSize { double width; double height; } _imageSize;
}

@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) NSString *cartoonFilePath;
@property (nonatomic) BOOL isCartoon;
@property (nonatomic) unsigned long long cartoonOutputType;
@property (copy, nonatomic) NSString *nleSlotID;
@property (copy, nonatomic) NSString *payloadID;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } sourceTimeRange;
@property (copy, nonatomic) NSArray *cropPoints;
@property (nonatomic) struct CGSize { double x0; double x1; } videoSzie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCartoon;
- (void)setIsCartoon:(BOOL)arg0;
- (unsigned long long)cartoonOutputType;
- (void)setCartoonOutputType:(unsigned long long)arg0;
- (id)cartoonFilePath;
- (void)setCartoonFilePath:(id)arg0;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (void)setImageData:(id)arg0;
- (id)imageData;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;

@end
