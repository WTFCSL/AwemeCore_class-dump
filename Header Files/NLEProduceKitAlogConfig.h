//
//     Generated by private class-dump
//

@class NSString;

@interface NLEProduceKitAlogConfig : NSObject {
    NSString *_alogrithmsName;
    double _cropRatio;
    long long _onlyCrop;
    NSString *_startFrameUrl;
    long long _topN;
}

@property (retain, nonatomic) NSString *alogrithmsName;
@property (nonatomic) double cropRatio;
@property (nonatomic) long long onlyCrop;
@property (retain, nonatomic) NSString *startFrameUrl;
@property (nonatomic) long long topN;

- (id)alogrithmsName;
- (void)setAlogrithmsName:(id)arg0;
- (double)cropRatio;
- (void)setCropRatio:(double)arg0;
- (long long)onlyCrop;
- (void)setOnlyCrop:(long long)arg0;
- (id)startFrameUrl;
- (void)setStartFrameUrl:(id)arg0;
- (void).cxx_destruct;
- (long long)topN;
- (void)setTopN:(long long)arg0;

@end