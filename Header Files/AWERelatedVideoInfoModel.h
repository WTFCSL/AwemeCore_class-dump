//
//     Generated by private class-dump
//

@class NSString, AWERelatedVideoJumpConfirmParamModel;

@interface AWERelatedVideoInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_barName;
    NSString *_awemeID;
    NSString *_source;
    long long _jumpStyle;
    long long _jumpXiguaType;
    long long _type;
    NSString *_extra;
    NSString *_jumpConfirmTitle;
    AWERelatedVideoJumpConfirmParamModel *_jumpConfirmModel;
}

@property (copy, nonatomic) NSString *barName;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long jumpStyle;
@property (nonatomic) long long jumpXiguaType;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *jumpConfirmTitle;
@property (retain, nonatomic) AWERelatedVideoJumpConfirmParamModel *jumpConfirmModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jumpConfirmModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (id)jumpConfirmTitle;
- (void)setJumpConfirmTitle:(id)arg0;
- (id)barName;
- (void)setBarName:(id)arg0;
- (long long)jumpStyle;
- (void)setJumpStyle:(long long)arg0;
- (long long)jumpXiguaType;
- (void)setJumpXiguaType:(long long)arg0;
- (id)jumpConfirmModel;
- (void)setJumpConfirmModel:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (long long)type;
- (id)extra;
- (void)setType:(long long)arg0;
- (void)setSource:(id)arg0;

@end
