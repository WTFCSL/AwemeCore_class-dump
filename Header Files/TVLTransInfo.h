//
//     Generated by private class-dump
//

@class NSDictionary;

@interface TVLTransInfo : NSObject {
    long long _PTS;
    NSDictionary *_rawData;
}

@property (nonatomic) long long PTS;
@property (retain, nonatomic) NSDictionary *rawData;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long checkedDTS;
@property (readonly, nonatomic) long long sentFrames;

+ (id)transInfoWithSEI:(id)arg0;

- (void)setPTS:(long long)arg0;
- (long long)checkedDTS;
- (long long)sentFrames;
- (long long)PTS;
- (void).cxx_destruct;
- (long long)index;
- (id)rawData;
- (void)setRawData:(id)arg0;
- (id)description;
- (id)initWithRawData:(id)arg0;

@end