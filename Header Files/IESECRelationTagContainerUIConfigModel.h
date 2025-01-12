//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECRelationTagContainerUIConfigModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasBorder;
    BOOL _rightAlignment;
    BOOL _matchParent;
    double _height;
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
    NSString *_backgroundColor;
    NSString *_borderColor;
    double _borderWidth;
    NSArray *_radiusList;
    unsigned long long _elementAlignment;
}

@property (nonatomic) double height;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) BOOL hasBorder;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSArray *radiusList;
@property (nonatomic) BOOL rightAlignment;
@property (nonatomic) BOOL matchParent;
@property (nonatomic) unsigned long long elementAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setRadiusList:(id)arg0;
- (void)setRightAlignment:(BOOL)arg0;
- (void)setMatchParent:(BOOL)arg0;
- (void)setElementAlignment:(unsigned long long)arg0;
- (id)radiusList;
- (BOOL)rightAlignment;
- (BOOL)matchParent;
- (double)rightMargin;
- (double)borderWidth;
- (void).cxx_destruct;
- (double)topMargin;
- (id)borderColor;
- (double)height;
- (void)setBorderColor:(id)arg0;
- (void)setLeftMargin:(double)arg0;
- (double)leftMargin;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setBorderWidth:(double)arg0;
- (id)backgroundColor;
- (double)bottomMargin;
- (void)setHeight:(double)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setRightMargin:(double)arg0;
- (void)setTopMargin:(double)arg0;
- (void)setBottomMargin:(double)arg0;
- (unsigned long long)elementAlignment;
- (BOOL)hasBorder;
- (void)setHasBorder:(BOOL)arg0;

@end
