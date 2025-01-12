//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEShareActivityVideoModel : AWEBaseApiModel {
    int _width;
    int _height;
    NSString *_uri;
    NSString *_coverURL;
    NSArray *_urlList;
}

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *coverURL;
@property (retain, nonatomic) NSArray *urlList;
@property (nonatomic) int width;
@property (nonatomic) int height;

+ (id)JSONKeyPathsByPropertyKey;

- (id)urlList;
- (void)setUrlList:(id)arg0;
- (void).cxx_destruct;
- (int)height;
- (void)setWidth:(int)arg0;
- (void)setUri:(id)arg0;
- (void)setHeight:(int)arg0;
- (int)width;
- (id)uri;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end
