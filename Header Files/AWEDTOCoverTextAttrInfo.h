//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOCoverTextAttrInfo : MTLModel <MTLJSONSerializing> {
    NSString *_coverTextId;
    NSString *_coverTextFont;
    NSString *_coverTextColor;
}

@property (copy, nonatomic) NSString *coverTextId;
@property (copy, nonatomic) NSString *coverTextFont;
@property (copy, nonatomic) NSString *coverTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)coverTextId;
- (void)setCoverTextId:(id)arg0;
- (id)coverTextFont;
- (void)setCoverTextFont:(id)arg0;
- (void).cxx_destruct;
- (void)setCoverTextColor:(id)arg0;
- (id)coverTextColor;

@end
