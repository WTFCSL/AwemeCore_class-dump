//
//     Generated by private class-dump
//

@class NSString;

@interface VEAIMomentMetaInfo : NSObject {
    BOOL _isCamera;
    float _duration;
    long long _size;
    long long _width;
    long long _height;
    long long _orientation;
    NSString *_imgPath;
    NSString *_location;
    long long _shotTime;
    long long _createTime;
    long long _modifyTime;
}

@property (nonatomic) long long size;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long orientation;
@property (nonatomic) float duration;
@property (copy, nonatomic) NSString *imgPath;
@property (nonatomic) BOOL isCamera;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) long long shotTime;
@property (nonatomic) long long createTime;
@property (nonatomic) long long modifyTime;

- (long long)modifyTime;
- (void)setShotTime:(long long)arg0;
- (void)setModifyTime:(long long)arg0;
- (void)setIsCamera:(BOOL)arg0;
- (long long)shotTime;
- (id)imgPath;
- (void)setImgPath:(id)arg0;
- (void).cxx_destruct;
- (long long)height;
- (void)setCreateTime:(long long)arg0;
- (id)location;
- (long long)orientation;
- (float)duration;
- (void)setLocation:(id)arg0;
- (void)setOrientation:(long long)arg0;
- (void)setWidth:(long long)arg0;
- (long long)createTime;
- (long long)size;
- (void)setSize:(long long)arg0;
- (void)setHeight:(long long)arg0;
- (long long)width;
- (void)setDuration:(float)arg0;
- (BOOL)isCamera;

@end