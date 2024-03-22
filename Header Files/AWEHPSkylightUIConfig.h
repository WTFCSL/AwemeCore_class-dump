//
//     Generated by private class-dump
//

@interface AWEHPSkylightUIConfig : NSObject <NSCopying> {
    long long _layoutType;
    double _height;
    double _overlappingHostTopHeight;
}

@property (nonatomic) long long layoutType;
@property (nonatomic) double height;
@property (nonatomic) double overlappingHostTopHeight;

- (double)overlappingHostTopHeight;
- (void)setOverlappingHostTopHeight:(double)arg0;
- (BOOL)isEqualConfig:(id)arg0;
- (long long)layoutType;
- (void)setLayoutType:(long long)arg0;
- (id)init;
- (double)height;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)description;
- (void)setHeight:(double)arg0;

@end