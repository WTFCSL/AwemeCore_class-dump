//
//     Generated by private class-dump
//

@class NSString;

@interface XPlayResolutionModel : NSObject <XPlayResolution> {
    long long _index;
    long long _fps;
    long long _maxKbps;
    long long _resolutionType;
    NSString *_name;
}

@property (nonatomic) long long index;
@property (nonatomic) long long fps;
@property (nonatomic) long long maxKbps;
@property (nonatomic) long long resolutionType;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolutionWithDic:(id)arg0;

- (long long)maxKbps;
- (void)setMaxKbps:(long long)arg0;
- (BOOL)isEqualToResolution:(id)arg0;
- (long long)compareResolution:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (long long)index;
- (void)setName:(id)arg0;
- (long long)fps;
- (id)name;
- (void)setFps:(long long)arg0;
- (long long)resolutionType;
- (void)setResolutionType:(long long)arg0;

@end