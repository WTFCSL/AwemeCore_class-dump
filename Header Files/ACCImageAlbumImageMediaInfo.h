//
//     Generated by private class-dump
//

@class NSString;

@interface ACCImageAlbumImageMediaInfo : MTLModel {
    NSString *_colorSpaceNameFormat;
    NSString *_dataUITFormat;
    unsigned long long _bitsPerComponent;
    unsigned long long _bitsPerPixel;
    long long _length;
    struct CGSize { double width; double height; } _resolution;
}

@property (copy, nonatomic) NSString *colorSpaceNameFormat;
@property (copy, nonatomic) NSString *dataUITFormat;
@property (nonatomic) struct CGSize { double width; double height; } resolution;
@property (nonatomic) unsigned long long bitsPerComponent;
@property (nonatomic) unsigned long long bitsPerPixel;
@property (nonatomic) long long length;

+ (void)doAction:(id /* block */)arg0 ifValueIsValid:(id)arg1;

- (id)colorSpaceNameFormat;
- (id)dataUITFormat;
- (void)setColorSpaceNameFormat:(id)arg0;
- (void)setDataUITFormat:(id)arg0;
- (void)merge:(id)arg0;
- (void)setResolution:(struct CGSize { double x0; double x1; })arg0;
- (void)setLength:(long long)arg0;
- (struct CGSize { double x0; double x1; })resolution;
- (void).cxx_destruct;
- (long long)length;
- (unsigned long long)bitsPerComponent;
- (void)setBitsPerComponent:(unsigned long long)arg0;
- (unsigned long long)bitsPerPixel;
- (void)setBitsPerPixel:(unsigned long long)arg0;

@end
