//
//     Generated by private class-dump
//

@class NSString;

@interface AWEInteractionEditTagBrandTagModel : MTLModel <MTLJSONSerializing> {
    NSString *_brandID;
    NSString *_schema;
}

@property (retain, nonatomic) NSString *brandID;
@property (retain, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)schema;
- (id)brandID;
- (void)setBrandID:(id)arg0;

@end
