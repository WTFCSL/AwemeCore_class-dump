//
//     Generated by private class-dump
//

@class NSData, NSString;

@interface LarkMediaImageObject : LarkMediaBaseObject {
    NSData *_imageData;
    NSString *_imageURL;
}

@property (retain, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imageURL;

- (id)dataDict;
- (void).cxx_destruct;
- (BOOL)valid;
- (void)setImageURL:(id)arg0;
- (id)imageURL;
- (void)setImageData:(id)arg0;
- (id)imageData;

@end