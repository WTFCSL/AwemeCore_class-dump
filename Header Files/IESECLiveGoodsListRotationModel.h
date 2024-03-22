//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESECLiveGoodsListRotationModel : MTLModel <MTLJSONSerializing> {
    long long _rotationType;
    NSNumber *_rotationLoopTimes;
    NSNumber *_rotationLoopCount;
}

@property (nonatomic) long long rotationType;
@property (retain, nonatomic) NSNumber *rotationLoopTimes;
@property (retain, nonatomic) NSNumber *rotationLoopCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)rotationLoopTimes;
- (void)setRotationLoopTimes:(id)arg0;
- (id)rotationLoopCount;
- (void)setRotationLoopCount:(id)arg0;
- (void).cxx_destruct;
- (long long)rotationType;
- (void)setRotationType:(long long)arg0;

@end