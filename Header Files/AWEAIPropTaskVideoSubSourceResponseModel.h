//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEAIPropTaskVideoSubSourceResponseModel : MTLModel <MTLJSONSerializing> {
    NSString *_uri;
    NSArray *_urlList;
    long long _width;
    long long _height;
}

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSArray *urlList;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)urlList;
- (void)setUrlList:(id)arg0;
- (void).cxx_destruct;
- (long long)height;
- (void)setWidth:(long long)arg0;
- (void)setUri:(id)arg0;
- (void)setHeight:(long long)arg0;
- (long long)width;
- (id)uri;

@end
