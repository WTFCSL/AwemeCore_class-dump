//
//     Generated by private class-dump
//

@class NSString, IESLiveLinkRTCInteractSourceCropInfo;

@interface IESLiveLinkRTCInteractPublicStreamRegion : NSObject {
    NSString *_userId;
    NSString *_roomId;
    NSString *_alternateImage;
    double _x;
    double _y;
    double _width;
    double _height;
    long long _zOrder;
    double _alpha;
    long long _mediaType;
    long long _streamType;
    unsigned long long _renderMode;
    IESLiveLinkRTCInteractSourceCropInfo *_sourceCrop;
}

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *alternateImage;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long zOrder;
@property (nonatomic) double alpha;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long streamType;
@property (nonatomic) unsigned long long renderMode;
@property (retain, nonatomic) IESLiveLinkRTCInteractSourceCropInfo *sourceCrop;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)alternateImage;
- (id)sourceCrop;
- (void)setSourceCrop:(id)arg0;
- (void)setMediaType:(long long)arg0;
- (void).cxx_destruct;
- (double)height;
- (void)setAlpha:(double)arg0;
- (unsigned long long)renderMode;
- (long long)mediaType;
- (void)setY:(double)arg0;
- (double)y;
- (id)userId;
- (double)x;
- (long long)streamType;
- (void)setX:(double)arg0;
- (void)setRenderMode:(unsigned long long)arg0;
- (void)setAlternateImage:(id)arg0;
- (void)setWidth:(double)arg0;
- (double)alpha;
- (void)setHeight:(double)arg0;
- (double)width;
- (void)setUserId:(id)arg0;
- (long long)zOrder;
- (void)setStreamType:(long long)arg0;
- (void)setZOrder:(long long)arg0;

@end
