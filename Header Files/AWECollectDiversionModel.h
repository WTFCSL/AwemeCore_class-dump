//
//     Generated by private class-dump
//

@class NSArray;

@interface AWECollectDiversionModel : AWEBaseDataModel {
    int _diversionCount;
    NSArray *_musicDiversionListModelArray;
}

@property (copy, nonatomic) NSArray *musicDiversionListModelArray;
@property (nonatomic) int diversionCount;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (int)diversionCount;
- (id)musicDiversionListModelArray;
- (void)setMusicDiversionListModelArray:(id)arg0;
- (void)setDiversionCount:(int)arg0;
- (void).cxx_destruct;

@end
