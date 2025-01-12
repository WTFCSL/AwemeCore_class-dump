//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@interface IESECGoodsResourceModel : MTLModel <MTLJSONSerializing> {
    NSString *_url;
    IESECURLModel *_icon;
    NSString *_desc;
    NSString *_descColor;
    IESECURLModel *_bgPic;
    unsigned long long _location;
}

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *descColor;
@property (retain, nonatomic) IESECURLModel *bgPic;
@property (nonatomic) unsigned long long location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setDescColor:(id)arg0;
- (id)descColor;
- (id)bgPic;
- (void)setBgPic:(id)arg0;
- (id)desc;
- (id)icon;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (unsigned long long)location;
- (void)setLocation:(unsigned long long)arg0;
- (void)setIcon:(id)arg0;
- (id)url;
- (void)setDesc:(id)arg0;

@end
