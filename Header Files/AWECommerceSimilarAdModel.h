//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWECommerceSimilarAdModel : MTLModel <MTLJSONSerializing> {
    BOOL _isShowingSimilarAd;
    NSString *_message;
    long long _code;
    NSDictionary *_data;
    double _asyncGetAdTs;
}

@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) double asyncGetAdTs;
@property (nonatomic) BOOL isShowingSimilarAd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (BOOL)isShowingSimilarAd;
- (void)setIsShowingSimilarAd:(BOOL)arg0;
- (double)asyncGetAdTs;
- (void)setAsyncGetAdTs:(double)arg0;
- (void)setMessage:(id)arg0;
- (void)setCode:(long long)arg0;
- (id)data;
- (long long)code;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)message;

@end
