//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDASplashImageInfoModel : NSObject {
    double _width;
    double _height;
    NSString *_uri;
    NSString *_secretKey;
    NSArray *_urlList;
    NSString *_uriOriginal;
    NSArray *_urlListOriginal;
}

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSString *uriOriginal;
@property (copy, nonatomic) NSArray *urlListOriginal;

- (id)urlList;
- (void)setUrlList:(id)arg0;
- (id)getBDImage;
- (id)getImageData;
- (id)getRealUrlListWithList:(id)arg0;
- (id)uriOriginal;
- (id)getImageFilePath;
- (void)setUriOriginal:(id)arg0;
- (id)urlListOriginal;
- (void)setUrlListOriginal:(id)arg0;
- (BOOL)isValidModel;
- (id)secretKey;
- (void).cxx_destruct;
- (void)setSecretKey:(id)arg0;
- (double)height;
- (id)initWithDictionary:(id)arg0;
- (void)setWidth:(double)arg0;
- (void)setUri:(id)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (id)uri;

@end
