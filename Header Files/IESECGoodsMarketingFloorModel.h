//
//     Generated by private class-dump
//

@class NSArray, NSString, IESECURLModel;

@interface IESECGoodsMarketingFloorModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_name;
    NSString *_URL;
    IESECURLModel *_icon;
    IESECURLModel *_image;
    NSArray *_icons;
    NSArray *_innerIconURLModelArray;
}

@property (retain, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *innerIconURLModelArray;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *URL;
@property (retain, nonatomic) IESECURLModel *icon;
@property (retain, nonatomic) IESECURLModel *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconURLModelArray;
- (id)innerIconURLModelArray;
- (void)setInnerIconURLModelArray:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (id)image;
- (void)setURL:(id)arg0;
- (void)setIcons:(id)arg0;
- (id)icons;
- (id)title;
- (void)setImage:(id)arg0;
- (void)setName:(id)arg0;
- (void)setIcon:(id)arg0;
- (id)URL;
- (id)name;
- (void)setTitle:(id)arg0;

@end