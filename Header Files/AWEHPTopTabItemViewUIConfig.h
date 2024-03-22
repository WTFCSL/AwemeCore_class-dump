//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHPTopTabItemViewUIConfig : MTLModel <MTLJSONSerializing> {
    double _padding;
    double _iconLeftMargin;
    double _firstIconRightMargin;
    double _normalIconRightMargin;
    double _iconWidth;
}

@property (nonatomic) double padding;
@property (nonatomic) double iconLeftMargin;
@property (nonatomic) double firstIconRightMargin;
@property (nonatomic) double normalIconRightMargin;
@property (nonatomic) double iconWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)iconLeftMargin;
- (void)setIconLeftMargin:(double)arg0;
- (double)firstIconRightMargin;
- (double)normalIconRightMargin;
- (void)setFirstIconRightMargin:(double)arg0;
- (void)setNormalIconRightMargin:(double)arg0;
- (void)setPadding:(double)arg0;
- (double)padding;
- (double)iconWidth;
- (void)setIconWidth:(double)arg0;

@end
