//
//     Generated by private class-dump
//

@class NSString;

@interface IESECPaddingConfig : MTLModel <MTLJSONSerializing> {
    double _top;
    double _left;
    double _bottom;
    double _right;
}

@property (nonatomic) double top;
@property (nonatomic) double left;
@property (nonatomic) double bottom;
@property (nonatomic) double right;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)left;
- (double)right;
- (void)setTop:(double)arg0;
- (double)top;
- (void)setBottom:(double)arg0;
- (double)bottom;
- (void)setLeft:(double)arg0;
- (void)setRight:(double)arg0;

@end
