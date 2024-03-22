//
//     Generated by private class-dump
//

@class NSString, IESECSliceXElementIterator, NSArray, IESECSliceXStyle, IESECSliceXActions, NSDictionary, IESECSliceXActiveStyle, IESECSliceXAction;

@interface IESECSliceXElement : IESECSliceXBaseModel <IESECSliceXJSONSerializing> {
    NSString *_type;
    IESECSliceXStyle *_style;
    IESECSliceXActiveStyle *_activeStyle;
    NSDictionary *_attrs;
    NSArray *_elements;
    IESECSliceXAction *_clickAction;
    IESECSliceXAction *_longClickAction;
    NSDictionary *_frameAnimations;
    NSDictionary *_storage;
    IESECSliceXActions *_actions;
    IESECSliceXElementIterator *_iterator;
    NSArray *_originElements;
    NSDictionary *_attrsExprMap;
    NSDictionary *_storageExprMap;
    NSDictionary *_previousData;
}

@property (retain, nonatomic) IESECSliceXElementIterator *iterator;
@property (retain, nonatomic) NSArray *originElements;
@property (retain, nonatomic) NSDictionary *attrsExprMap;
@property (retain, nonatomic) NSDictionary *storageExprMap;
@property (copy, nonatomic) NSDictionary *previousData;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) IESECSliceXStyle *style;
@property (retain, nonatomic) IESECSliceXActiveStyle *activeStyle;
@property (retain, nonatomic) NSDictionary *attrs;
@property (retain, nonatomic) NSArray *elements;
@property (retain, nonatomic) IESECSliceXAction *clickAction;
@property (retain, nonatomic) IESECSliceXAction *longClickAction;
@property (retain, nonatomic) NSDictionary *frameAnimations;
@property (retain, nonatomic) NSDictionary *storage;
@property (retain, nonatomic) IESECSliceXActions *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithDict:(id)arg0 context:(id)arg1;
+ (id)propertyKeyWithJSONKey;
+ (id)containerPropertyWithGenericClass;
+ (id)frameAnimationsCustomTransformWithValue:(id)arg0;

- (id)clickAction;
- (void)setClickAction:(id)arg0;
- (id)previousData;
- (void)setPreviousData:(id)arg0;
- (id)originElements;
- (id)longClickAction;
- (void)setLongClickAction:(id)arg0;
- (id)frameAnimations;
- (void)setFrameAnimations:(id)arg0;
- (void)setOriginElements:(id)arg0;
- (id)attrsExprMap;
- (void)setAttrsExprMap:(id)arg0;
- (id)storageExprMap;
- (void)setStorageExprMap:(id)arg0;
- (void)setStorage:(id)arg0;
- (void)setIterator:(id)arg0;
- (void)setElements:(id)arg0;
- (id)style;
- (void)refresh;
- (void).cxx_destruct;
- (id)storage;
- (id)actions;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)elements;
- (id)type;
- (void)updateModelWithData:(id)arg0;
- (id)activeStyle;
- (void)setType:(id)arg0;
- (void)setActions:(id)arg0;
- (void)setActiveStyle:(id)arg0;
- (void)setStyle:(id)arg0;
- (id)iterator;
- (id)attrs;
- (void)setAttrs:(id)arg0;

@end