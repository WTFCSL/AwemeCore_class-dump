//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface LiveFeedBackUploadResponseModel : MTLModel <MTLJSONSerializing> {
    NSString *_webURI;
    NSArray *_urlList;
    double _imageWidth;
    double _imageHeight;
}

@property (retain, nonatomic) NSString *webURI;
@property (retain, nonatomic) NSArray *urlList;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)urlList;
- (void)setUrlList:(id)arg0;
- (id)webURI;
- (void)setWebURI:(id)arg0;
- (void).cxx_destruct;
- (double)imageWidth;
- (double)imageHeight;
- (void)setImageHeight:(double)arg0;
- (void)setImageWidth:(double)arg0;

@end
