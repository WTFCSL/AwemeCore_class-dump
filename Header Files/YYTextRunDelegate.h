//
//     Generated by private class-dump
//

@class NSDictionary;

@interface YYTextRunDelegate : NSObject <NSCopying, NSCoding> {
    NSDictionary *_userInfo;
    double _ascent;
    double _descent;
    double _width;
}

@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) double ascent;
@property (nonatomic) double descent;
@property (nonatomic) double width;

- (void)setAscent:(double)arg0;
- (void)setDescent:(double)arg0;
- (const struct __CTRunDelegate { } *)CTRunDelegate;
- (void).cxx_destruct;
- (void)setUserInfo:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (double)descent;
- (id)initWithCoder:(id)arg0;
- (id)userInfo;
- (void)setWidth:(double)arg0;
- (double)ascent;
- (void)encodeWithCoder:(id)arg0;
- (double)width;

@end
