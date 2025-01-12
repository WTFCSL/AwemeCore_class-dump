//
//     Generated by private class-dump
//

@class NSString;

@interface CSJCouponInfo : NSObject <NSCoding> {
    long long _style_type;
    long long _position;
    double _image_scale_rate;
    NSString *_image_gif_url;
    double _image_gif_aspect_ratio;
}

@property (nonatomic) long long style_type;
@property (nonatomic) long long position;
@property (nonatomic) double image_scale_rate;
@property (copy, nonatomic) NSString *image_gif_url;
@property (nonatomic) double image_gif_aspect_ratio;

- (long long)style_type;
- (void)setStyle_type:(long long)arg0;
- (double)image_scale_rate;
- (double)image_gif_aspect_ratio;
- (void)setImage_gif_url:(id)arg0;
- (void)setImage_scale_rate:(double)arg0;
- (void)setImage_gif_aspect_ratio:(double)arg0;
- (id)image_gif_url;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (long long)position;
- (void)setPosition:(long long)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
