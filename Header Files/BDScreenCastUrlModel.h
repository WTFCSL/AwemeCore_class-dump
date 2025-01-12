//
//     Generated by private class-dump
//

@class NSString;

@interface BDScreenCastUrlModel : NSObject {
    NSString *_resolution;
    NSString *_resolutionShowTitle;
    NSString *_url;
    long long _width;
    long long _height;
}

@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *resolutionShowTitle;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long width;
@property (nonatomic) long long height;

- (void)setResolutionShowTitle:(id)arg0;
- (void)appendPlayInfoParamsIfNeeded;
- (id)resolutionShowTitle;
- (void)setResolution:(id)arg0;
- (id)resolution;
- (void).cxx_destruct;
- (long long)height;
- (id)initWithDictionary:(id)arg0;
- (void)setUrl:(id)arg0;
- (void)setWidth:(long long)arg0;
- (void)setHeight:(long long)arg0;
- (long long)width;
- (id)url;

@end
