//
//     Generated by private class-dump
//

@class NSString;

@interface BDPCameraModel : NSObject <NSCopying> {
    double _left;
    double _top;
    double _width;
    double _height;
    NSString *_mode;
    NSString *_resolution;
    NSString *_devicePosition;
    NSString *_flash;
    NSString *_frameSize;
    NSString *_data;
}

@property (nonatomic) double left;
@property (nonatomic) double top;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *devicePosition;
@property (copy, nonatomic) NSString *flash;
@property (copy, nonatomic) NSString *frameSize;
@property (copy, nonatomic) NSString *data;

- (id)bdp_resolution;
- (long long)bdp_devicePosition;
- (long long)bdp_flash;
- (long long)bdp_mode;
- (id)bdp_frameSize;
- (struct CGSize { double x0; double x1; })bdp_realFrameSize;
- (double)left;
- (void)setResolution:(id)arg0;
- (id)init;
- (id)data;
- (id)resolution;
- (void).cxx_destruct;
- (double)height;
- (id)devicePosition;
- (id)mode;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setData:(id)arg0;
- (void)setDevicePosition:(id)arg0;
- (void)setMode:(id)arg0;
- (void)setTop:(double)arg0;
- (double)top;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setLeft:(double)arg0;
- (void)setFrameSize:(id)arg0;
- (id)flash;
- (id)frameSize;
- (void)setFlash:(id)arg0;

@end
