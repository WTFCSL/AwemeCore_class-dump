//
//     Generated by private class-dump
//

@interface IESLiveUpdateMicInfoItem : NSObject {
    int _targetType;
    long long _id_p;
    long long _newestMicCount;
}

@property (nonatomic) long long id_p;
@property (nonatomic) int targetType;
@property (nonatomic) long long newestMicCount;

- (long long)newestMicCount;
- (void)setNewestMicCount:(long long)arg0;
- (int)targetType;
- (void)setTargetType:(int)arg0;
- (long long)id_p;
- (void)setId_p:(long long)arg0;

@end
