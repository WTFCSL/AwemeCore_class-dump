//
//     Generated by private class-dump
//

@class NSString;

@interface BDPCDDynamicCardBorderModel : NSObject {
    double _size;
    long long _style;
    NSString *_color;
}

@property (nonatomic) double size;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *color;

- (id)borderStyleDict;
- (long long)style;
- (id)color;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg0;
- (double)size;
- (void)setSize:(double)arg0;
- (void)setStyle:(long long)arg0;
- (void)setColor:(id)arg0;

@end
