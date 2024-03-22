//
//     Generated by private class-dump
//

@class NSString;

@interface ACCSecurityFrameInsetsModel : MTLModel <MTLJSONSerializing, NSCopying> {
    long long _top;
    long long _left;
    long long _bottom;
    long long _right;
}

@property (nonatomic) long long top;
@property (nonatomic) long long left;
@property (nonatomic) long long bottom;
@property (nonatomic) long long right;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)frameInsetInfo;
- (id)initWithFrameInsetInfo:(id)arg0;
- (long long)left;
- (long long)right;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setTop:(long long)arg0;
- (long long)top;
- (void)setBottom:(long long)arg0;
- (long long)bottom;
- (void)setLeft:(long long)arg0;
- (id)initWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setRight:(long long)arg0;

@end