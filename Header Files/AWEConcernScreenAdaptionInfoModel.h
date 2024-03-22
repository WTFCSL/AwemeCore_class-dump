//
//     Generated by private class-dump
//

@class NSString;

@interface AWEConcernScreenAdaptionInfoModel : NSObject <AWEConcernScreenAdaptionInfoModelProtocol> {
    BOOL _shouldAdapt;
    double _height;
    double _width;
    double _XMin;
    double _XMax;
    double _YMin;
    double _YMax;
}

@property (nonatomic) BOOL shouldAdapt;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double XMin;
@property (nonatomic) double XMax;
@property (nonatomic) double YMin;
@property (nonatomic) double YMax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAdapt;
- (void)setXMin:(double)arg0;
- (void)setXMax:(double)arg0;
- (void)setYMin:(double)arg0;
- (void)setYMax:(double)arg0;
- (void)setShouldAdapt:(BOOL)arg0;
- (double)XMin;
- (double)XMax;
- (double)YMin;
- (double)YMax;
- (id)init;
- (double)height;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;

@end