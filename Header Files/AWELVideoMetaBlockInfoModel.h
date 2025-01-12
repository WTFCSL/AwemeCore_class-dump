//
//     Generated by private class-dump
//

@class NSString;

@interface AWELVideoMetaBlockInfoModel : MTLModel <MTLJSONSerializing> {
    long long _style;
    NSString *_title;
    NSString *_blockDescription;
}

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *blockDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)blockDescription;
- (void)setBlockDescription:(id)arg0;
- (long long)style;
- (void).cxx_destruct;
- (id)title;
- (void)setStyle:(long long)arg0;
- (void)setTitle:(id)arg0;

@end
