//
//     Generated by private class-dump
//

@class NSData, NSArray;

@interface QQApiExtendObject : QQApiObject {
    NSData *_data;
    NSData *_previewImageData;
    NSArray *_imageDataArray;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *previewImageData;
@property (retain, nonatomic) NSArray *imageDataArray;

+ (id)objectWithData:(id)arg0 previewImageData:(id)arg1 title:(id)arg2 description:(id)arg3 imageDataArray:(id)arg4;
+ (id)objectWithData:(id)arg0 previewImageData:(id)arg1 title:(id)arg2 description:(id)arg3;

- (id)imageDataArray;
- (void)setImageDataArray:(id)arg0;
- (id)initWithData:(id)arg0 previewImageData:(id)arg1 title:(id)arg2 description:(id)arg3 imageDataArray:(id)arg4;
- (id)initWithData:(id)arg0 previewImageData:(id)arg1 title:(id)arg2 description:(id)arg3;
- (id)data;
- (void)setData:(id)arg0;
- (void)dealloc;
- (id)previewImageData;
- (void)setPreviewImageData:(id)arg0;

@end