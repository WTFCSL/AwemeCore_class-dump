//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEBigThumbModel : AWEBaseApiModel {
    long long _imgNum;
    NSString *_thumbUri;
    NSString *_imgUrl;
    long long _imgXSize;
    long long _imgYSize;
    long long _imgXLen;
    long long _imgYLen;
    double _thumbduration;
    double _thumbInterval;
    NSString *_thumbFext;
    NSArray *_uriList;
    NSArray *_imgUrlList;
}

@property (nonatomic) long long imgNum;
@property (copy, nonatomic) NSString *thumbUri;
@property (copy, nonatomic) NSString *imgUrl;
@property (nonatomic) long long imgXSize;
@property (nonatomic) long long imgYSize;
@property (nonatomic) long long imgXLen;
@property (nonatomic) long long imgYLen;
@property (nonatomic) double thumbduration;
@property (nonatomic) double thumbInterval;
@property (copy, nonatomic) NSString *thumbFext;
@property (copy, nonatomic) NSArray *uriList;
@property (copy, nonatomic) NSArray *imgUrlList;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)imgXLen;
- (long long)imgYLen;
- (long long)imgXSize;
- (long long)imgYSize;
- (long long)imgNum;
- (void)setImgNum:(long long)arg0;
- (id)thumbUri;
- (void)setThumbUri:(id)arg0;
- (id)imgUrl;
- (void)setImgUrl:(id)arg0;
- (void)setImgXSize:(long long)arg0;
- (void)setImgYSize:(long long)arg0;
- (void)setImgXLen:(long long)arg0;
- (void)setImgYLen:(long long)arg0;
- (double)thumbduration;
- (void)setThumbduration:(double)arg0;
- (double)thumbInterval;
- (void)setThumbInterval:(double)arg0;
- (id)thumbFext;
- (void)setThumbFext:(id)arg0;
- (id)uriList;
- (void)setUriList:(id)arg0;
- (id)imgUrlList;
- (void)setImgUrlList:(id)arg0;
- (void)jsonMapForImgUrlsFromJSONDictionary:(id)arg0;
- (void).cxx_destruct;

@end
