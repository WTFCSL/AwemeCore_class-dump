//
//     Generated by private class-dump
//

@interface AFImageResponseSerializer : AFHTTPResponseSerializer {
    BOOL _automaticallyInflatesResponseImage;
    double _imageScale;
}

@property (nonatomic) double imageScale;
@property (nonatomic) BOOL automaticallyInflatesResponseImage;

- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(id *)arg2;
- (void)setAutomaticallyInflatesResponseImage:(BOOL)arg0;
- (BOOL)automaticallyInflatesResponseImage;
- (id)init;
- (void)setImageScale:(double)arg0;
- (double)imageScale;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
